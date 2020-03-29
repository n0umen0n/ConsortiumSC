#include <eosio/name.hpp>
#include <eosio/eosio.hpp>
#include <eosio/asset.hpp>
#include <eosio/contract.hpp>
#include <cmath>


using namespace std;
using namespace eosio;

class [[eosio::contract("consortium11")]] consortium11 : public eosio::contract {

 
  public:

    consortium11( name receiver, name code, datastream<const char*> ds ):
      contract(receiver, code, ds),
      currency_symbol("KROWN", 4),
      currency_symbol_prospectors("PGL", 4),
      currency_symbol_lumeos("LUME", 3),
      currency_symbol_dice("DICE", 4),
      currency_symbol_liquidapps("DAPP", 4),
      currency_symbol_pixeos("PIXEOS", 4),
      currency_symbol_effectai("EFX", 4),
      currency_symbol_emanate("EMT", 4),
      currency_symbol_everipedia("IQ", 3),
      currency_symbol_biggame("BG", 4),
      currency_symbol_defind("BOID", 4),
      currency_symbol_hirevibes("HVT", 4),
      currency_symbol_tpt("TPT", 4),
      currency_symbol_eosdt("EOSDT", 9),
      currency_symbol_bancor("BNT", 10),
      currency_symbol_vigor("VIG", 4),
      currency_symbol_eosdac("EOSDAC", 4),
      currency_symbol_edna("EDNA", 4),
      currency_symbol_sense("SENSE", 4),
      currency_symbol_peos("PEOS", 4),
      currency_symbol_newdex("NDX", 4),
      currency_symbol_chintai("CHEX", 8)
      
      
      {}

             
             
             
             
             
             
             
             
  [[eosio::on_notify("krowndactokn::transfer")]]
  //[[eosio::on_notify("defintoken11::transfer")]]
  
  void reversetransactionlita (name from, name to, asset quantity, std::string memo){  //siia t2psustada et reverse trans consortium.

if (from == get_self() || to != get_self()){
    return;
  }
 
  send_back(to, from, quantity, memo);

  const int64_t paydeterminant = 2;

  const struct asset jagaja = {int64_t (1), symbol ("KROWN", 4)};  

  const  struct asset kordaja = {int64_t (100), symbol ("KROWN", 4)};  
  
  check(quantity.symbol == currency_symbol, "Not the right token bljat");
  
  
  
  
  
  votingrecording (from,  to, quantity, memo, paydeterminant, jagaja, kordaja  );
  
  

}





[[eosio::on_notify("prospectorsg::transfer")]]
  
  
  
  void reversetransactionprosp (name from, name to, asset quantity, std::string memo){  //siia t2psustada et reverse trans consortium.

if (from == get_self() || to != get_self()){
    return;
  }
 
  send_back_prospectoyoo(to, from, quantity, memo);
  
  const int64_t paydeterminant = 1;

  const struct asset jagaja = {int64_t (1), symbol ("PGL", 4)};  

  const  struct asset kordaja = {int64_t (100), symbol ("PGL", 4)};  
  
  check(quantity.symbol == currency_symbol_prospectors, "Not the right token bljat");
  
  
  votingrecording (from,  to, quantity, memo, paydeterminant, jagaja, kordaja  );
  
  }
  
  
  
  
  /*
  [[eosio::on_notify("karmatoken11::transfer")]]
  
  
  
  void reversetransactionkarma (name from, name to, asset quantity, std::string memo){  //siia t2psustada et reverse trans consortium.

if (from == get_self() || to != get_self()){
    return;
  }
 
  send_back_karma(to, from, quantity, memo);
  
  const int64_t paydeterminant = 3;

  const struct asset jagaja = {int64_t (1), symbol ("GARMA", 4)};  

  const  struct asset kordaja = {int64_t (100), symbol ("GARMA", 4)};  
  
  check(quantity.symbol == currency_symbol_karma, "Not the right token bljat");
  
  
  votingrecording (from,  to, quantity, memo, paydeterminant, jagaja, kordaja  );
  
  }
  */





[[eosio::on_notify("betdicetoken::transfer")]]
  
  
  
