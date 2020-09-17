#include "oracle.hpp"
#include "cron.hpp"
#include "base64.h"
#include "base64.cpp"
#include <cmath>


#define DAPPSERVICES_ACTIONS() \
  XSIGNAL_DAPPSERVICE_ACTION \
  ORACLE_DAPPSERVICE_ACTIONS \
  CRON_DAPPSERVICE_ACTIONS 
#define DAPPSERVICE_ACTIONS_COMMANDS() \
  ORACLE_SVC_COMMANDS() \
  CRON_SVC_COMMANDS()

#define CONTRACT_NAME() debtgetter 

CONTRACT_START()


TABLE votercounts {

name voter;

uint64_t id;


auto primary_key() const { return id; }

uint64_t by_secondary( ) const { return voter.value; }

    };

typedef eosio::multi_index<name("voterincoms"), votercounts,
eosio::indexed_by<"byvotr"_n, eosio::const_mem_fun<votercounts, uint64_t, &votercounts::by_secondary>>> mituvoterit;




TABLE paljuvoted {

name voter;

uint8_t nrofvotes;

time_point_sec timefirstvote;

auto primary_key() const { return voter.value; }
    };

typedef eosio::multi_index<name("paljuvoted"), paljuvoted > paljuvotedtb;




TABLE blacklist {

name badboy;

auto primary_key() const { return badboy.value; }
    };

typedef eosio::multi_index<name("badboys"), blacklist > blacktable;









TABLE parimad {

name governor;

asset rewardsreceived;

auto primary_key() const { return governor.value; }


    };

typedef eosio::multi_index<name("parimad"), parimad > aintparimad;



// SEE TOIMIB
TABLE kysimused {
    
     uint64_t pollkey;
    
     name community;

     name creator;

     vector <uint64_t> totalvote;

     vector <string> answers;

     string question;

     string description;

     uint8_t nrofvoters = 0;

     uint64_t sumofallopt = 0;

     string uniqueurl;

     time_point_sec timecreated;


    auto primary_key() const { return pollkey; }

    uint64_t by_secondary( ) const { return community.value; }

    };


  typedef eosio::multi_index<"kysimused"_n, kysimused,
  eosio::indexed_by<"bycomju"_n, eosio::const_mem_fun<kysimused, uint64_t, &kysimused::by_secondary>>> kysimuste;








TABLE usrpoll {

    
    uint64_t pollkey;
    
    vector <uint64_t> usersvote = {0, 0, 0, 0, 0};

    
    auto primary_key() const { return pollkey; }




    };
     typedef eosio::multi_index<name("theuserpoll"), usrpoll > kasutajapoll;
  




TABLE personstaked {

    name staker;

    asset staked;

    auto primary_key() const { return staker.value; }

    };

    typedef eosio::multi_index<name("personstaked"), personstaked > personstkd;


TABLE voterstatzi {

    name voter;

    time_point_sec first_vote_time;

    uint64_t dailyvoted;

    auto primary_key() const { return voter.value; }

    };

    typedef eosio::multi_index<name("voterstatzi"), voterstatzi > voteristaati;




TABLE indtotalstkh {
        
    name staker;

    asset totalstaked;

    
    auto primary_key() const { return staker.value; }
    };
    typedef eosio::multi_index<name("indtotalstkh"), indtotalstkh > indstakud;



TABLE totalstk {

  asset totalstaked = {int64_t (00000), symbol ("GOVRN", 4)};
};
typedef eosio::singleton<"totalstk"_n, totalstk> totalstk_def;


TABLE commdata {
        
    name community;

    uint64_t totalvoters = 0;

    uint64_t totaltokensvoted = 0;

    string communityname;

    string description;

    string backgroundurl;

    string tokenurl;

    string tokensymbol;

    uint64_t toppoll;

    asset staked;

    vector <string> fetch1;

    vector <string> fetch2;

    vector <string> fetch3;
            
    uint64_t totalcirculation;

    auto primary_key() const { return community.value; }
    };
    typedef eosio::multi_index<name("commdata"), commdata > comdata;

















         TABLE account {
            asset    balance;

            uint64_t primary_key()const { return balance.symbol.code().raw(); }
         };

         TABLE currency_stats {
            asset    supply;
            asset    max_supply;
            name     issuer;

            uint64_t primary_key()const { return supply.symbol.code().raw(); }
         };

         typedef eosio::multi_index<name("accounts"), account > accounts;
         typedef eosio::multi_index<name("stat"), currency_stats > stats;





