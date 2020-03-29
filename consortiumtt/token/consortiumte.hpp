/**
 *  @file
 *  @copyright defined in eos/LICENSE.txt
 */
#pragma once

#include <eosio/asset.hpp>
#include <eosiolib/time.hpp>
#include <eosiolib/eosio.hpp>
#include <eosiolib/transaction.hpp>



#include <string>
using namespace eosio;
using std::string;

class [[eosio::contract]] consortiumte : public contract {
   public:
   
      consortiumte(name receiver, name code,  datastream<const char*> ds): contract(receiver, code, ds) {}
   
      using contract::contract;
      
  
                     
                     [[eosio::action]]
      void payvary( name   owner,
                     asset  quantity,
                     int64_t paydeterminant);
                     
                     


      [[eosio::action]]
      void create( name   issuer,
                     asset  maximum_supply);

      [[eosio::action]]
      void issue( name to, asset quantity, string memo );

      [[eosio::action]]
      void retire( asset quantity, string memo );


      [[eosio::action]]
      void setdelay(const symbol& symbol, uint64_t t);

    
      [[eosio::action]]
      void transfer( name    from,
                     name    to,
                     asset   quantity,
                     string  memo );

      [[eosio::action]]
      void stakeconso(name owner, asset quantity);

      [[eosio::action]]
      void unstakeconso(name owner, asset quantity);

      [[eosio::action]]
      void autorefund(name owner, uint64_t index); 
      
      
      

      [[eosio::action]]
      void cancelunstake(name owner, uint64_t index);

      [[eosio::action]]
      void open( name owner, const symbol& symbol, name ram_payer );

      [[eosio::action]]
      void close( name owner, const symbol& symbol );

      static asset get_supply( name token_contract_account, symbol_code sym_code )
      {
         stats statstable( token_contract_account, sym_code.raw() );
         const auto& st = statstable.get( sym_code.raw() );
         return st.supply;
      }

      static asset get_balance( name token_contract_account, name owner, symbol_code sym_code )
      {
         accounts accountstable( token_contract_account, owner.value );
         const auto& ac = accountstable.get( sym_code.raw() );
         return ac.balance;
      }
      
      
      
      
      [[eosio::action]]
      void stakeprosp(name owner, asset quantity);

      [[eosio::action]]
      void unstakeprosp(name owner, asset quantity);

      [[eosio::action]]
      void autorefprosp(name owner, uint64_t index); 
      
      
      /*
      [[eosio::action]]
      void stakekarma(name owner, asset quantity);

      [[eosio::action]]
      void unstakekarma(name owner, asset quantity);

      [[eosio::action]]
      void autorefkarma(name owner, uint64_t index); 
*/


      //[[eosio::action]]
      //void stakekatse(name owner, asset quantity);
      
            [[eosio::action]]
      void stakedice(name owner, asset quantity);

      [[eosio::action]]
      void unstakedice(name owner, asset quantity);

      [[eosio::action]]
      void autorefdice(name owner, uint64_t index); 
      
      
      
       [[eosio::action]]
      void stakelumeos(name owner, asset quantity);

      [[eosio::action]]
      void unstakelumeo(name owner, asset quantity);

      [[eosio::action]]
      void autoreflumeo(name owner, uint64_t index); 
      
      
       [[eosio::action]]
      void stakeliqapps(name owner, asset quantity);

      [[eosio::action]]
      void unstakeliqap(name owner, asset quantity);

      [[eosio::action]]
      void autorefliqap(name owner, uint64_t index); 
      
      
       [[eosio::action]]
      void stakepixeos(name owner, asset quantity);

      [[eosio::action]]
      void unstakepixeo(name owner, asset quantity);

      [[eosio::action]]
      void autorefpixeo(name owner, uint64_t index); 
      
      
       [[eosio::action]]
      void stakeeffect(name owner, asset quantity);

      [[eosio::action]]
      void unstakeeffec(name owner, asset quantity);

      [[eosio::action]]
      void autorefeffec(name owner, uint64_t index); 
      
      
        [[eosio::action]]
      void stakeemanate(name owner, asset quantity);

      [[eosio::action]]
      void unstakeemana(name owner, asset quantity);

      [[eosio::action]]
      void autorefemana(name owner, uint64_t index); 
      
      
      
       [[eosio::action]]
      void stakeeveripe(name owner, asset quantity);