  void reversetransactiondice (name from, name to, asset quantity, std::string memo){  //siia t2psustada et reverse trans consortium.

if (from == get_self() || to != get_self()){
    return;
  }
 
  send_back_dice(to, from, quantity, memo);
  
  const int64_t paydeterminant = 4;

  const struct asset jagaja = {int64_t (1), symbol ("DICE", 4)};  

  const  struct asset kordaja = {int64_t (100), symbol ("DICE", 4)};  
  
  check(quantity.symbol == currency_symbol_dice, "Not the right token bljat");
  
  
  votingrecording (from,  to, quantity, memo, paydeterminant, jagaja, kordaja  );
  
  }
  
  
  
  
  
  [[eosio::on_notify("lumetokenctr::transfer")]]
  
  
  
  void reversetransactionlumeos (name from, name to, asset quantity, std::string memo){  //siia t2psustada et reverse trans consortium.

if (from == get_self() || to != get_self()){
    return;
  }
 
  send_back_lumeos(to, from, quantity, memo);
  
  const int64_t paydeterminant = 5;

  const struct asset jagaja = {int64_t (10), symbol ("LUME", 3)};  

  const  struct asset kordaja = {int64_t (100), symbol ("LUME", 3)};  
  
  check(quantity.symbol == currency_symbol_lumeos, "Not the right token bljat");
  
  
  votingrecording (from,  to, quantity, memo, paydeterminant, jagaja, kordaja  );
  
  }



           
  
  
  [[eosio::on_notify("dappservices::transfer")]]
  
  
  
  void reversetransactionliquidapps (name from, name to, asset quantity, std::string memo){  //siia t2psustada et reverse trans consortium.

if (from == get_self() || to != get_self()){
    return;
  }
 
  send_back_liquidapps(to, from, quantity, memo);
  
  const int64_t paydeterminant = 6;

  const struct asset jagaja = {int64_t (1), symbol ("DAPP", 4)};  

  const  struct asset kordaja = {int64_t (100), symbol ("DAPP", 4)};  
  
  check(quantity.symbol == currency_symbol_liquidapps, "Not the right token bljat");
  
  
  votingrecording (from,  to, quantity, memo, paydeterminant, jagaja, kordaja  );
  
  }
  
  
  
  
  [[eosio::on_notify("pixeos1token::transfer")]]
  
  
  
  void reversetransactionpixeos (name from, name to, asset quantity, std::string memo){  //siia t2psustada et reverse trans consortium.

if (from == get_self() || to != get_self()){
    return;
  }
 
  send_back_pixeos(to, from, quantity, memo);
  
  const int64_t paydeterminant = 7;

  const struct asset jagaja = {int64_t (1), symbol ("PIXEOS", 4)};  

  const  struct asset kordaja = {int64_t (100), symbol ("PIXEOS", 4)};  
  
  check(quantity.symbol == currency_symbol_pixeos, "Not the right token bljat");
  
  
  votingrecording (from,  to, quantity, memo, paydeterminant, jagaja, kordaja  );
  
  }
  
  
  
  
  
    [[eosio::on_notify("effecttokens::transfer")]]

  
  void reversetransactioneffectai (name from, name to, asset quantity, std::string memo){  //siia t2psustada et reverse trans consortium.

if (from == get_self() || to != get_self()){
    return;
  }
 
  send_back_effectai(to, from, quantity, memo);
  
  const int64_t paydeterminant = 8;

  const struct asset jagaja = {int64_t (1), symbol ("EFX", 4)};  

  const  struct asset kordaja = {int64_t (100), symbol ("EFX", 4)};  
  
  check(quantity.symbol == currency_symbol_effectai, "Not the right token bljat");
  
  
  votingrecording (from,  to, quantity, memo, paydeterminant, jagaja, kordaja  );
  
  }
  
  
  
  
  