void votefunction (uint64_t oracleoutput, uint64_t pollkey, uint8_t option, name voter, uint64_t usersvote, name community, name schedname, name schednamests, name schednamevtb) {

  


  kysimuste pollstbl(_self, community.value);
     auto pollsrow = pollstbl.find(pollkey);


  check( pollsrow != pollstbl.end(), "Poll does not exist.");


  mituvoterit votercheck(_self, community.value);
      auto voterrow = votercheck.get_index<name("byvotr")>();
      auto itr = voterrow.find(voter.value);


    


  comdata commtbl(_self, _self.value);
     const auto& newvoter = commtbl.find(community.value);

  if (itr == voterrow.end()) {
            
            commtbl.modify( newvoter, _self, [&](auto& contract) {
            contract.totalvoters += 1;
             });
            votercheck.emplace( _self, [&](auto& contractt) {
            contractt.voter = voter;
            contractt.id = votercheck.available_primary_key();
             });




                               } 
                             


uint64_t voteadjusted = sqrt(usersvote);


  kasutajapoll userstbl(_self, voter.value);
  const auto& usersrow = userstbl.find(pollkey);
  uint8_t elmnr = option - 1;

   if (usersrow == userstbl.end()) {

  

            pollstbl.modify( pollsrow, _self, [&](auto& contract) {
            contract.totalvote[elmnr] += voteadjusted;
            contract.nrofvoters += 1;
            contract.sumofallopt += usersvote;


            });

            userstbl.emplace( _self, [&](auto& contractt) {
            contractt.usersvote[elmnr] = voteadjusted;
            contractt.pollkey = pollkey;
            });

            voteristaati statstbl(_self, community.value);
            const auto& statsrow = statstbl.find(voter.value); 
                    
             




              if (statsrow == statstbl.end()) {
                  statstbl.emplace( _self, [&](auto& contract) {
                  contract.voter = voter;
                  contract.dailyvoted = usersvote;
                  contract.first_vote_time = current_time_point();
                  });






struct vtristsi_struct

{

name community;

name voteri;

uint64_t hommik;

uint64_t vitt;


};


vtristsi_struct amaPayload;

amaPayload.community = community;
amaPayload.voteri = voter;
amaPayload.hommik = 17;
amaPayload.vitt = 18;
 




std::vector<char> rawPayload = eosio::pack<vtristsi_struct>(amaPayload);



//schedule_timer(schednamests, rawPayload, 86400);
schedule_timer(schednamests, rawPayload, 300);









                  
                                              }



              else { 
              

                   const auto &pede = statstbl.get( voter.value, "No voter (12)" );

                   if (pede.first_vote_time + seconds(86400) < current_time_point()) {
     


                      statstbl.modify( statsrow, _self, [&](auto& contract) { 
                      contract.dailyvoted = usersvote;
                      contract.first_vote_time = current_time_point();


                      });
                                                                                        }
                    else {   

                    


                const auto &pede = statstbl.get( voter.value, "No voter (1)" );


                 check((pede.dailyvoted + usersvote) <= oracleoutput, "Daily limit for voting reached.");


                    statstbl.modify( statsrow, _self, [&](auto& contract) {
                      contract.dailyvoted += usersvote;
                       });    
                      
                          }
                   }        
     



paljuvotedtb votesinrtab (_self, _self.value);
            const auto& votesrow = votesinrtab.find(voter.value);
if (votesrow == votesinrtab.end()) {
votesinrtab.emplace( _self, [&](auto& contractz) {
contractz.voter = voter;
contractz.nrofvotes = 1;
contractz.timefirstvote = current_time_point();
 });





struct paljuvtb_struct

{

name communka;

name votek;

uint64_t kala;

uint64_t rebane;


};


paljuvtb_struct gamaPayload;

gamaPayload.communka = community;
gamaPayload.votek = voter;
gamaPayload.kala = 88;
gamaPayload.rebane = 89;
 




std::vector<char> rawPayload = eosio::pack<paljuvtb_struct>(gamaPayload);



//schedule_timer(schednamevtb, rawPayload, 86400);
schedule_timer(schednamevtb, rawPayload, 290);










 }

 else {

             const auto &peder = votesinrtab.get( voter.value, "Nobody" );
if (peder.timefirstvote + seconds(86400) < current_time_point()) {

            votesinrtab.modify( votesrow, _self, [&](auto& contracto) {
            contracto.nrofvotes = 1;
            contracto.timefirstvote = current_time_point();
 });
 }

 else {
            votesinrtab.modify( votesrow, _self, [&](auto& contractoo) {
            contractoo.nrofvotes += 1;
            });
            }
      }








             const auto &pedro = votesinrtab.get( voter.value, "Nobodys" );

             if (pedro.nrofvotes <= 3) {

totalstk_def totalstktbl(_self, _self.value);
  totalstk newstats;

newstats = totalstktbl.get();
  
auto sym = symbol ("GOVRN", 4);

        auto sym_code_raw = sym.code().raw();

        stats statstable( _self, sym_code_raw );
        auto existing = statstable.find( sym_code_raw );
        const auto& st = *existing;


//const int64_t interval = (5000000000);  

const int64_t interval = (250000000000);  


int64_t halvings =  (st.supply.amount / interval);



comdata comtblt(_self, _self.value); 

const auto &iter = comtblt.get( community.value, "No such community (6)" );



double percentage = (double(iter.staked.amount)/double(newstats.totalstaked.amount));

double multiplier = pow(percentage, 1/3.); 

int64_t varreward = (3150000000);

int64_t minreward = (450000000);


int64_t rewardint =  multiplier * varreward + minreward;

int64_t divider = pow( 2 , halvings);

//int64_t adjrewardint = rewardint/divider;

int64_t adjrewardint = (10000);

struct asset reward = {int64_t (adjrewardint), symbol ("GOVRN", 4)};




             issuereward ( voter, reward );



struct asset rewardamount = {int64_t (adjrewardint), symbol ("GOVRN", 4)};

             aintparimad leaderbrd(_self, community.value);
             const auto& leaderrow = leaderbrd.find(voter.value);
                  
                   if (leaderrow == leaderbrd.end()) {

                  leaderbrd.emplace( _self, [&](auto& contract) {
                  contract.governor = voter;
                  contract.rewardsreceived = rewardamount;
                  });    

                  } 

                  else { 

                  leaderbrd.modify( leaderrow, _self, [&](auto& contract) {
                   contract.rewardsreceived += rewardamount;
                   });    
                   }




            


                                      }





struct pesu_struct

{

uint64_t pollikey;

name voteri;

uint64_t hommik;

uint64_t vitt;


};


pesu_struct donPayload;

donPayload.pollikey = pollkey;
donPayload.voteri = voter;
donPayload.hommik = 9;
donPayload.vitt = 10;
 




std::vector<char> rawPayload = eosio::pack<pesu_struct>(donPayload);



//schedule_timer(schedname, rawPayload, 86400);
schedule_timer(schedname, rawPayload, 300);



 }


  else {  

            const auto &pede = userstbl.get( pollkey, "k2ivittu" );

            uint64_t usersvotebck = pow(pede.usersvote[elmnr], 2);



            pollstbl.modify(pollsrow, _self, [&](auto& contractt) {
            contractt.totalvote[elmnr] += voteadjusted - pede.usersvote[elmnr];
           contractt.sumofallopt += usersvote - usersvotebck;

            });

             userstbl.modify(usersrow, _self, [&](auto& contract) {
            contract.usersvote[elmnr] += voteadjusted - usersrow->usersvote[elmnr];
            });

          voteristaati statstbl(_self, community.value);
            const auto& statsrow = statstbl.find(voter.value); 
            



if (statsrow == statstbl.end()) {
                  statstbl.emplace( _self, [&](auto& contract) {
                  contract.voter = voter;
                  contract.dailyvoted = usersvote;
                  contract.first_vote_time = current_time_point();
                  });



struct vtristsi_struct

{

name community;

name voteri;

uint64_t hommik;

uint64_t vitt;


};


vtristsi_struct amaPayload;

amaPayload.community = community;
amaPayload.voteri = voter;
amaPayload.hommik = 17;
amaPayload.vitt = 18;
 




std::vector<char> rawPayload = eosio::pack<vtristsi_struct>(amaPayload);



//schedule_timer(schednamests, rawPayload, 86400);
schedule_timer(schednamests, rawPayload, 300);








                                              }



              else { 
              






                   const auto &iter = statstbl.get( voter.value, "No such voter exists" );

                    if (iter.first_vote_time + seconds(300) < current_time_point()) {
     

                      statstbl.modify( statsrow, _self, [&](auto& contract) { 
                      contract.dailyvoted = usersvote;
                      contract.first_vote_time = current_time_point();
                      });
                                                                                        }
                    else {   

                    const auto &pede = statstbl.get( voter.value, "No voter (1)" );


                   check((pede.dailyvoted + usersvote) <= oracleoutput, "Daily limit for same poll as well.");


                    statstbl.modify( statsrow, _self, [&](auto& contract) {
                      contract.dailyvoted += usersvote;
                       });    

        

                      
                         }
                   }        




comdata poputbl(_self, _self.value);
const auto& poprow = poputbl.find(community.value);
if (poprow == poputbl.end()) {
poputbl.emplace( _self, [&](auto& contract) {
contract.totaltokensvoted = usersvote;
contract.community = community;
  });
                              }
else {
poputbl.modify( poprow, _self, [&](auto& contract) {
contract.totaltokensvoted += usersvote;
});
 }


}
}