      [[eosio::action]]
      void unstakeeveri(name owner, asset quantity);

      [[eosio::action]]
      void autorefeveri(name owner, uint64_t index); 
      
      
      [[eosio::action]]
      void stakebiggame(name owner, asset quantity);

      [[eosio::action]]
      void unstakebigga(name owner, asset quantity);

      [[eosio::action]]
      void autorefbigga(name owner, uint64_t index); 
      
      [[eosio::action]]
      void stakedefind(name owner, asset quantity);

      [[eosio::action]]
      void unstakedefin(name owner, asset quantity);

      [[eosio::action]]
      void autorefdefin(name owner, uint64_t index); 
      
      [[eosio::action]]
      void stakehirevib(name owner, asset quantity);

      [[eosio::action]]
      void unstakehirev(name owner, asset quantity);

      [[eosio::action]]
      void autorefhirev(name owner, uint64_t index); 
      
      [[eosio::action]]
      void staketpt(name owner, asset quantity);

      [[eosio::action]]
      void unstaketpt(name owner, asset quantity);

      [[eosio::action]]
      void autoreftpt(name owner, uint64_t index); 
      
      [[eosio::action]]
      void stakeeosdt(name owner, asset quantity);

      [[eosio::action]]
      void unstakeeosdt(name owner, asset quantity);

      [[eosio::action]]
      void autorefeosdt(name owner, uint64_t index); 
      
      [[eosio::action]]
      void stakebancor(name owner, asset quantity);

      [[eosio::action]]
      void unstakebanco(name owner, asset quantity);

      [[eosio::action]]
      void autorefbanco(name owner, uint64_t index); 
      
      [[eosio::action]]
      void stakevigor(name owner, asset quantity);

      [[eosio::action]]
      void unstakevigor(name owner, asset quantity);

      [[eosio::action]]
      void autorefvigor(name owner, uint64_t index); 
      
      [[eosio::action]]
      void stakeeosdac(name owner, asset quantity);

      [[eosio::action]]
      void unstakeeosda(name owner, asset quantity);

      [[eosio::action]]
      void autorefeosda(name owner, uint64_t index); 
      
      
      
      [[eosio::action]]
      void stakeedna(name owner, asset quantity);

      [[eosio::action]]
      void unstakeedna(name owner, asset quantity);

      [[eosio::action]]
      void autorefedna(name owner, uint64_t index);
      
      
      
      
      [[eosio::action]]
      void stakesense(name owner, asset quantity);

      [[eosio::action]]
      void unstakesense(name owner, asset quantity);

      [[eosio::action]]
      void autorefsense(name owner, uint64_t index); 
      
      [[eosio::action]]
      void stakepeos(name owner, asset quantity);

      [[eosio::action]]
      void unstakepeos(name owner, asset quantity);

      [[eosio::action]]
      void autorefpeos(name owner, uint64_t index); 
      
      [[eosio::action]]
      void stakenewdex(name owner, asset quantity);

      [[eosio::action]]
      void unstakenewde(name owner, asset quantity);

      [[eosio::action]]
      void autorefnewde(name owner, uint64_t index); 
      
      [[eosio::action]]
      void stakechintai(name owner, asset quantity);

      [[eosio::action]]
      void unstakechint(name owner, asset quantity);

      [[eosio::action]]
      void autorefchint(name owner, uint64_t index); 
      
      
      
      
      

   private:
   
      struct [[eosio::table]] account {
         asset    balance;

         uint64_t primary_key()const { return balance.symbol.code().raw(); }
      };

      struct [[eosio::table]] stake_conso {
         asset    staked_balance;

         uint64_t primary_key()const { return staked_balance.symbol.code().raw(); }
      };
      //struct [[eosio::table]] stake_consor {
       //  asset    staked_balance;

       //  uint64_t primary_key()const { return staked_balance.symbol.code().raw(); }
      //};

      struct [[eosio::table]] currency_stats {
         asset    supply;
         asset    max_supply;
         name     issuer;
         uint64_t refund_delay;
         uint64_t transfer_fee_ratio;
         name fee_receiver;

         uint64_t primary_key()const { return supply.symbol.code().raw(); }
      };
      
      struct [[eosio::table]] refund_request {
         uint64_t index;
         name  owner;
         time_point_sec  available_time;
         eosio::asset  amount;

         uint64_t  primary_key()const { return index; }