  [[eosio::on_notify("everipediaiq::transfer")]]

  
  void reversetransactioneveripedia (name from, name to, asset quantity, std::string memo){  //siia t2psustada et reverse trans consortium.

if (from == get_self() || to != get_self()){
    return;
  }
 
  send_back_everipedia(to, from, quantity, memo);
  
  const int64_t paydeterminant = 9;

  const struct asset jagaja = {int64_t (10), symbol ("IQ", 3)};  

  const  struct asset kordaja = {int64_t (100), symbol ("IQ", 3)};  
  
  check(quantity.symbol == currency_symbol_everipedia, "Not the right token bljat");
  
  
  votingrecording (from,  to, quantity, memo, paydeterminant, jagaja, kordaja  );
  
  }
  
  
  
  
  
  [[eosio::on_notify("emanateoneos::transfer")]]

  
  void reversetransactionemanate (name from, name to, asset quantity, std::string memo){  //siia t2psustada et reverse trans consortium.

if (from == get_self() || to != get_self()){
    return;
  }
 
  send_back_emanate(to, from, quantity, memo);
  
  const int64_t paydeterminant = 10;

  const struct asset jagaja = {int64_t (1), symbol ("EMT", 4)};  

  const  struct asset kordaja = {int64_t (100), symbol ("EMT", 4)};  
  
  check(quantity.symbol == currency_symbol_emanate, "Not the right token bljat");
  
  
  votingrecording (from,  to, quantity, memo, paydeterminant, jagaja, kordaja  );
  
  }
  
  
  [[eosio::on_notify("bgbgbgbgbgbg::transfer")]]

  
  void reversetransactionbiggame (name from, name to, asset quantity, std::string memo){  //siia t2psustada et reverse trans consortium.

if (from == get_self() || to != get_self()){
    return;
  }
 
  send_back_biggame(to, from, quantity, memo);
  
  const int64_t paydeterminant = 23;

  const struct asset jagaja = {int64_t (1), symbol ("BG", 4)};  

  const  struct asset kordaja = {int64_t (100), symbol ("BG", 4)};  
  
  check(quantity.symbol == currency_symbol_biggame, "Not the right token bljat");
  
  
  votingrecording (from,  to, quantity, memo, paydeterminant, jagaja, kordaja  );
  
  }
  
  
  
  [[eosio::on_notify("boidcomtoken::transfer")]]

  
  void reversetransactiondefind (name from, name to, asset quantity, std::string memo){  //siia t2psustada et reverse trans consortium.

if (from == get_self() || to != get_self()){
    return;
  }
 
  send_back_defind(to, from, quantity, memo);
  
  const int64_t paydeterminant = 22;

  const struct asset jagaja = {int64_t (1), symbol ("BOID", 4)};  

  const  struct asset kordaja = {int64_t (100), symbol ("BOID", 4)};  
  
  check(quantity.symbol == currency_symbol_defind, "Not the right token bljat");
  
  
  votingrecording (from,  to, quantity, memo, paydeterminant, jagaja, kordaja  );
  
  }
  
  
  
  [[eosio::on_notify("hirevibeshvt::transfer")]]

  
  void reversetransactionhirevibes (name from, name to, asset quantity, std::string memo){  //siia t2psustada et reverse trans consortium.

if (from == get_self() || to != get_self()){
    return;
  }
 
  send_back_hirevibes(to, from, quantity, memo);
  
  const int64_t paydeterminant = 21;

  const struct asset jagaja = {int64_t (1), symbol ("HVT", 4)};  

  const  struct asset kordaja = {int64_t (100), symbol ("HVT", 4)};  
  
  check(quantity.symbol == currency_symbol_hirevibes, "Not the right token bljat");
  
  
  votingrecording (from,  to, quantity, memo, paydeterminant, jagaja, kordaja  );
  
  }
  
  
  