void sub_balance( const name& owner, const asset& value ) {
   accounts from_acnts( _self, owner.value );

   const auto& from = from_acnts.get( value.symbol.code().raw(), "no balance object found" );


   indstakud indstktable( _self, _self.value );
   const auto& indrow = indstktable.find(owner.value); 
   
   if (indrow == indstktable.end()) {

  const struct asset totalstaked = {int64_t (00000), symbol ("GOVRN", 4)};  

   check( from.balance.amount - totalstaked.amount  >= value.amount, "overdrawn balance" );

 
                                 }
else {


   const auto& sergei = indstktable.get( owner.value, "no individual stake table found" );


   check( from.balance.amount - sergei.totalstaked.amount  >= value.amount, "overdrawn liquid balance, unstake before transferring" );

}
                                

   from_acnts.modify( from, owner, [&]( auto& a ) {
         a.balance -= value;
      });
}

void add_balance( const name& owner, const asset& value, const name& ram_payer )
{
   accounts to_acnts( _self, owner.value );
   auto to = to_acnts.find( value.symbol.code().raw() );
   if( to == to_acnts.end() ) {
      to_acnts.emplace( ram_payer, [&]( auto& a ){
        a.balance = value;
      });
   } else {
      to_acnts.modify( to, same_payer, [&]( auto& a ) {
        a.balance += value;
      });
   }
}







void issuereward ( name owner, asset quantity )
    {
        auto sym = quantity.symbol;
        check( sym.is_valid(), "Invalid symbol name" );

        auto sym_code_raw = sym.code().raw();

        stats statstable( _self, sym_code_raw );
        auto existing = statstable.find( sym_code_raw );
        check( existing != statstable.end(), "Token with that symbol name does not exist - Please create the token before issuing" );

        const auto& st = *existing;

      
        //require_auth ( _self);
        require_recipient( owner );
       

        check( quantity.is_valid(), "Invalid quantity value" );
        check( st.supply.symbol == quantity.symbol, "Symbol precision mismatch" );
        check( st.max_supply.amount - st.supply.amount >= quantity.amount, "Quantity value cannot exceed the available supply" );

        statstable.modify( st, _self, [&]( auto& s ) {
            s.supply += quantity;
        });
        
        
        add_balance( owner, quantity, _self);
        
    }



void burn ( name from, asset quantity, string memo )

{
        auto sym = quantity.symbol;
        check( sym.is_valid(),     "Invalid symbol name"                   );
        check( memo.size() <= 256, "Memo must be less than 256 characters" );

        auto sym_code_raw = sym.code().raw();

        stats statstable( _self, sym_code_raw );

        auto existing = statstable.find( sym_code_raw );
        check( existing != statstable.end(), "Token with that symbol name does not exist - Please create the token before burning" );

        const auto& st = *existing;

        //require_auth( from );
        require_recipient( from );
        check( quantity.is_valid(), "Invalid quantity value" );
        check( quantity.amount > 0, "Quantity value must be positive" );

        check( st.supply.symbol == quantity.symbol, "Symbol precision mismatch" );
        check( st.supply.amount >= quantity.amount, "Quantity value cannot exceed the available supply" );

        statstable.modify( st, same_payer, [&]( auto& s ) 
        {
            s.supply -= quantity;
        });

        sub_balance( from, quantity );
    }