         EOSLIB_SERIALIZE( refund_request, (index)(owner)(available_time)(amount) )
      };

  
      
      struct [[eosio::table]] stake_prospector {
         asset    staked_balance;

         uint64_t primary_key()const { return staked_balance.symbol.code().raw(); }
      };
      
      
      
     //struct [[eosio::table]] stake_consortium_totall {
      //   asset    total_staked_consortium;

        // uint64_t primary_key()const { return total_staked_consortium.symbol.code().raw(); }
     // };
      struct [[eosio::table]] stake_consortium_total {
         asset    total_staked_consortium;

         uint64_t primary_key()const { return total_staked_consortium.symbol.code().raw(); }
      };


    
      
      struct [[eosio::table]] stake_prospectors_total {
         asset    total_staked_prospectors;

         uint64_t primary_key()const { return total_staked_prospectors.symbol.code().raw(); }
      };





struct [[eosio::table]] stake_dice {
         asset    staked_balance;

         uint64_t primary_key()const { return staked_balance.symbol.code().raw(); }
      };
      
      struct [[eosio::table]] stake_dice_total {
         asset    total_staked_dice;

         uint64_t primary_key()const { return total_staked_dice.symbol.code().raw(); }
      };
      
      
      
      struct [[eosio::table]] stake_lumeo {
         asset    staked_balance;

         uint64_t primary_key()const { return staked_balance.symbol.code().raw(); }
      };
      
      struct [[eosio::table]] stake_lumeos_total {
         asset    total_staked_lumeos;

         uint64_t primary_key()const { return total_staked_lumeos.symbol.code().raw(); }
      };
      
      
      
      struct [[eosio::table]] stake_liqapp {
         asset    staked_balance;

         uint64_t primary_key()const { return staked_balance.symbol.code().raw(); }
      };
      
      
      
      struct [[eosio::table]] stake_liqapps_total {
         asset    total_staked_liqapps;

         uint64_t primary_key()const { return total_staked_liqapps.symbol.code().raw(); }
      };
      
      
      
      
       struct [[eosio::table]] stake_pixeo {
         asset    staked_balance;

         uint64_t primary_key()const { return staked_balance.symbol.code().raw(); }
      };
      
      
      struct [[eosio::table]] stake_pixeos_total {
         asset    total_staked_pixeos;

         uint64_t primary_key()const { return total_staked_pixeos.symbol.code().raw(); }
      };
      
      
       struct [[eosio::table]] stake_effectai {
         asset    staked_balance;

         uint64_t primary_key()const { return staked_balance.symbol.code().raw(); }
      };
      
      
      struct [[eosio::table]] stake_effectai_total {
         asset    total_staked_effectai;

         uint64_t primary_key()const { return total_staked_effectai.symbol.code().raw(); }
      };
      
      
      
      
       struct [[eosio::table]] stake_emanate {
         asset    staked_balance;

         uint64_t primary_key()const { return staked_balance.symbol.code().raw(); }
      };
      
      
      struct [[eosio::table]] stake_emanate_total {
         asset    total_staked_emanate;

         uint64_t primary_key()const { return total_staked_emanate.symbol.code().raw(); }
      };
      
      
      
      
       struct [[eosio::table]] stake_everipedia {
         asset    staked_balance;

         uint64_t primary_key()const { return staked_balance.symbol.code().raw(); }
      };
      
      
      struct [[eosio::table]] stake_everipedia_total {
         asset    total_staked_everipedia;

         uint64_t primary_key()const { return total_staked_everipedia.symbol.code().raw(); }
      };
      
      
      
      
      
       struct [[eosio::table]] stake_biggame {
         asset    staked_balance;

         uint64_t primary_key()const { return staked_balance.symbol.code().raw(); }
      };
      
      
      struct [[eosio::table]] stake_biggame_total {
         asset    total_staked_biggame;

         uint64_t primary_key()const { return total_staked_biggame.symbol.code().raw(); }
      };
      
      
      
       struct [[eosio::table]] stake_defind {
         asset    staked_balance;

         uint64_t primary_key()const { return staked_balance.symbol.code().raw(); }
      };
      
      
      struct [[eosio::table]] stake_defind_total {
         asset    total_staked_defind;

         uint64_t primary_key()const { return total_staked_defind.symbol.code().raw(); }
      };
      
      
       struct [[eosio::table]] stake_hirevibe {
         asset    staked_balance;