  [[eosio::on_notify("eosiotptoken::transfer")]]

  
  void reversetransactiontpt (name from, name to, asset quantity, std::string memo){  //siia t2psustada et reverse trans consortium.

if (from == get_self() || to != get_self()){
    return;
  }
 
  send_back_tpt(to, from, quantity, memo);
  
  const int64_t paydeterminant = 20;

  const struct asset jagaja = {int64_t (1), symbol ("TPT", 4)};  

  const  struct asset kordaja = {int64_t (100), symbol ("TPT", 4)};  
  
  check(quantity.symbol == currency_symbol_tpt, "Not the right token bljat");
  
  
  votingrecording (from,  to, quantity, memo, paydeterminant, jagaja, kordaja  );
  
  }
  
  
  
  [[eosio::on_notify("eosdtsttoken::transfer")]]

  
  void reversetransactioneosdt (name from, name to, asset quantity, std::string memo){  //siia t2psustada et reverse trans consortium.

if (from == get_self() || to != get_self()){
    return;
  }
 
  send_back_eosdt(to, from, quantity, memo);
  
  const int64_t paydeterminant = 19;

  const struct asset jagaja = {int64_t (10), symbol ("EOSDT", 9)};  

  const  struct asset kordaja = {int64_t (100000), symbol ("EOSDT", 9)};  
  
  check(quantity.symbol == currency_symbol_eosdt, "Not the right token bljat");
  
  
  votingrecording (from,  to, quantity, memo, paydeterminant, jagaja, kordaja  );
  
  }
  
  
  
  
  
  
  [[eosio::on_notify("bntbntbntbnt::transfer")]]

  
  void reversetransactionbancor (name from, name to, asset quantity, std::string memo){  //siia t2psustada et reverse trans consortium.

if (from == get_self() || to != get_self()){
    return;
  }
 
  send_back_bancor(to, from, quantity, memo);
  
  const int64_t paydeterminant = 18;

  const struct asset jagaja = {int64_t (1), symbol ("BNT", 10)};  

  const  struct asset kordaja = {int64_t (100000), symbol ("BNT", 10)};  
  
  check(quantity.symbol == currency_symbol_bancor, "Not the right token bljat");
  
  
  votingrecording (from,  to, quantity, memo, paydeterminant, jagaja, kordaja  );
  
  }
  
  
  
  [[eosio::on_notify("vig111111111::transfer")]]

  
  void reversetransactionvigor (name from, name to, asset quantity, std::string memo){  //siia t2psustada et reverse trans consortium.

if (from == get_self() || to != get_self()){
    return;
  }
 
  send_back_vigor(to, from, quantity, memo);
  
  const int64_t paydeterminant = 17;

  const struct asset jagaja = {int64_t (1), symbol ("VIG", 4)};  

  const  struct asset kordaja = {int64_t (100), symbol ("VIG", 4)};  
  
  check(quantity.symbol == currency_symbol_vigor, "Not the right token bljat");
  
  
  votingrecording (from,  to, quantity, memo, paydeterminant, jagaja, kordaja  );
  
  }
  
  
  
  
  [[eosio::on_notify("eosdactokens::transfer")]]

  
  void reversetransactioneosdac (name from, name to, asset quantity, std::string memo){  //siia t2psustada et reverse trans consortium.

if (from == get_self() || to != get_self()){
    return;
  }
 
  send_back_eosdac(to, from, quantity, memo);
  
  const int64_t paydeterminant = 16;

  const struct asset jagaja = {int64_t (1), symbol ("EOSDAC", 4)};  

  const  struct asset kordaja = {int64_t (100), symbol ("EOSDAC", 4)};  
  
  check(quantity.symbol == currency_symbol_eosdac, "Not the right token bljat");
  
  
  votingrecording (from,  to, quantity, memo, paydeterminant, jagaja, kordaja  );
  
  }
  
  
  
  
  [[eosio::on_notify("ednazztokens::transfer")]]

  
  void reversetransactionedna (name from, name to, asset quantity, std::string memo){  //siia t2psustada et reverse trans consortium.

if (from == get_self() || to != get_self()){
    return;
  }
 
  send_back_edna(to, from, quantity, memo);
  
  const int64_t paydeterminant = 15;

  const struct asset jagaja = {int64_t (1), symbol ("EDNA", 4)};  

  const  struct asset kordaja = {int64_t (100), symbol ("EDNA", 4)};  
  
  check(quantity.symbol == currency_symbol_edna, "Not the right token bljat");
  
  
  votingrecording (from,  to, quantity, memo, paydeterminant, jagaja, kordaja  );
  
  }
  
  
  [[eosio::on_notify("sensegenesis::transfer")]]

  
  void reversetransactionsense (name from, name to, asset quantity, std::string memo){  //siia t2psustada et reverse trans consortium.

if (from == get_self() || to != get_self()){
    return;
  }
 
  send_back_sense(to, from, quantity, memo);
  
  const int64_t paydeterminant = 14;

  const struct asset jagaja = {int64_t (1), symbol ("SENSE", 4)};  

  const  struct asset kordaja = {int64_t (100), symbol ("SENSE", 4)};  
  
  check(quantity.symbol == currency_symbol_sense, "Not the right token bljat");
  
  
  votingrecording (from,  to, quantity, memo, paydeterminant, jagaja, kordaja  );
  
  }
  
  
  