bool timer_callback(name timer, std::vector<char> rawPayload, uint32_t seconds){





struct bron_struct {

uint64_t pidarok;

name creator;

name community;

uint64_t sitt;

};


auto payload = eosio::unpack<bron_struct>(rawPayload);

uint64_t pollkey = payload.pidarok;

name creator = payload.creator;

name community = payload.community;

uint64_t kakatuli = payload.sitt;




if (kakatuli == 5)                      {

  kysimuste pollstbl(_self, community.value);

  const auto &pede = pollstbl.get( pollkey, "k2ivittupede" );



  comdata comtblt(_self, _self.value);

  const auto &homo = comtblt.get( community.value, "k2ivittuhomo" );

  



if ((double(pede.sumofallopt)/homo.toppoll) >= 0.2) {

  totalstk_def totalstktbl(_self, _self.value);
  totalstk newstats;

newstats = totalstktbl.get();
  
auto sym = symbol ("GOVRN", 4);

        auto sym_code_raw = sym.code().raw();

        stats statstable( _self, sym_code_raw );
        auto existing = statstable.find( sym_code_raw );
        const auto& st = *existing;


const int64_t interval = (250000000000);  

int64_t halvings =  (st.supply.amount / interval);



double percentage = (double(homo.staked.amount)/double(newstats.totalstaked.amount));

double multiplier = pow(percentage, 1/3.); 

int64_t varreward = (82250000000);

int64_t minreward = (11750000000);

int64_t rewardint =  multiplier * varreward + minreward;

int64_t divider = pow( 2 , halvings);

//int64_t adjrewardint = rewardint/divider;

int64_t adjrewardint = (10000);

struct asset reward = {int64_t (adjrewardint), symbol ("GOVRN", 4)};

issuereward ( creator, reward );



struct asset rewardamount = {int64_t (adjrewardint), symbol ("GOVRN", 4)};

             aintparimad leaderbrd(_self, community.value);
             const auto& leaderrow = leaderbrd.find(creator.value);
                  
                   if (leaderrow == leaderbrd.end()) {

                  leaderbrd.emplace( _self, [&](auto& contract) {
                  contract.governor = creator;
                  contract.rewardsreceived = rewardamount;
                  });    

                  } 

                  else { 

                  leaderbrd.modify( leaderrow, _self, [&](auto& contract) {
                   contract.rewardsreceived += rewardamount;
                   });    
                   }
                                            }

                                            else  {}

if (homo.toppoll < pede.sumofallopt) {

                  comtblt.modify( homo, _self, [&](auto& contract) {
                  contract.toppoll = pede.sumofallopt;
                   });
                                    }


else {}

auto pollrow = pollstbl.find(pollkey);
  
  pollstbl.erase(pollrow);    

}

else {

struct pesu_struct {

uint64_t pollikey;

name voteri;

uint64_t hommik;

uint64_t vitt;


};


auto payloader = eosio::unpack<pesu_struct>(rawPayload);

uint64_t pollikey = payloader.pollikey;

name voteri = payloader.voteri;

uint64_t hommik = payloader.hommik;

uint64_t vitt = payloader.vitt;


if (hommik == 9)

{


  kasutajapoll userstbl(_self, voteri.value);
  auto usersrow = userstbl.find(pollikey);
  userstbl.erase(usersrow);
  }

  else 

{


struct vtristsi_struct

{

name community;

name voteri;

uint64_t hommik;

uint64_t vitt;


};



auto payloader = eosio::unpack<vtristsi_struct>(rawPayload);

name community = payloader.community;

name voteri = payloader.voteri;

uint64_t hommik = payloader.hommik;

uint64_t vitt = payloader.vitt;


if (vitt == 18)

{

  voteristaati userstbl(_self, community.value);
  auto usersrow = userstbl.find(voteri.value);
  userstbl.erase(usersrow);
}

else {

struct paljuvtb_struct

{

name communka;

name votek;

uint64_t kala;

uint64_t rebane;


};


auto payloader = eosio::unpack<paljuvtb_struct>(rawPayload);

name community = payloader.communka;

name votek = payloader.votek;

uint64_t hommik = payloader.kala;

uint64_t vitt = payloader.rebane;


paljuvotedtb votesinrtab (_self, _self.value);
auto votesrow = votesinrtab.find(votek.value);
votesinrtab.erase(votesrow);


}


}




  }




return false;                                      

  

};