         uint64_t primary_key()const { return staked_balance.symbol.code().raw(); }
      };
      
      
      struct [[eosio::table]] stake_hirevibes_total {
         asset    total_staked_hirevibes;

         uint64_t primary_key()const { return total_staked_hirevibes.symbol.code().raw(); }
      };
      
      
       struct [[eosio::table]] stake_tpt {
         asset    staked_balance;

         uint64_t primary_key()const { return staked_balance.symbol.code().raw(); }
      };
      
      
      struct [[eosio::table]] stake_tpt_total {
         asset    total_staked_tpt;

         uint64_t primary_key()const { return total_staked_tpt.symbol.code().raw(); }
      };
      
      
       struct [[eosio::table]] stake_eosdt {
         asset    staked_balance;

         uint64_t primary_key()const { return staked_balance.symbol.code().raw(); }
      };
      
      
      struct [[eosio::table]] stake_eosdt_total {
         asset    total_staked_eosdt;

         uint64_t primary_key()const { return total_staked_eosdt.symbol.code().raw(); }
      };
      
      
       struct [[eosio::table]] stake_bancor {
         asset    staked_balance;

         uint64_t primary_key()const { return staked_balance.symbol.code().raw(); }
      };
      
      
      struct [[eosio::table]] stake_bancor_total {
         asset    total_staked_bancor;

         uint64_t primary_key()const { return total_staked_bancor.symbol.code().raw(); }
      };
      
      
       struct [[eosio::table]] stake_vigor {
         asset    staked_balance;

         uint64_t primary_key()const { return staked_balance.symbol.code().raw(); }
      };
      
      
      struct [[eosio::table]] stake_vigor_total {
         asset    total_staked_vigor;

         uint64_t primary_key()const { return total_staked_vigor.symbol.code().raw(); }
      };
      
      
       struct [[eosio::table]] stake_eosdac {
         asset    staked_balance;

         uint64_t primary_key()const { return staked_balance.symbol.code().raw(); }
      };
      
      
      struct [[eosio::table]] stake_eosdac_total {
         asset    total_staked_eosdac;

         uint64_t primary_key()const { return total_staked_eosdac.symbol.code().raw(); }
      };
      
      
       struct [[eosio::table]] stake_edna {
         asset    staked_balance;

         uint64_t primary_key()const { return staked_balance.symbol.code().raw(); }
      };
      
      
      struct [[eosio::table]] stake_edna_total {
         asset    total_staked_edna;

         uint64_t primary_key()const { return total_staked_edna.symbol.code().raw(); }
      };
      
       struct [[eosio::table]] stake_sense {
         asset    staked_balance;

         uint64_t primary_key()const { return staked_balance.symbol.code().raw(); }
      };
      
      
      struct [[eosio::table]] stake_sense_total {
         asset    total_staked_sense;

         uint64_t primary_key()const { return total_staked_sense.symbol.code().raw(); }
      };
      
      
       struct [[eosio::table]] stake_peo {
         asset    staked_balance;

         uint64_t primary_key()const { return staked_balance.symbol.code().raw(); }
      };
      
      
      struct [[eosio::table]] stake_peos_total {
         asset    total_staked_peos;

         uint64_t primary_key()const { return total_staked_peos.symbol.code().raw(); }
      };
      
      
       struct [[eosio::table]] stake_newdex {
         asset    staked_balance;

         uint64_t primary_key()const { return staked_balance.symbol.code().raw(); }
      };
      
      
      struct [[eosio::table]] stake_newdex_total {
         asset    total_staked_newdex;

         uint64_t primary_key()const { return total_staked_newdex.symbol.code().raw(); }
      };
      
      
       struct [[eosio::table]] stake_chintai {
         asset    staked_balance;

         uint64_t primary_key()const { return staked_balance.symbol.code().raw(); }
      };
      
      
      struct [[eosio::table]] stake_chintai_total {
         asset    total_staked_chintai;

         uint64_t primary_key()const { return total_staked_chintai.symbol.code().raw(); }
      };
      
       
      
     void realgovrn(name owner, asset quantity) {
    
      action(
      permission_level{get_self(),"active"_n},
      "consortiumlv"_n,
      "genesisdistr"_n,
      std::make_tuple(owner,quantity)
    ).send();
  };
      
      
      



// void checkstakes(name owner, asset quantity) {
    