  [[eosio::on_notify("thepeostoken::transfer")]]

  
  void reversetransactionpeos (name from, name to, asset quantity, std::string memo){  //siia t2psustada et reverse trans consortium.

if (from == get_self() || to != get_self()){
    return;
  }
 
  send_back_peos(to, from, quantity, memo);
  
  const int64_t paydeterminant = 13;

  const struct asset jagaja = {int64_t (1), symbol ("PEOS", 4)};  

  const  struct asset kordaja = {int64_t (100), symbol ("PEOS", 4)};  
  
  check(quantity.symbol == currency_symbol_peos, "Not the right token bljat");
  
  
  votingrecording (from,  to, quantity, memo, paydeterminant, jagaja, kordaja  );
  
  }
  
  
  
  [[eosio::on_notify("newdexissuer::transfer")]]

  
  void reversetransactionnewdex (name from, name to, asset quantity, std::string memo){  //siia t2psustada et reverse trans consortium.

if (from == get_self() || to != get_self()){
    return;
  }
 
  send_back_newdex(to, from, quantity, memo);
  
  const int64_t paydeterminant = 12;

  const struct asset jagaja = {int64_t (1), symbol ("NDX", 4)};  

  const  struct asset kordaja = {int64_t (100), symbol ("NDX", 4)};  
  
  check(quantity.symbol == currency_symbol_newdex, "Not the right token bljat");
  
  
  votingrecording (from,  to, quantity, memo, paydeterminant, jagaja, kordaja  );
  
  }
  
  
  
  
  
  [[eosio::on_notify("chexchexchex::transfer")]]

  
  void reversetransactionchintai (name from, name to, asset quantity, std::string memo){  //siia t2psustada et reverse trans consortium.

if (from == get_self() || to != get_self()){
    return;
  }
 
  send_back_chintai(to, from, quantity, memo);
  
  const int64_t paydeterminant = 11;

  const struct asset jagaja = {int64_t (1), symbol ("CHEX", 8)};  

  const  struct asset kordaja = {int64_t (10000), symbol ("CHEX", 8)};  
  
  check(quantity.symbol == currency_symbol_chintai, "Not the right token bljat");
  
  
  votingrecording (from,  to, quantity, memo, paydeterminant, jagaja, kordaja  );
  
  }
  
  



  private:
  
  const symbol currency_symbol;
  const symbol currency_symbol_prospectors;
  const symbol currency_symbol_dice;
  const symbol currency_symbol_lumeos;
  const symbol currency_symbol_liquidapps;
  const symbol currency_symbol_pixeos;
  const symbol currency_symbol_effectai;
  const symbol currency_symbol_emanate;
  const symbol currency_symbol_everipedia;
  const symbol currency_symbol_biggame;
  const symbol currency_symbol_defind;
  const symbol currency_symbol_hirevibes;
  const symbol currency_symbol_tpt;
  const symbol currency_symbol_eosdt;
  const symbol currency_symbol_bancor;
  const symbol currency_symbol_vigor;
  const symbol currency_symbol_eosdac;
  const symbol currency_symbol_edna;
  const symbol currency_symbol_sense;
  const symbol currency_symbol_peos;
  const symbol currency_symbol_newdex;
  const symbol currency_symbol_chintai;
  
  
 