ACTION finishpoll ( uint64_t pollkey,

name creator,

name community) {

require_auth(_self);

kysimuste pollstbl(_self, community.value);

  const auto &pede = pollstbl.get( pollkey, "k2ivittupede" );



  comdata comtblt(_self, _self.value);

  const auto &homo = comtblt.get( community.value, "k2ivittuhomo" );

  



if ((double(pede.sumofallopt)/homo.toppoll) >= 0.2) {

  totalstk_def totalstktbl(_self, _self.value);
  totalstk newstats;

newstats = totalstktbl.get();
  
auto sym = symbol ("GOVRN", 4);

        auto sym_code_raw = sym.code().raw();

        stats statstable( _self, sym_code_raw );
        auto existing = statstable.find( sym_code_raw );
        const auto& st = *existing;


const int64_t interval = (250000000000);  

int64_t halvings =  (st.supply.amount / interval);



double percentage = (double(homo.staked.amount)/double(newstats.totalstaked.amount));

double multiplier = pow(percentage, 1/3.); 

int64_t varreward = (82250000000);

int64_t minreward = (11750000000);

int64_t rewardint =  multiplier * varreward + minreward;

int64_t divider = pow( 2 , halvings);

//int64_t adjrewardint = rewardint/divider;
int64_t adjrewardint = (10000);

struct asset reward = {int64_t (adjrewardint), symbol ("GOVRN", 4)};

issuereward ( creator, reward );



struct asset rewardamount = {int64_t (adjrewardint), symbol ("GOVRN", 4)};

             aintparimad leaderbrd(_self, community.value);
             const auto& leaderrow = leaderbrd.find(creator.value);
                  
                   if (leaderrow == leaderbrd.end()) {

                  leaderbrd.emplace( _self, [&](auto& contract) {
                  contract.governor = creator;
                  contract.rewardsreceived = rewardamount;
                  });    

                  } 

                  else { 

                  leaderbrd.modify( leaderrow, _self, [&](auto& contract) {
                   contract.rewardsreceived += rewardamount;
                   });    
                   }
                                            }

                                            else  {}

if (homo.toppoll < pede.sumofallopt) {

                  comtblt.modify( homo, _self, [&](auto& contract) {
                  contract.toppoll = pede.sumofallopt;
                   });
                                    }


else {}

auto pollrow = pollstbl.find(pollkey);
  
  pollstbl.erase(pollrow);    

}







ACTION create( const name&   issuer,
                    const asset&  maximum_supply )
{
    require_auth( _self );

    auto sym = maximum_supply.symbol;
    check( sym.is_valid(), "invalid symbol name" );
    check( maximum_supply.is_valid(), "invalid supply");
    check( maximum_supply.amount > 0, "max-supply must be positive");

    stats statstable( _self, sym.code().raw() );
    auto existing = statstable.find( sym.code().raw() );
    check( existing == statstable.end(), "token with symbol already exists" );

    statstable.emplace( _self, [&]( auto& s ) {
       s.supply.symbol = maximum_supply.symbol;
       s.max_supply    = maximum_supply;
       s.issuer        = issuer;
    });
}


ACTION issue( const name& to, const asset& quantity, const string& memo )
{
    auto sym = quantity.symbol;
    check( sym.is_valid(), "invalid symbol name" );
    check( memo.size() <= 256, "memo has more than 256 bytes" );

    stats statstable( _self, sym.code().raw() );
    auto existing = statstable.find( sym.code().raw() );
    check( existing != statstable.end(), "token with symbol does not exist, create token before issue" );
    const auto& st = *existing;
    check( to == st.issuer, "tokens can only be issued to issuer account" );

    require_auth( st.issuer );
    check( quantity.is_valid(), "invalid quantity" );
    check( quantity.amount > 0, "must issue positive quantity" );

    check( quantity.symbol == st.supply.symbol, "symbol precision mismatch" );
    check( quantity.amount <= st.max_supply.amount - st.supply.amount, "quantity exceeds available supply");

    statstable.modify( st, same_payer, [&]( auto& s ) {
       s.supply += quantity;
    });

    add_balance( st.issuer, quantity, st.issuer );
}

ACTION retire( const asset& quantity, const string& memo )
{
    auto sym = quantity.symbol;
    check( sym.is_valid(), "invalid symbol name" );
    check( memo.size() <= 256, "memo has more than 256 bytes" );

    stats statstable( _self, sym.code().raw() );
    auto existing = statstable.find( sym.code().raw() );
    check( existing != statstable.end(), "token with symbol does not exist" );
    const auto& st = *existing;

    require_auth( st.issuer );
    check( quantity.is_valid(), "invalid quantity" );
    check( quantity.amount > 0, "must retire positive quantity" );

    check( quantity.symbol == st.supply.symbol, "symbol precision mismatch" );

    statstable.modify( st, same_payer, [&]( auto& s ) {
       s.supply -= quantity;
    });

    sub_balance( st.issuer, quantity );
}

ACTION transfer( const name&    from,
                      const name&    to,
                      const asset&   quantity,
                      const string&  memo )
{
    check( from != to, "cannot transfer to self" );
    require_auth( from );
    check( is_account( to ), "to account does not exist");
    auto sym = quantity.symbol.code();
    stats statstable( _self, sym.raw() );
    const auto& st = statstable.get( sym.raw() );
    
    blacktable blacktbl(_self, _self.value);
    auto blackrow = blacktbl.find(from.value);
    check( blackrow == blacktbl.end(), "This account has been blacklisted");

    require_recipient( from );
    require_recipient( to );

    check( quantity.is_valid(), "invalid quantity" );
    check( quantity.amount > 0, "must transfer positive quantity" );
    check( quantity.symbol == st.supply.symbol, "symbol precision mismatch" );
    check( memo.size() <= 256, "memo has more than 256 bytes" );

    auto payer = has_auth( to ) ? to : from;

    sub_balance( from, quantity );
    add_balance( to, quantity, payer );
}



ACTION open( const name& owner, const symbol& symbol, const name& ram_payer )
{
   require_auth( ram_payer );

   auto sym_code_raw = symbol.code().raw();

   stats statstable( _self, sym_code_raw );
   const auto& st = statstable.get( sym_code_raw, "symbol does not exist" );
   check( st.supply.symbol == symbol, "symbol precision mismatch" );

   accounts acnts( _self, owner.value );
   auto it = acnts.find( sym_code_raw );
   if( it == acnts.end() ) {
      acnts.emplace( ram_payer, [&]( auto& a ){
        a.balance = asset{0, symbol};
      });
   }
}