 //     action(
//      permission_level{get_self(),"active"_n},
//      "consortiumte"_n,
//      "stakecheck"_n,
//      std::make_tuple(owner,quantity)
//    ).send();
//  };





      typedef eosio::multi_index< name("accounts"), account > accounts;
      typedef eosio::multi_index< name("stat"), currency_stats > stats;
      typedef eosio::multi_index< name("refunds"), refund_request >  refunds_table;
      
      
      
      
      
      typedef eosio::multi_index< name("stakeprosp"), stake_prospector > stake_prospectors;
      
      typedef eosio::multi_index< name("totalprosp"), stake_prospectors_total > stake_prospectors_totals;




typedef eosio::multi_index< name("stakeconso"), stake_conso > stake_consos;
typedef eosio::multi_index< name("totalconsort"), stake_consortium_total > stake_consortium_totals;

typedef eosio::multi_index< name("stakedice"), stake_dice > stake_dices;
typedef eosio::multi_index< name("totaldice"), stake_dice_total > stake_dice_totals;

typedef eosio::multi_index< name("stakelumeos"), stake_lumeo > stake_lumeos;
typedef eosio::multi_index< name("totallumeos"), stake_lumeos_total > stake_lumeos_totals;

typedef eosio::multi_index< name("stakeliqapps"), stake_liqapp > stake_liqapps;
typedef eosio::multi_index< name("totalliqapps"), stake_liqapps_total > stake_liqapps_totals;

typedef eosio::multi_index< name("stakepixeos"), stake_pixeo > stake_pixeos;
typedef eosio::multi_index< name("totalpixeos"), stake_pixeos_total > stake_pixeos_totals;

typedef eosio::multi_index< name("stakeeffect"), stake_effectai > stake_effectais;
typedef eosio::multi_index< name("totaleffect"), stake_effectai_total > stake_effectai_totals;

typedef eosio::multi_index< name("stakeemanate"), stake_emanate > stake_emanates;
typedef eosio::multi_index< name("totalemanate"), stake_emanate_total > stake_emanate_totals;

typedef eosio::multi_index< name("stakeevriped"), stake_everipedia > stake_everipedias;
typedef eosio::multi_index< name("totalevriped"), stake_everipedia_total > stake_everipedia_totals;

typedef eosio::multi_index< name("stakebiggame"), stake_biggame > stake_biggames;
typedef eosio::multi_index< name("totalbiggame"), stake_biggame_total > stake_biggame_totals;

typedef eosio::multi_index< name("stakedefind"), stake_defind > stake_definds;
typedef eosio::multi_index< name("totaldefind"), stake_defind_total > stake_defind_totals;

typedef eosio::multi_index< name("stakehirevi"), stake_hirevibe > stake_hirevibes;
typedef eosio::multi_index< name("totalhirevi"), stake_hirevibes_total > stake_hirevibes_totals;

typedef eosio::multi_index< name("staketpt"), stake_tpt > stake_tpts;
typedef eosio::multi_index< name("totaltpt"), stake_tpt_total > stake_tpt_totals;

typedef eosio::multi_index< name("stakeeosdt"), stake_eosdt > stake_eosdts;
typedef eosio::multi_index< name("totaleosdt"), stake_eosdt_total > stake_eosdt_totals;

typedef eosio::multi_index< name("stakebancor"), stake_bancor > stake_bancors;
typedef eosio::multi_index< name("totalbancor"), stake_bancor_total > stake_bancor_totals;

typedef eosio::multi_index< name("stakevigor"), stake_vigor > stake_vigors;
typedef eosio::multi_index< name("totalvigor"), stake_vigor_total > stake_vigor_totals;

typedef eosio::multi_index< name("stakeeosdac"), stake_eosdac > stake_eosdacs;
typedef eosio::multi_index< name("totaleosdac"), stake_eosdac_total > stake_eosdac_totals;

typedef eosio::multi_index< name("stakeedna"), stake_edna > stake_ednas;
typedef eosio::multi_index< name("totaledna"), stake_edna_total > stake_edna_totals;

typedef eosio::multi_index< name("stakesense"), stake_sense > stake_senses;
typedef eosio::multi_index< name("totalsense"), stake_sense_total > stake_sense_totals;

typedef eosio::multi_index< name("stakepeos"), stake_peo > stake_peos;
typedef eosio::multi_index< name("totalpeos"), stake_peos_total > stake_peos_totals;

typedef eosio::multi_index< name("stakenewdex"), stake_newdex > stake_newdexs;
typedef eosio::multi_index< name("totalnewdex"), stake_newdex_total > stake_newdex_totals;

typedef eosio::multi_index< name("stakechintai"), stake_chintai > stake_chintais;
typedef eosio::multi_index< name("totalchintai"), stake_chintai_total > stake_chintai_totals;
//varem oli payvarykarma

void distrcalculation(float jagatisylemine, float jagatisalumine, name owner);

void initialdistr( name owner, asset quantity );

void inline_transfer (name from, name to, asset quantity);

//void payvary( name owner, asset quantity );

//void stakecheck( name owner, asset quantity);