 void votingrecording( name from, name to, asset quantity, std::string memo,int64_t paydeterminant, asset jagaja, asset kordaja  ) {
   
   
   const struct asset productPrice = {int64_t (0), symbol ("GOVRN", 4)};
  
      double qv =  quantity/jagaja;
      //float qv =  quantity/jagaja;
      
      //float ellab = sqrt(qv);
    
      double ellab = sqrt(qv);
  
      asset adjustedquant = ellab * kordaja;
  
  
  useryes signalledyes(get_self(), from.value);
  auto litsjah = signalledyes.find (quantity.symbol.code().raw());

  userno signalledno(get_self(), from.value);
  auto litsei = signalledno.find (quantity.symbol.code().raw());
  
   totall signalledtotal( _self, quantity.symbol.code().raw() );
      auto totallits = signalledtotal.find( quantity.symbol.code().raw() );
     if( totallits == signalledtotal.end() ) {
         signalledtotal.emplace( name("consortium11"), [&]( auto& a ){
            a.total_voted_no = asset{0, quantity.symbol};
             a.total_voted_yes = asset{0, quantity.symbol};
         });
      }
  

   
  if (memo == ("voteyes")){  
    


if( litsjah != signalledyes.end() && (litsei != signalledno.end() || litsei == signalledno.end())  ){ //nelivalikut vist kokku!!!!!!!! litsjah != signalledyes.end() && //////&& litsei != signalledno.end() || litsei == signalledno.end()
    

   const auto& iterator = signalledyes.get( quantity.symbol.code().raw(), "k2ivittu" );
       
  
  signalledtotal.modify(totallits, get_self(), [&](auto &row){
         row.total_voted_yes += adjustedquant - iterator.voted_yes;
          });
  
     
     signalledyes.modify (litsjah ,get_self(), [&](auto &row){
              row.voted_yes = adjustedquant;
                });
                
    

           
  }
  
  
  else if( litsjah == signalledyes.end() && litsei != signalledno.end() ){ 
             
       
       
  signalledtotal.modify(totallits, get_self(), [&](auto &row){
         row.total_voted_yes += adjustedquant;
          });
  
     
  useryes signalledyes(get_self(), from.value);
  auto litsjah = signalledyes.find (quantity.symbol.code().raw());
     
     signalledyes.emplace (get_self(), [&](auto &row){
              row.voted_yes = adjustedquant;
                });
             
             
       }

       
       else {
             
       
  signalledtotal.modify(totallits, get_self(), [&](auto &row){
         row.total_voted_yes += adjustedquant;
          });
  

             distribute_tokenz(from, productPrice, paydeterminant);
  
     
     signalledyes.emplace (get_self(), [&](auto &row){
              row.voted_yes = adjustedquant;
                });
             
       }   
             
  }     
    
    
    
  
  
  else if (memo == ("voteno")) { 
    
  

      
if( litsei != signalledno.end() && (litsjah != signalledyes.end() || litsjah == signalledyes.end())){ //nelivalikut vist kokku!!!!!!!! litsjah != signalledyes.end() &&  /////// && litsjah != signalledyes.end() || litsjah == signalledyes.end() 
    
  
       
       
        
   const auto& mv = signalledno.get( quantity.symbol.code().raw(), "k2ivittu" );
       
       
  
  signalledtotal.modify(totallits, get_self(), [&](auto &row){
         row.total_voted_no += adjustedquant - mv.voted_no;
          });
  

     
     signalledno.modify (litsei ,get_self(), [&](auto &row){
              row.voted_no = adjustedquant;
                });
                
            

           
  }
  
  
  
       else if( litsei == signalledno.end() && litsjah != signalledyes.end() ){ 
             
             
       
  signalledtotal.modify(totallits, get_self(), [&](auto &row){
         row.total_voted_no += adjustedquant;
          });
  
     
  signalledno.emplace (get_self(), [&](auto &row){
              row.voted_no = adjustedquant;
                });
             
             
       }
       
       else {
             
      
       
       
  signalledtotal.modify(totallits, get_self(), [&](auto &row){
         row.total_voted_no += adjustedquant;
          });
  
    
             distribute_tokenz(from, productPrice, paydeterminant);
     
     
     signalledno.emplace (get_self(), [&](auto &row){
              row.voted_no = adjustedquant;
                });
             
       }
             
             
}   
    
    
  
  
  else {
    
    return;
  
    
  }
  
  
   
   
   
 }
 
 
 
  
   TABLE totall_voted {
    
    asset total_voted_yes;
    
    asset total_voted_no;
    
    auto primary_key() const { return total_voted_yes.symbol.code().raw(); }

  };
  
  
  TABLE user_voted_yes {
    
    asset voted_yes;
    
    auto primary_key() const { return voted_yes.symbol.code().raw(); }

  };
  