ACTION close( const name& owner, const symbol& symbol )
{
   require_auth( owner );
   accounts acnts( _self, owner.value );
   auto it = acnts.find( symbol.code().raw() );
   check( it != acnts.end(), "Balance row already deleted or never existed. Action won't have any effect." );
   check( it->balance.amount == 0, "Cannot close because the balance is not zero." );
   acnts.erase( it );
}





ACTION unstkfromcom (name staker, name community,
 asset quantity) {

require_auth ( staker );

    auto sym = quantity.symbol.code();
    stats statstable( _self, sym.raw() );
    const auto& st = statstable.get( sym.raw() );

    check( quantity.is_valid(), "invalid quantity" );
    check( quantity.amount > 0, "must stake positive quantity" );
    check( quantity.symbol == st.supply.symbol, "symbol precision mismatch while staking" );

//SUBSTRACTING TO TOTAL INDIVIDUALS sTAKED AMOUNT
    indstakud indtbl(_self, _self.value);
    const auto& igor = indtbl.get( staker.value, "You have nothing staked." );
    const auto& indrow = indtbl.find(staker.value); 


       indtbl.modify( indrow, _self, [&](auto& contract) {
            contract.totalstaked -= quantity;
             });
          

   
   const auto& igorok = indtbl.get( staker.value, "no individual stake table found" );
   check( igor.totalstaked.amount >= 0, "Unstaking more than you have total staked (1)" );


            personstkd personstktbl(_self, community.value);
            const auto& personstkrow = personstktbl.find(staker.value); 
                       
    

                   personstktbl.modify( personstkrow, _self, [&](auto& contract) { 
                   contract.staked -= quantity;
                   });
                   




  comdata comtblt(_self, _self.value);
  auto comrow = comtblt.find(community.value);

  comtblt.modify( comrow, _self, [&](auto& contract) {
            contract.staked -= quantity;
             });

   const auto& sergei = comtblt.get( community.value, "no individual stake table found" );

  check( sergei.staked.amount >= 0, "Unstaking more than staked for your community" );
           

// SUBSTRACTING FROM TOTAL STAKED TABLE
  totalstk_def totalstktbl(_self, _self.value);
  totalstk newstats;
  
    newstats = totalstktbl.get();
  
  newstats.totalstaked -= quantity;
  totalstktbl.set(newstats, _self);

 check( newstats.totalstaked.amount >= 0, "Unstaking more than staked in Consortium system" );


}






ACTION stakeforcomm (name staker, name community,
 asset quantity) {

require_auth ( staker );

    auto sym = quantity.symbol.code();
    stats statstable( _self, sym.raw() );
    const auto& st = statstable.get( sym.raw() );

    check( quantity.is_valid(), "invalid quantity" );
    check( quantity.amount > 0, "must stake positive quantity" );
    check( quantity.symbol == st.supply.symbol, "symbol precision mismatch while staking" );

    accounts from_acnts( _self, staker.value );
   const auto& from = from_acnts.get( quantity.symbol.code().raw(), "no balance object found" );

//ADDING TO TOTAL INDIVIDUALS TAKED AMOUNT




    indstakud indtbl(_self, _self.value);
    const auto& indrow = indtbl.find(staker.value); 

     if (indrow == indtbl.end()) {

    indtbl.emplace(_self, [&](auto& item) {
    item.totalstaked = quantity;
    item.staker = staker;
     });

       check( from.balance.amount >= quantity.amount, "Not enough GOVRN to stake (1)" );


                                 }

     else {

       indtbl.modify( indrow, _self, [&](auto& contract) {
            contract.totalstaked += quantity;
             });

  const auto& igor = indtbl.get( staker.value, "No individual stake table found" );

  check( from.balance.amount >= igor.totalstaked.amount, "Not enough GOVRN to stake (2)" );


          }

   


            personstkd personstktbl(_self, community.value);
            const auto& personstkrow = personstktbl.find(staker.value); 
                       
             


              if (personstkrow == personstktbl.end()) {

                  personstktbl.emplace( _self, [&](auto& contract) {
                  contract.staker = staker;
                  contract.staked = quantity;
                  });
                                              }

              else { 

                   personstktbl.modify( personstkrow, _self, [&](auto& contract) { 
                   contract.staked += quantity;
                   });
                   }
                



  comdata comtblt(_self, _self.value);
  auto comrow = comtblt.find(community.value);

  comtblt.modify( comrow, _self, [&](auto& contract) {
            contract.staked += quantity;
             });

// ADDING TO TOTAL STAKED TABLE


totalstk_def totalstktbl(_self, _self.value);
  totalstk newstats;
  if(!totalstktbl.exists()){
    totalstktbl.set(newstats, _self);
  }
  else{
    newstats = totalstktbl.get();
  }
  newstats.totalstaked += quantity;
  totalstktbl.set(newstats, _self);


}



ACTION modcommunity (name community, string communityname, string description, string backgroundurl, string tokenurl)
{


require_auth ( _self);

comdata comtblt(_self, _self.value);
auto comrow = comtblt.find(community.value);

check(comrow != comtblt.end(), "Community does not exist");

            
    comtblt.modify( comrow, _self, [&](auto& item) {
    item.communityname = communityname;
    item.description = description;
    item.backgroundurl = backgroundurl;
    item.tokenurl = tokenurl;
  });

  }