      //void stakecheck( name owner, asset quantity);


      //void sub_balance( name owner, asset value , bool use_locked_balance = false);
      void sub_balance( name owner, asset value);
      void add_balance( name owner, asset value, name ram_payer );

      void inline_refund_conso(name owner, name rampayer, uint64_t index);
      void inline_stake_conso(name owner, asset quantity, name rampayer);
      
      void inline_refund_prosp(name owner, name rampayer, uint64_t index);
      void inline_stake_prosp(name owner, asset quantity, name rampayer);
      
      //void inline_refund_karma(name owner, name rampayer, uint64_t index);
      //void inline_stake_karma(name owner, asset quantity, name rampayer);




void inline_refund_dice(name owner, name rampayer, uint64_t index);
      void inline_stake_dice(name owner, asset quantity, name rampayer);

void inline_refund_lumeos(name owner, name rampayer, uint64_t index);
      void inline_stake_lumeos(name owner, asset quantity, name rampayer);

void inline_refund_liqapps(name owner, name rampayer, uint64_t index);
      void inline_stake_liqapps(name owner, asset quantity, name rampayer);

void inline_refund_pixeos(name owner, name rampayer, uint64_t index);
      void inline_stake_pixeos(name owner, asset quantity, name rampayer);

void inline_refund_effectai(name owner, name rampayer, uint64_t index);
      void inline_stake_effectai(name owner, asset quantity, name rampayer);

void inline_refund_emanate(name owner, name rampayer, uint64_t index);
      void inline_stake_emanate(name owner, asset quantity, name rampayer);

void inline_refund_everipedia(name owner, name rampayer, uint64_t index);
      void inline_stake_everipedia(name owner, asset quantity, name rampayer);


void inline_refund_biggame(name owner, name rampayer, uint64_t index);
      void inline_stake_biggame(name owner, asset quantity, name rampayer);

void inline_refund_defind(name owner, name rampayer, uint64_t index);
      void inline_stake_defind(name owner, asset quantity, name rampayer);

void inline_refund_hirevibes(name owner, name rampayer, uint64_t index);
      void inline_stake_hirevibes(name owner, asset quantity, name rampayer);

void inline_refund_tpt(name owner, name rampayer, uint64_t index);
      void inline_stake_tpt(name owner, asset quantity, name rampayer);

void inline_refund_eosdt(name owner, name rampayer, uint64_t index);
      void inline_stake_eosdt(name owner, asset quantity, name rampayer);

void inline_refund_bancor(name owner, name rampayer, uint64_t index);
      void inline_stake_bancor(name owner, asset quantity, name rampayer);

void inline_refund_vigor(name owner, name rampayer, uint64_t index);
      void inline_stake_vigor(name owner, asset quantity, name rampayer);

void inline_refund_eosdac(name owner, name rampayer, uint64_t index);
      void inline_stake_eosdac(name owner, asset quantity, name rampayer);

void inline_refund_edna(name owner, name rampayer, uint64_t index);
      void inline_stake_edna(name owner, asset quantity, name rampayer);

void inline_refund_sense(name owner, name rampayer, uint64_t index);
      void inline_stake_sense(name owner, asset quantity, name rampayer);

void inline_refund_peos(name owner, name rampayer, uint64_t index);
      void inline_stake_peos(name owner, asset quantity, name rampayer);

void inline_refund_newdex(name owner, name rampayer, uint64_t index);
      void inline_stake_newdex(name owner, asset quantity, name rampayer);

void inline_refund_chintai(name owner, name rampayer, uint64_t index);
      void inline_stake_chintai(name owner, asset quantity, name rampayer);

      
      asset collect_refund(name owner, const symbol& symbol, uint64_t auto_index);
   
  

      
};