  TABLE user_voted_no {
    
    asset voted_no;
    
    auto primary_key() const { return voted_no.symbol.code().raw(); }

  };
  
  
  
  

    
    void distribute_tokenz(name owner, asset quantity, int64_t paydeterminant) {
    
      action(
      permission_level{get_self(),"active"_n},
      "consortiumtt"_n,
      "payvary"_n,
      std::make_tuple(owner, quantity, paydeterminant)
    ).send();
  };
  

  
  
  
   void send_back(name from, name to, asset quantity, std::string memo) {
    
      action(
      permission_level{get_self(),"active"_n},
      "krowndactokn"_n,
      "transfer"_n,
      std::make_tuple(from,to,quantity,memo)
    ).send();
  };
  
  
  
  void send_back_prospectoyoo(name from, name to, asset quantity, std::string memo) {
    
      action(
      permission_level{get_self(),"active"_n},
      "prospectorsg"_n,
      "transfer"_n,
      std::make_tuple(from,to,quantity,memo)
    ).send();
  };



void send_back_dice(name from, name to, asset quantity, std::string memo) {
    
      action(
      permission_level{get_self(),"active"_n},
      "betdicetoken"_n,
      "transfer"_n,
      std::make_tuple(from,to,quantity,memo)
    ).send();
  };
  