ACTION addcommunity (name community,
 string communityname, string description, string backgroundurl, string tokenurl, string tokensymbol, vector <string> fetch1, vector <string> fetch2, vector <string> fetch3,
  uint64_t totalcirculation) {


require_auth ( _self);


comdata comtblt(_self, _self.value);
auto comrow = comtblt.find(community.value);
check(comrow == comtblt.end(), "This community has been added");

struct asset initial = {int64_t (00000), symbol ("GOVRN", 4)};

comtblt.emplace(_self, [&](auto& item) {
    item.community = community;
    item.communityname = communityname;
    item.description = description;
    item.backgroundurl = backgroundurl;
    item.tokenurl = tokenurl;
    item.totalvoters = 0;
    item.totaltokensvoted = 0;
    item.toppoll = 1;
    item.tokensymbol= tokensymbol;
    item.staked = initial;
    item.fetch1 = fetch1;
    item.fetch2 = fetch2;
    item.fetch3 = fetch3;
    item.totalcirculation = totalcirculation;
  });
 }





ACTION addbadboys (name badboy, uint64_t pollkey) {

require_auth ( _self);





blacktable blacktbl(_self, _self.value);
auto blackrow = blacktbl.find(badboy.value);
check(blackrow == blacktbl.end(), "This account has been blacklisted");

blacktbl.emplace(_self, [&](auto& item) {
    item.badboy = badboy;
  });
 }


ACTION delbadboys (name badboy) {

require_auth ( _self);

blacktable blacktbl(_self, _self.value);
auto blackrow = blacktbl.find(badboy.value);
check( blackrow != blacktbl.end(), "This account is not blacklisted");

  blacktbl.erase(blackrow);

    
 }



ACTION supplydown( const name&   issuer,
                    const asset&  maximum_supply )
{
    require_auth( _self );

    auto sym = maximum_supply.symbol;
    check( sym.is_valid(), "invalid symbol name" );
    check( maximum_supply.is_valid(), "invalid supply");
    check( maximum_supply.amount > 0, "max-supply must be positive");

    stats statstable( _self, sym.code().raw() );
    auto existing = statstable.find( sym.code().raw() );

    statstable.modify( existing ,_self, [&]( auto& s ) {
       s.max_supply    = maximum_supply;
    
    });
}

ACTION votertabdel( const name&   voter)
                     
{
    require_auth( _self );

   paljuvotedtb votesinrtab (_self, _self.value);
auto votesrow = votesinrtab.find(voter.value);
votesinrtab.erase(votesrow);
}




ACTION createpollz (string question, vector <string> answers, vector <uint64_t> totalvote, name community, name creator, string uniqueurl, string description, name schedname) {

require_auth ( creator );


  blacktable blacktbl(_self, _self.value);
  auto blackrow = blacktbl.find(creator.value);
  check( blackrow == blacktbl.end(), "This account has been blacklisted");

auto n = name{creator};

std::string str = n.to_string();

if (community == name("viggcommcons")) {

std::string json = "{\"json\":\"true\",\"code\":\"vig111111111\",\"scope\":\"" + str + "\",\"table\":\"accounts\"}";

std::string encoded = base64_encode(json);

std::string url = "https+post+json://rows.0.balance/" + encoded + "/api.eosn.io/v1/chain/get_table_rows"; 

vector<char> urlv(url.begin(), url.end());
      

      auto debt = getURI(urlv, [&]( auto& results ) {
      
      check(results.size() > 0, "You don't seem to hold any tokens");
      auto itr = results.begin();
      return itr->result;
    });


}

else if (community != name("eosscommcons")) {

check(false, "No support for your community.");

}


totalstk_def totalstktbl(_self, _self.value);
  totalstk newstats;

newstats = totalstktbl.get();
  
auto sym = symbol ("GOVRN", 4);

        auto sym_code_raw = sym.code().raw();

        stats statstable( _self, sym_code_raw );
        auto existing = statstable.find( sym_code_raw );
        const auto& st = *existing;


const int64_t interval = (250000000000);  


int64_t halvings =  (st.supply.amount / interval);


int64_t divider = pow( 2 , halvings);

int64_t initialcost = (8000000000);

//int64_t adjcost = initialcost/divider;

int64_t adjcost = (10000);

struct asset cost = {int64_t (adjcost), symbol ("GOVRN", 4)};




  string memo = ("Token burn to create a poll.");


  burn (creator ,cost , memo);
  

      check(!totalvote.empty(), "No empty totalvote");
      check(!answers.empty(), "No empty answers");
      check(totalvote.size() > 0, "Input totalvote");
      check(question.size() > 0, "Input question");
      check(answers.size() > 0, "Minimum 2 answers");
      check(answers.size() <= 5, "Too many answer options");
      check(totalvote.size() <= 5, "Too many vote slots");
      check(question.size() <= 250, "Too lenghty of a question");
      check(description.size() <= 250, "Too lenghty of a description");



  kysimuste pollstbl(_self, community.value);

  pollstbl.emplace(_self, [&](auto& item) {
    item.pollkey = pollstbl.available_primary_key();
    item.creator = creator;
    item.answers = answers;
    item.question = question;
    item.totalvote = totalvote;
    item.community = community;
    item.uniqueurl = uniqueurl;
    item.description = description;
    item.timecreated = current_time_point();
  });

  



struct bron_struct

{

uint64_t pidarok;

name creator;

name community;

uint64_t sitt;

};


bron_struct cronPayload;

cronPayload.pidarok = pollstbl.available_primary_key() - 1;
cronPayload.creator = creator;
cronPayload.community = community;
cronPayload.sitt = 5;





std::vector<char> rawPayload = eosio::pack<bron_struct>(cronPayload);



//schedule_timer(schedname, rawPayload, 259200);
schedule_timer(schedname, rawPayload, 300);

  }
  






ACTION votez( uint64_t usersvote, uint64_t pollkey, uint8_t option, name community, name voter, name schedname, name schednamests, name schednamevtb) {

require_auth ( voter );


check(usersvote >= 1, "Why do you want to vote with 0 tokens?");



  blacktable blacktbl(_self, _self.value);
  auto blackrow = blacktbl.find(voter.value);
  check( blackrow == blacktbl.end(), "This account has been blacklisted");



auto n = name{voter};

std::string str = n.to_string();


if (community == name("eosscommcons")) {


std::string jsonbal = "{\"json\":\"true\",\"code\":\"eosio.token\",\"scope\":\"" + str + "\",\"table\":\"accounts\"}";

std::string encodedbal = base64_encode(jsonbal);

std::string urlbal = "https+post+json://rows.0.balance/" + encodedbal + "/api.eosn.io/v1/chain/get_table_rows"; 







std::string jsonnetcpu = "{\"json\":\"true\",\"code\":\"eosio\",\"scope\":\"" + str + "\",\"table\":\"delband\"}";

std::string encodednetcpu = base64_encode(jsonnetcpu);


std::string jsonrex = "{\"json\":\"true\",\"code\":\"eosio\",\"scope\":\"eosio\",\"table\":\"rexbal\",\"lower_bound\":\"" + str + "\",\"upper_bound\":\"" + str + "\"}";

std::string encodedrex = base64_encode(jsonrex);


std::string jsonrexname = "{\"json\":\"true\",\"code\":\"eosio\",\"scope\":\"eosio\",\"table\":\"rexbal\",\"lower_bound\":\"" + str + "\"}";

std::string encodedrexname = base64_encode(jsonrexname);






std::string urlcpu = "https+post+json://rows.0.cpu_weight/" + encodednetcpu + "/api.eosn.io/v1/chain/get_table_rows"; 
std::string urlnet = "https+post+json://rows.0.net_weight/" + encodednetcpu + "/api.eosn.io/v1/chain/get_table_rows";

std::string urlrex = "https+post+json://rows.0.vote_stake/" + encodedrex + "/api.eosn.io/v1/chain/get_table_rows";
std::string urlrexname = "https+post+json://rows.0.owner/" + encodedrexname + "/api.eosn.io/v1/chain/get_table_rows";  




    vector<char> urlv(urlbal.begin(), urlbal.end());
     
    auto bal = getURI(urlv, [&]( auto& results ) {


      
      check(results.size() > 0, "You don't seem to hold any tokens");
      auto itr = results.begin();
      return itr->result;
    });
 

    string balstr(bal.begin(), bal.end());

    uint64_t oracleoutputbal = std::stoull(balstr);




vector<char> urlva(urlcpu.begin(), urlcpu.end());
     
    auto cpu = getURI(urlva, [&]( auto& results ) {


      
      check(results.size() > 0, "You don't seem to hold any cpu");
      auto itr = results.begin();
      return itr->result;
    });
 

    string cpustr(cpu.begin(), cpu.end());

    uint64_t oracleoutputcpu = std::stoull(cpustr);




    vector<char> urlvb(urlnet.begin(), urlnet.end());
     
    auto net = getURI(urlvb, [&]( auto& results ) {

      
      check(results.size() > 0, "You don't seem to hold any net");
      auto itr = results.begin();
      return itr->result;
    });
 

    string netstr(net.begin(), net.end());

    uint64_t oracleoutputnet = std::stoull(netstr);



vector<char> urlvd(urlrexname.begin(), urlrexname.end());
     
    auto rexname = getURI(urlvd, [&]( auto& results ) {

      check(results.size() > 0, "Noname");
      auto itr = results.begin();
      return itr->result;
    });
 

  string rexstr(bal.begin(), bal.end());



if (rexstr == str) {

    vector<char> urlvc(urlrex.begin(), urlrex.end());
     
    auto rex = getURI(urlvc, [&]( auto& results ) {
      
      check(results.size() > 0, "You don't seem to hold any rex");
      auto itr = results.begin();
      return itr->result;
    });
 

    string rexstr(rex.begin(), rex.end());

    uint64_t oracleoutputrex = std::stoull(rexstr);


uint64_t oracleoutput = (oracleoutputbal + oracleoutputcpu + oracleoutputnet + oracleoutputrex);

check( oracleoutput >= usersvote, "You don't have enough tokenz");


votefunction (oracleoutput, pollkey, option, voter, usersvote, community, schedname, schednamests, schednamevtb);


} else {

uint64_t oracleoutput = (oracleoutputbal + oracleoutputcpu + oracleoutputnet);

check( oracleoutput >= usersvote, "You don't have enough tokenzz");


votefunction (oracleoutput, pollkey, option, voter, usersvote, community, schedname, schednamests, schednamevtb );

}

}

else if (community == name("viggcommcons")) {





std::string json = "{\"json\":\"true\",\"code\":\"vig111111111\",\"scope\":\"" + str + "\",\"table\":\"accounts\"}";

std::string encoded = base64_encode(json);

std::string url = "https+post+json://rows.0.balance/" + encoded + "/api.eosn.io/v1/chain/get_table_rows"; 

vector<char> urlv(url.begin(), url.end());
      

      auto debt = getURI(urlv, [&]( auto& results ) {
      
      check(results.size() > 0, "You don't seem to hold any tokens");
      auto itr = results.begin();
      return itr->result;
    });
 


      
  


    string debtstr(debt.begin(), debt.end());

   
    uint64_t oracleoutput = std::stoull(debtstr);




votefunction (oracleoutput, pollkey, option, voter, usersvote, community, schedname, schednamests, schednamevtb);


}

else {

check (false, "No such community on Consortium.");

}

}






CONTRACT_END((votez)(createpollz)(close)(transfer)(retire)(addbadboys)(delbadboys)(open)(issue)(create)(addcommunity)(stakeforcomm)(unstkfromcom)(modcommunity)(finishpoll)(supplydown)(votertabdel))