  void send_back_lumeos(name from, name to, asset quantity, std::string memo) {
    
      action(
      permission_level{get_self(),"active"_n},
      "lumetokenctr"_n,
      "transfer"_n,
      std::make_tuple(from,to,quantity,memo)
    ).send();
  };
   

void send_back_liquidapps(name from, name to, asset quantity, std::string memo) {
    
      action(
      permission_level{get_self(),"active"_n},
      "dappservices"_n,
      "transfer"_n,
      std::make_tuple(from,to,quantity,memo)
    ).send();
  };
  
  
  void send_back_pixeos(name from, name to, asset quantity, std::string memo) {
    
      action(
      permission_level{get_self(),"active"_n},
      "pixeos1token"_n,
      "transfer"_n,
      std::make_tuple(from,to,quantity,memo)
    ).send();
  };


void send_back_effectai(name from, name to, asset quantity, std::string memo) {
    
      action(
      permission_level{get_self(),"active"_n},
      "effecttokens"_n,
      "transfer"_n,
      std::make_tuple(from,to,quantity,memo)
    ).send();
  };
  
  
  void send_back_emanate(name from, name to, asset quantity, std::string memo) {
    
      action(
      permission_level{get_self(),"active"_n},
      "emanateoneos"_n,
      "transfer"_n,
      std::make_tuple(from,to,quantity,memo)
    ).send();
  };
  
  
  void send_back_everipedia(name from, name to, asset quantity, std::string memo) {
    
      action(
      permission_level{get_self(),"active"_n},
      "everipediaiq"_n,
      "transfer"_n,
      std::make_tuple(from,to,quantity,memo)
    ).send();
  };
  
  
  void send_back_biggame(name from, name to, asset quantity, std::string memo) {
    
      action(
      permission_level{get_self(),"active"_n},
      "bgbgbgbgbgbg"_n,
      "transfer"_n,
      std::make_tuple(from,to,quantity,memo)
    ).send();
  };
  
  
  void send_back_defind(name from, name to, asset quantity, std::string memo) {
    
      action(
      permission_level{get_self(),"active"_n},
      "boidcomtoken"_n,
      "transfer"_n,
      std::make_tuple(from,to,quantity,memo)
    ).send();
  };


void send_back_hirevibes(name from, name to, asset quantity, std::string memo) {
    
      action(
      permission_level{get_self(),"active"_n},
      "hirevibeshvt"_n,
      "transfer"_n,
      std::make_tuple(from,to,quantity,memo)
    ).send();
  };


void send_back_tpt(name from, name to, asset quantity, std::string memo) {
    
      action(
      permission_level{get_self(),"active"_n},
      "eosiotptoken"_n,
      "transfer"_n,
      std::make_tuple(from,to,quantity,memo)
    ).send();
  };

void send_back_eosdt(name from, name to, asset quantity, std::string memo) {
    
      action(
      permission_level{get_self(),"active"_n},
      "eosdtsttoken"_n,
      "transfer"_n,
      std::make_tuple(from,to,quantity,memo)
    ).send();
  };


void send_back_bancor(name from, name to, asset quantity, std::string memo) {
    
      action(
      permission_level{get_self(),"active"_n},
      "bntbntbntbnt"_n,
      "transfer"_n,
      std::make_tuple(from,to,quantity,memo)
    ).send();
  };


void send_back_vigor(name from, name to, asset quantity, std::string memo) {
    
      action(
      permission_level{get_self(),"active"_n},
      "vig111111111"_n,
      "transfer"_n,
      std::make_tuple(from,to,quantity,memo)
    ).send();
  };



void send_back_eosdac(name from, name to, asset quantity, std::string memo) {
    
      action(
      permission_level{get_self(),"active"_n},
      "eosdactokens"_n,
      "transfer"_n,
      std::make_tuple(from,to,quantity,memo)
    ).send();
  };


void send_back_edna(name from, name to, asset quantity, std::string memo) {
    
      action(
      permission_level{get_self(),"active"_n},
      "ednazztokens"_n,
      "transfer"_n,
      std::make_tuple(from,to,quantity,memo)
    ).send();
  };



void send_back_sense(name from, name to, asset quantity, std::string memo) {
    
      action(
      permission_level{get_self(),"active"_n},
      "sensegenesis"_n,
      "transfer"_n,
      std::make_tuple(from,to,quantity,memo)
    ).send();
  };


void send_back_peos(name from, name to, asset quantity, std::string memo) {
    
      action(
      permission_level{get_self(),"active"_n},
      "thepeostoken"_n,
      "transfer"_n,
      std::make_tuple(from,to,quantity,memo)
    ).send();
  };

void send_back_newdex(name from, name to, asset quantity, std::string memo) {
    
      action(
      permission_level{get_self(),"active"_n},
      "newdexissuer"_n,
      "transfer"_n,
      std::make_tuple(from,to,quantity,memo)
    ).send();
  };
  
  
  void send_back_chintai(name from, name to, asset quantity, std::string memo) {
    
      action(
      permission_level{get_self(),"active"_n},
      "chexchexchex"_n,
      "transfer"_n,
      std::make_tuple(from,to,quantity,memo)
    ).send();
  };
  

    typedef eosio::multi_index<name("voteyes"), user_voted_yes> useryes; //
    

    typedef eosio::multi_index<name("totalvotes"), totall_voted> totall;
    
    
    typedef eosio::multi_index<name("voteno"), user_voted_no> userno; //





};