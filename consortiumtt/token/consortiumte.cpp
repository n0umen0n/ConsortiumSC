/**
 *  @file
 *  @copyright defined in eos/LICENSE.txt
 */

#include "consortiumte.hpp"


#define SENDER_ID(X, Y)        ( ((uint128_t)X << 64) | Y )

time_point current_time_point() {
   const static time_point ct{ microseconds{ static_cast<int64_t>( current_time() ) } };
   return ct;
}


void consortiumte::inline_transfer(name from, name to, asset quantity)
{
   sub_balance( from, quantity);
   add_balance( to, quantity, from );

}




void consortiumte::payvary(name owner, asset quantity, int64_t paydeterminant) {
  
        require_auth ( name("consortium11"));
        require_recipient( owner );
  
  auto sym = quantity.symbol;

   stake_consortium_totals lock_from_acnts( _self, sym.code().raw() );
   const auto& lock_from = lock_from_acnts.get( quantity.symbol.code().raw(), "no total consortium balance object found in lock_accounts" );
   
   stake_prospectors_totals lock_from_acnts_prosp( _self, sym.code().raw() );
   const auto& lock_from_prosp = lock_from_acnts_prosp.get( quantity.symbol.code().raw(), "no total prosp lock balance object found" );

   stake_dice_totals lock_from_acnts_dice( _self, sym.code().raw() );
   const auto& lock_from_dice = lock_from_acnts_dice.get( quantity.symbol.code().raw(), "no total dice lock balance object found" );

   stake_liqapps_totals lock_from_acnts_liqapps( _self, sym.code().raw() );
   const auto& lock_from_liqapps = lock_from_acnts_liqapps.get( quantity.symbol.code().raw(), "no total liqapps lock balance object found" );

   stake_lumeos_totals lock_from_acnts_lumeos( _self, sym.code().raw() );
   const auto& lock_from_lumeos = lock_from_acnts_lumeos.get( quantity.symbol.code().raw(), "no total lumeos lock balance object found" );

   stake_pixeos_totals lock_from_acnts_pixeos( _self, sym.code().raw() );
   const auto& lock_from_pixeos = lock_from_acnts_pixeos.get( quantity.symbol.code().raw(), "no total pixeos lock balance object found" );

   stake_effectai_totals lock_from_acnts_effectai( _self, sym.code().raw() );
   const auto& lock_from_effectai = lock_from_acnts_effectai.get( quantity.symbol.code().raw(), "no total effectai lock balance object found" );

   stake_emanate_totals lock_from_acnts_emanate( _self, sym.code().raw() );
   const auto& lock_from_emanate = lock_from_acnts_emanate.get( quantity.symbol.code().raw(), "no total emanate lock balance object found" );
   
   stake_everipedia_totals lock_from_acnts_everipedia( _self, sym.code().raw() );
   const auto& lock_from_everipedia = lock_from_acnts_everipedia.get( quantity.symbol.code().raw(), "no total everipedia lock balance object found" );
  
   stake_biggame_totals lock_from_acnts_biggame( _self, sym.code().raw() );
   const auto& lock_from_biggame = lock_from_acnts_biggame.get( quantity.symbol.code().raw(), "no total biggame lock balance object found" );
  
   stake_defind_totals lock_from_acnts_defind( _self, sym.code().raw() );
   const auto& lock_from_defind = lock_from_acnts_defind.get( quantity.symbol.code().raw(), "no total defind lock balance object found" );
  
   stake_hirevibes_totals lock_from_acnts_hirevibes( _self, sym.code().raw() );
   const auto& lock_from_hirevibes = lock_from_acnts_hirevibes.get( quantity.symbol.code().raw(), "no total hirevibes lock balance object found" );
   
   stake_tpt_totals lock_from_acnts_tpt( _self, sym.code().raw() );
   const auto& lock_from_tpt = lock_from_acnts_tpt.get( quantity.symbol.code().raw(), "no total tpt lock balance object found" );
   
   stake_eosdt_totals lock_from_acnts_eosdt( _self, sym.code().raw() );
   const auto& lock_from_eosdt = lock_from_acnts_eosdt.get( quantity.symbol.code().raw(), "no total eosdt lock balance object found" );
   
   stake_bancor_totals lock_from_acnts_bancor( _self, sym.code().raw() );
   const auto& lock_from_bancor = lock_from_acnts_bancor.get( quantity.symbol.code().raw(), "no total bancor lock balance object found" );
   
   stake_vigor_totals lock_from_acnts_vigor( _self, sym.code().raw() );
   const auto& lock_from_vigor = lock_from_acnts_vigor.get( quantity.symbol.code().raw(), "no total vigor lock balance object found" );
   
   stake_eosdac_totals lock_from_acnts_eosdac( _self, sym.code().raw() );
   const auto& lock_from_eosdac = lock_from_acnts_eosdac.get( quantity.symbol.code().raw(), "no total eosdac lock balance object found" );
   
   stake_edna_totals lock_from_acnts_edna( _self, sym.code().raw() );
   const auto& lock_from_edna= lock_from_acnts_edna.get( quantity.symbol.code().raw(), "no total edna lock balance object found" );
   
   stake_sense_totals lock_from_acnts_sense( _self, sym.code().raw() );
   const auto& lock_from_sense = lock_from_acnts_sense.get( quantity.symbol.code().raw(), "no total sense lock balance object found" );
   
   stake_peos_totals lock_from_acnts_peos( _self, sym.code().raw() );
   const auto& lock_from_peos = lock_from_acnts_peos.get( quantity.symbol.code().raw(), "no total everipedia lock balance object found" );
   
   stake_newdex_totals lock_from_acnts_newdex( _self, sym.code().raw() );
   const auto& lock_from_newdex = lock_from_acnts_newdex.get( quantity.symbol.code().raw(), "no total newdex lock balance object found" );
   
   stake_chintai_totals lock_from_acnts_chintai( _self, sym.code().raw() );
   const auto& lock_from_chintai = lock_from_acnts_chintai.get( quantity.symbol.code().raw(), "no total chintai lock balance object found" );
   
   
struct asset jagaja = {int64_t (1), symbol ("GOVRN", 4)};  
  
float jagatisalumine = (lock_from_liqapps.total_staked_liqapps +
 lock_from_emanate.total_staked_emanate+
lock_from.total_staked_consortium + lock_from_everipedia.total_staked_everipedia + 
lock_from_dice.total_staked_dice + lock_from_pixeos.total_staked_pixeos + 
lock_from_effectai.total_staked_effectai + lock_from_lumeos.total_staked_lumeos + 
lock_from_prosp.total_staked_prospectors + lock_from_biggame.total_staked_biggame
+ lock_from_defind.total_staked_defind + lock_from_hirevibes.total_staked_hirevibes
+ lock_from_tpt.total_staked_tpt + lock_from_eosdt.total_staked_eosdt
+ lock_from_bancor.total_staked_bancor+ lock_from_vigor.total_staked_vigor
+ lock_from_eosdac.total_staked_eosdac + lock_from_edna.total_staked_edna 
+ lock_from_sense.total_staked_sense + lock_from_peos.total_staked_peos
+ lock_from_newdex.total_staked_newdex + lock_from_chintai.total_staked_chintai)/jagaja;
  

  
  if (paydeterminant == 1){ 
    
    
float jagatisylemine = lock_from_prosp.total_staked_prospectors/jagaja;

distrcalculation (jagatisylemine, jagatisalumine, owner);
    
  }
  
  else if (paydeterminant == 2) {
    
float jagatisylemine = lock_from.total_staked_consortium/jagaja;

distrcalculation (jagatisylemine, jagatisalumine, owner);
    
  }
  
  
  
   else if (paydeterminant == 22) {
    
float jagatisylemine = lock_from_defind.total_staked_defind/jagaja;

distrcalculation (jagatisylemine, jagatisalumine, owner);
    
  }
  
  
  else if (paydeterminant == 4) {
    
float jagatisylemine = lock_from_dice.total_staked_dice/jagaja;

distrcalculation (jagatisylemine, jagatisalumine, owner);
    
  }
  



else if (paydeterminant == 5) {
    
float jagatisylemine = lock_from_lumeos.total_staked_lumeos/jagaja;

distrcalculation (jagatisylemine, jagatisalumine, owner);

  }
  

else if (paydeterminant == 6) {
    
float jagatisylemine = lock_from_liqapps.total_staked_liqapps/jagaja;

distrcalculation (jagatisylemine, jagatisalumine, owner);
    
  }


else if (paydeterminant == 7) {
    
float jagatisylemine = lock_from_pixeos.total_staked_pixeos/jagaja;

distrcalculation (jagatisylemine, jagatisalumine, owner);
    
  }

else if (paydeterminant == 8) {
    
float jagatisylemine = lock_from_effectai.total_staked_effectai/jagaja;

distrcalculation (jagatisylemine, jagatisalumine, owner);

  }
  
  else if (paydeterminant == 9) {
    
float jagatisylemine = lock_from_everipedia.total_staked_everipedia/jagaja;

distrcalculation (jagatisylemine, jagatisalumine, owner);
    
  }
  
  else if (paydeterminant == 10) {
    
float jagatisylemine = lock_from_emanate.total_staked_emanate/jagaja;

distrcalculation (jagatisylemine, jagatisalumine, owner);
    
  }
  
  else if (paydeterminant == 23) {
    
float jagatisylemine = lock_from_biggame.total_staked_biggame/jagaja;

distrcalculation (jagatisylemine, jagatisalumine, owner);
    
  }
  
  else if (paydeterminant == 21) {
    
float jagatisylemine = lock_from_hirevibes.total_staked_hirevibes/jagaja;

distrcalculation (jagatisylemine, jagatisalumine, owner);
    
  }
  
  else if (paydeterminant == 20) {
    
float jagatisylemine = lock_from_tpt.total_staked_tpt/jagaja;

distrcalculation (jagatisylemine, jagatisalumine, owner);
    
  }
  
  else if (paydeterminant == 19) {
    
float jagatisylemine = lock_from_eosdt.total_staked_eosdt/jagaja;

distrcalculation (jagatisylemine, jagatisalumine, owner);
    
  }
  
  else if (paydeterminant == 18) {
    
float jagatisylemine = lock_from_bancor.total_staked_bancor/jagaja;

distrcalculation (jagatisylemine, jagatisalumine, owner);
    
  }
  
  else if (paydeterminant == 17) {
    
float jagatisylemine = lock_from_vigor.total_staked_vigor/jagaja;

distrcalculation (jagatisylemine, jagatisalumine, owner);
    
  }
  
  else if (paydeterminant == 16) {
    
float jagatisylemine = lock_from_eosdac.total_staked_eosdac/jagaja;

distrcalculation (jagatisylemine, jagatisalumine, owner);
    
  }
  
  else if (paydeterminant == 15) {
    
float jagatisylemine = lock_from_edna.total_staked_edna/jagaja;

distrcalculation (jagatisylemine, jagatisalumine, owner);
    
  }
  
  else if (paydeterminant == 14) {
    
float jagatisylemine = lock_from_sense.total_staked_sense/jagaja;

distrcalculation (jagatisylemine, jagatisalumine, owner);
    
  }
  
  else if (paydeterminant == 13) {
    
float jagatisylemine = lock_from_peos.total_staked_peos/jagaja;

distrcalculation (jagatisylemine, jagatisalumine, owner);
    
  }
  
  else if (paydeterminant == 12) {
    
float jagatisylemine = lock_from_newdex.total_staked_newdex/jagaja;

distrcalculation (jagatisylemine, jagatisalumine, owner);
    
  }
  
  
  else  {
    
float jagatisylemine = lock_from_chintai.total_staked_chintai/jagaja;

distrcalculation (jagatisylemine, jagatisalumine, owner);
    
  }

}


void consortiumte::distrcalculation (float jagatisylemine, float jagatisalumine, name owner) {
    
float kordaja = jagatisylemine/jagatisalumine;

int64_t jagamisele = 100000000 + 700000000 * kordaja;  

struct asset productPrice = {int64_t (jagamisele), symbol ("GOVRN", 4)};

initialdistr(owner, productPrice );

realgovrn(owner, productPrice );
    
    
  }




void consortiumte::initialdistr( name owner, asset quantity )
    {
        auto sym = quantity.symbol;
        check( sym.is_valid(), "Invalid symbol name" );

        auto sym_code_raw = sym.code().raw();

        stats statstable( _self, sym_code_raw );
        auto existing = statstable.find( sym_code_raw );
        check( existing != statstable.end(), "Token with that symbol name does not exist - Please create the token before issuing" );

        const auto& st = *existing;

      
        require_auth ( name("consortium11"));
        require_recipient( owner );
       

        check( quantity.is_valid(), "Invalid quantity value" );
        //check( quantity.amount == 500000000, "Quantity exceeds signup allowance" );
        check( st.supply.symbol == quantity.symbol, "Symbol precision mismatch" );
        check( st.max_supply.amount - st.supply.amount >= quantity.amount, "Quantity value cannot exceed the available supply" );

        statstable.modify( st, name("consortium11"), [&]( auto& s ) {
            s.supply += quantity;
        });
        
        
        add_balance( owner, quantity, name("consortium11"));
        
        
    }

        
        
void consortiumte::create( name   issuer,
                    asset  maximum_supply )
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
       s.refund_delay  = 0;
       s.transfer_fee_ratio  = 0;
       s.fee_receiver      = issuer;
    });
}


void consortiumte::issue( name to, asset quantity, string memo )
{
    auto sym = quantity.symbol;
    check( sym.is_valid(), "invalid symbol name" );
    check( memo.size() <= 256, "memo has more than 256 bytes" );

    stats statstable( _self, sym.code().raw() );
    auto existing = statstable.find( sym.code().raw() );
    check( existing != statstable.end(), "token with symbol does not exist, create token before issue" );
    const auto& st = *existing;

    require_auth( st.issuer );
    check( quantity.is_valid(), "invalid quantity" );
    check( quantity.amount > 0, "must issue positive quantity" );

    check( quantity.symbol == st.supply.symbol, "symbol precision mismatch" );
    check( quantity.amount <= st.max_supply.amount - st.supply.amount, "quantity exceeds available supply");

    statstable.modify( st, same_payer, [&]( auto& s ) {
       s.supply += quantity;
    });

    add_balance( st.issuer, quantity, st.issuer );

    if( to != st.issuer ) {
      SEND_INLINE_ACTION( *this, transfer, { {st.issuer, "active"_n} },
                          { st.issuer, to, quantity, memo }
      );
    }
}

void consortiumte::retire( asset quantity, string memo )
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


void consortiumte::transfer( name    from,
                      name    to,
                      asset   quantity,
                      string  memo )
{
   check( from != to, "cannot transfer to self" );
   require_auth( from );
   check( is_account( to ), "to account does not exist");
   auto sym = quantity.symbol.code();
   stats statstable( _self, sym.raw() );
   const auto& st = statstable.get( sym.raw() );

   require_recipient( from );
   require_recipient( to );

   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must transfer positive quantity" );
   check( quantity.symbol == st.supply.symbol, "symbol precision mismatch" );
   check( memo.size() <= 256, "memo has more than 256 bytes" );

   auto payer = has_auth( to ) ? to : from;

   auto separator_pos = memo.find(':');

   if(separator_pos != string::npos) {
      string main_memo = memo.substr(0, separator_pos);
      string sub_memo = memo.substr(separator_pos + 1);

    
   }

   // default transfer
   sub_balance( from, quantity );
   add_balance( to, quantity, payer );

}









asset consortiumte::collect_refund(name owner, const symbol& symbol, uint64_t auto_index)
{
   refunds_table refunds_tbl( _self, owner.value );
   //iterate to add up all refund requests
   asset unstaking_amount = asset{0, symbol};
   for (uint64_t i = 0; i < auto_index; i++) {
        auto req = refunds_tbl.find(i);
        if (req != refunds_tbl.end()) {
           if (req->amount.symbol.code().raw() == symbol.code().raw()) {
               unstaking_amount += req->amount;
           }
        }
   }
   return unstaking_amount;
}






void consortiumte::cancelunstake(name owner, uint64_t index)
{
   require_auth( owner );

   uint128_t sender_id = SENDER_ID(owner.value, index);
   cancel_deferred( sender_id );

   refunds_table refunds_tbl( _self, owner.value );
   auto req = refunds_tbl.find( index );
   check( req != refunds_tbl.end(), "refund request not found" );
   refunds_tbl.erase( req );
}

void consortiumte::sub_balance( name owner, asset value) 
{
   accounts from_acnts( _self, owner.value );
   const auto& from = from_acnts.get( value.symbol.code().raw(), "no balance object found in accounts" );

   stake_consos lock_from_acnts( _self, owner.value );
   const auto& lock_from = lock_from_acnts.get( value.symbol.code().raw(), "no balance object found in lock_accounts" );
   
   stake_prospectors lock_from_acnts_prosp( _self, owner.value );
   const auto& lock_from_prosp = lock_from_acnts_prosp.get( value.symbol.code().raw(), "no prosp lock balance object found" );

   stake_dices lock_from_acnts_dice( _self, owner.value );
   const auto& lock_from_dice = lock_from_acnts_dice.get( value.symbol.code().raw(), "no dice lock balance object found" );

   stake_liqapps lock_from_acnts_liqapps( _self, owner.value );
   const auto& lock_from_liqapps = lock_from_acnts_liqapps.get( value.symbol.code().raw(), "no liqapps lock balance object found" );

   stake_lumeos lock_from_acnts_lumeos( _self, owner.value );
   const auto& lock_from_lumeos = lock_from_acnts_lumeos.get( value.symbol.code().raw(), "no lumeos lock balance object found" );

   stake_pixeos lock_from_acnts_pixeos( _self, owner.value );
   const auto& lock_from_pixeos = lock_from_acnts_pixeos.get( value.symbol.code().raw(), "no pixeos lock balance object found" );

   stake_effectais lock_from_acnts_effectai( _self, owner.value );
   const auto& lock_from_effectai = lock_from_acnts_effectai.get( value.symbol.code().raw(), "no effectai lock balance object found" );

   stake_emanates lock_from_acnts_emanate( _self, owner.value );
   const auto& lock_from_emanate = lock_from_acnts_emanate.get( value.symbol.code().raw(), "no emanate lock balance object found" );
   
   stake_everipedias lock_from_acnts_everipedia( _self, owner.value );
   const auto& lock_from_everipedia = lock_from_acnts_everipedia.get( value.symbol.code().raw(), "no everipedia lock balance object found" );
   
   stake_biggames lock_from_acnts_biggame( _self, owner.value );
   const auto& lock_from_biggame = lock_from_acnts_biggame.get( value.symbol.code().raw(), "no total biggame lock balance object found" );
  
   stake_definds lock_from_acnts_defind( _self, owner.value );
   const auto& lock_from_defind = lock_from_acnts_defind.get( value.symbol.code().raw(), "no total defind lock balance object found" );
  
   stake_hirevibes lock_from_acnts_hirevibes( _self, owner.value );
   const auto& lock_from_hirevibes = lock_from_acnts_hirevibes.get( value.symbol.code().raw(), "no total hirevibes lock balance object found" );
   
   stake_tpts lock_from_acnts_tpt( _self, owner.value );
   const auto& lock_from_tpt = lock_from_acnts_tpt.get( value.symbol.code().raw(), "no total tpt lock balance object found" );
   
   stake_eosdts lock_from_acnts_eosdt( _self, owner.value );
   const auto& lock_from_eosdt = lock_from_acnts_eosdt.get( value.symbol.code().raw(), "no total eosdt lock balance object found" );
   
   stake_bancors lock_from_acnts_bancor( _self, owner.value );
   const auto& lock_from_bancor = lock_from_acnts_bancor.get( value.symbol.code().raw(), "no total bancor lock balance object found" );
   
   stake_vigors lock_from_acnts_vigor( _self, owner.value );
   const auto& lock_from_vigor = lock_from_acnts_vigor.get( value.symbol.code().raw(), "no total vigor lock balance object found" );
   
   stake_eosdacs lock_from_acnts_eosdac( _self, owner.value );
   const auto& lock_from_eosdac = lock_from_acnts_eosdac.get( value.symbol.code().raw(), "no total eosdac lock balance object found" );
   
   stake_ednas lock_from_acnts_edna( _self, owner.value );
   const auto& lock_from_edna= lock_from_acnts_edna.get( value.symbol.code().raw(), "no total edna lock balance object found" );
   
   stake_senses lock_from_acnts_sense( _self, owner.value );
   const auto& lock_from_sense = lock_from_acnts_sense.get( value.symbol.code().raw(), "no total sense lock balance object found" );
   
   stake_peos lock_from_acnts_peos( _self, owner.value );
   const auto& lock_from_peos = lock_from_acnts_peos.get( value.symbol.code().raw(), "no total peos lock balance object found" );
   
   stake_newdexs lock_from_acnts_newdex( _self, owner.value );
   const auto& lock_from_newdex = lock_from_acnts_newdex.get( value.symbol.code().raw(), "no total newdex lock balance object found" );
   
   stake_chintais lock_from_acnts_chintai( _self, owner.value );
   const auto& lock_from_chintai = lock_from_acnts_chintai.get( value.symbol.code().raw(), "no total chintai lock balance object found" );
   
   
  
   
   
   
   check( from.balance + lock_from_everipedia.staked_balance + lock_from_emanate.staked_balance + 
   lock_from_effectai.staked_balance + lock_from_pixeos.staked_balance + 
   lock_from_lumeos.staked_balance + lock_from_liqapps.staked_balance + 
   lock_from.staked_balance + lock_from_prosp.staked_balance + 
   lock_from_dice.staked_balance 
   
  + lock_from_biggame.staked_balance
+ lock_from_defind.staked_balance + lock_from_hirevibes.staked_balance
+ lock_from_tpt.staked_balance + lock_from_eosdt.staked_balance
+ lock_from_bancor.staked_balance+ lock_from_vigor.staked_balance
+ lock_from_eosdac.staked_balance + lock_from_edna.staked_balance
+ lock_from_sense.staked_balance + lock_from_peos.staked_balance
+ lock_from_newdex.staked_balance + lock_from_chintai.staked_balance
   
   >= (lock_from_everipedia.staked_balance + lock_from_emanate.staked_balance + 
   lock_from_effectai.staked_balance + lock_from_pixeos.staked_balance + 
   lock_from_lumeos.staked_balance + lock_from_liqapps.staked_balance + 
   lock_from.staked_balance + value + lock_from_prosp.staked_balance +
    lock_from_dice.staked_balance
    + lock_from_biggame.staked_balance
+ lock_from_defind.staked_balance + lock_from_hirevibes.staked_balance
+ lock_from_tpt.staked_balance + lock_from_eosdt.staked_balance
+ lock_from_bancor.staked_balance+ lock_from_vigor.staked_balance
+ lock_from_eosdac.staked_balance + lock_from_edna.staked_balance
+ lock_from_sense.staked_balance + lock_from_peos.staked_balance
+ lock_from_newdex.staked_balance + lock_from_chintai.staked_balance
   
   ), "sub_balance: from.balance overdrawn balance" );


   from_acnts.modify( from, owner, [&]( auto& a ) {
         a.balance -= value;
   });
}

void consortiumte::add_balance( name owner, asset value, name ram_payer )
{
   accounts to_acnts( _self, owner.value );
   auto to = to_acnts.find( value.symbol.code().raw() );
   if( to == to_acnts.end() ) {
      to_acnts.emplace( ram_payer, [&]( auto& a ){
        a.balance = value;
      });
   

      // lock balance record init SIIN CHANGE
      stake_consos lock_to_acnts( _self, owner.value );
      auto lock_to = lock_to_acnts.find( value.symbol.code().raw() );
      if( lock_to == lock_to_acnts.end() ) {
         lock_to_acnts.emplace( ram_payer, [&]( auto& a ){
            a.staked_balance = asset{0, value.symbol};
         });
      }

      
      stake_prospectors single_prosp( _self, owner.value );
      auto lock_to_prosp = single_prosp.find( value.symbol.code().raw() );
      if( lock_to_prosp == single_prosp.end() ) {
         single_prosp.emplace( ram_payer, [&]( auto& a ){
            a.staked_balance = asset{0, value.symbol};
         });
      }
      
      
      
      
      
      
      stake_dices single_dice( _self, owner.value );
      auto lock_to_dice = single_dice.find( value.symbol.code().raw() );
      if( lock_to_dice == single_dice.end() ) {
         single_dice.emplace( ram_payer, [&]( auto& a ){
            a.staked_balance = asset{0, value.symbol};
         });
      }
  



stake_lumeos single_lumeos( _self, owner.value );
      auto lock_to_lumeos = single_lumeos.find( value.symbol.code().raw() );
      if( lock_to_lumeos == single_lumeos.end() ) {
         single_lumeos.emplace( ram_payer, [&]( auto& a ){
            a.staked_balance = asset{0, value.symbol};
         });
      }
  


stake_liqapps single_liqapps( _self, owner.value );
      auto lock_to_liqapps = single_liqapps.find( value.symbol.code().raw() );
      if( lock_to_liqapps == single_liqapps.end() ) {
         single_liqapps.emplace( ram_payer, [&]( auto& a ){
            a.staked_balance = asset{0, value.symbol};
         });
      }
  


stake_pixeos single_pixeos( _self, owner.value );
      auto lock_to_pixeos = single_pixeos.find( value.symbol.code().raw() );
      if( lock_to_pixeos == single_pixeos.end() ) {
         single_pixeos.emplace( ram_payer, [&]( auto& a ){
            a.staked_balance = asset{0, value.symbol};
         });
      }
  


stake_effectais single_effectai( _self, owner.value );
      auto lock_to_effectai = single_effectai.find( value.symbol.code().raw() );
      if( lock_to_effectai == single_effectai.end() ) {
         single_effectai.emplace( ram_payer, [&]( auto& a ){
            a.staked_balance = asset{0, value.symbol};
         });
      }



stake_emanates single_emanate( _self, owner.value );
      auto lock_to_emanate = single_emanate.find( value.symbol.code().raw() );
      if( lock_to_emanate == single_emanate.end() ) {
         single_emanate.emplace( ram_payer, [&]( auto& a ){
            a.staked_balance = asset{0, value.symbol};
         });
      }
  


stake_everipedias single_everipedia( _self, owner.value );
      auto lock_to_everipedia = single_everipedia.find( value.symbol.code().raw() );
      if( lock_to_everipedia == single_everipedia.end() ) {
         single_everipedia.emplace( ram_payer, [&]( auto& a ){
            a.staked_balance = asset{0, value.symbol};
         });
      }


stake_biggames single_biggame( _self, owner.value );
      auto lock_to_biggame = single_biggame.find( value.symbol.code().raw() );
      if( lock_to_biggame == single_biggame.end() ) {
         single_biggame.emplace( ram_payer, [&]( auto& a ){
            a.staked_balance = asset{0, value.symbol};
         });
      }
      
      stake_definds single_defind( _self, owner.value );
      auto lock_to_defind = single_defind.find( value.symbol.code().raw() );
      if( lock_to_defind == single_defind.end() ) {
         single_defind.emplace( ram_payer, [&]( auto& a ){
            a.staked_balance = asset{0, value.symbol};
         });
      }
      
      stake_hirevibes single_hirevibes( _self, owner.value );
      auto lock_to_hirevibes = single_hirevibes.find( value.symbol.code().raw() );
      if( lock_to_hirevibes == single_hirevibes.end() ) {
         single_hirevibes.emplace( ram_payer, [&]( auto& a ){
            a.staked_balance = asset{0, value.symbol};
         });
      }
      
      stake_tpts single_tpt( _self, owner.value );
      auto lock_to_tpt = single_tpt.find( value.symbol.code().raw() );
      if( lock_to_tpt == single_tpt.end() ) {
         single_tpt.emplace( ram_payer, [&]( auto& a ){
            a.staked_balance = asset{0, value.symbol};
         });
      }
      
      stake_eosdts single_eosdt( _self, owner.value );
      auto lock_to_eosdt = single_eosdt.find( value.symbol.code().raw() );
      if( lock_to_eosdt == single_eosdt.end() ) {
         single_eosdt.emplace( ram_payer, [&]( auto& a ){
            a.staked_balance = asset{0, value.symbol};
         });
      }
      stake_bancors single_bancor( _self, owner.value );
      auto lock_to_bancor = single_bancor.find( value.symbol.code().raw() );
      if( lock_to_bancor == single_bancor.end() ) {
         single_bancor.emplace( ram_payer, [&]( auto& a ){
            a.staked_balance = asset{0, value.symbol};
         });
      }
      stake_vigors single_vigor( _self, owner.value );
      auto lock_to_vigor = single_vigor.find( value.symbol.code().raw() );
      if( lock_to_vigor == single_vigor.end() ) {
         single_vigor.emplace( ram_payer, [&]( auto& a ){
            a.staked_balance = asset{0, value.symbol};
         });
      }
      stake_eosdacs single_eosdac( _self, owner.value );
      auto lock_to_eosdac = single_eosdac.find( value.symbol.code().raw() );
      if( lock_to_eosdac == single_eosdac.end() ) {
         single_eosdac.emplace( ram_payer, [&]( auto& a ){
            a.staked_balance = asset{0, value.symbol};
         });
      }
      stake_ednas single_edna( _self, owner.value );
      auto lock_to_edna = single_edna.find( value.symbol.code().raw() );
      if( lock_to_edna == single_edna.end() ) {
         single_edna.emplace( ram_payer, [&]( auto& a ){
            a.staked_balance = asset{0, value.symbol};
         });
      }
      stake_senses single_sense( _self, owner.value );
      auto lock_to_sense = single_sense.find( value.symbol.code().raw() );
      if( lock_to_sense == single_sense.end() ) {
         single_sense.emplace( ram_payer, [&]( auto& a ){
            a.staked_balance = asset{0, value.symbol};
         });
      }
      stake_peos single_peos( _self, owner.value );
      auto lock_to_peos = single_peos.find( value.symbol.code().raw() );
      if( lock_to_peos == single_peos.end() ) {
         single_peos.emplace( ram_payer, [&]( auto& a ){
            a.staked_balance = asset{0, value.symbol};
         });
      }
      stake_newdexs single_newdex( _self, owner.value );
      auto lock_to_newdex = single_newdex.find( value.symbol.code().raw() );
      if( lock_to_newdex == single_newdex.end() ) {
         single_newdex.emplace( ram_payer, [&]( auto& a ){
            a.staked_balance = asset{0, value.symbol};
         });
      }

stake_chintais single_chintai( _self, owner.value );
      auto lock_to_chintai = single_chintai.find( value.symbol.code().raw() );
      if( lock_to_chintai == single_chintai.end() ) {
         single_chintai.emplace( ram_payer, [&]( auto& a ){
            a.staked_balance = asset{0, value.symbol};
         });
      }





   } else {
      to_acnts.modify( to, same_payer, [&]( auto& a ) {
        a.balance += value;
      });
      
      
      
   }
}



void consortiumte::open( name owner, const symbol& symbol, name ram_payer )
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

void consortiumte::close( name owner, const symbol& symbol )
{
   require_auth( owner );
   accounts acnts( _self, owner.value );
   auto it = acnts.find( symbol.code().raw() );
   check( it != acnts.end(), "Balance row already deleted or never existed. Action won't have any effect." );
   check( it->balance.amount == 0, "Cannot close because the balance is not zero." );
   acnts.erase( it );

   stake_consos lock_acnts( _self, owner.value );
   auto lock_it = lock_acnts.find( symbol.code().raw() );
   check( lock_it != lock_acnts.end(), "Lock Balance row already deleted or never existed. Action won't have any effect." );
   check( lock_it->staked_balance.amount == 0, "Cannot close because the balance is not zero." );
   lock_acnts.erase( lock_it );

}

void consortiumte::setdelay(const symbol& symbol, uint64_t t)
{
   auto sym_code_raw = symbol.code().raw();

   stats statstable( _self, sym_code_raw );
   const auto& st = statstable.get( sym_code_raw, "symbol does not exist." );
   check( st.supply.symbol == symbol, "symbol precision mismatch." );

   require_auth( st.issuer );
   statstable.modify( st, same_payer, [&]( auto& s ) {
      s.refund_delay = t;
   });
}





void consortiumte::autorefund(name owner, uint64_t index) 
{
   require_auth( _self );
   inline_refund_conso(owner, same_payer, index); // keep payer as before
}


void consortiumte::autorefprosp(name owner, uint64_t index) 
{
   require_auth( _self );
   inline_refund_prosp(owner, same_payer, index); // keep payer as before
}



void consortiumte::autorefdice(name owner, uint64_t index) 
{
   require_auth( _self );
   
  
   
   inline_refund_dice(owner, same_payer, index); // keep payer as before
}

void consortiumte::autoreflumeo(name owner, uint64_t index) 
{
   require_auth( _self );
   inline_refund_lumeos(owner, same_payer, index); // keep payer as before
}

void consortiumte::autorefliqap(name owner, uint64_t index) 
{
   require_auth( _self );
   inline_refund_liqapps(owner, same_payer, index); // keep payer as before
}

void consortiumte::autorefpixeo(name owner, uint64_t index) 
{
   require_auth( _self );
   inline_refund_pixeos(owner, same_payer, index); // keep payer as before
}

void consortiumte::autorefeffec(name owner, uint64_t index) 
{
   require_auth( _self );
   inline_refund_effectai(owner, same_payer, index); // keep payer as before
}

void consortiumte::autorefemana(name owner, uint64_t index) 
{
   require_auth( _self );
   inline_refund_emanate(owner, same_payer, index); // keep payer as before
}

void consortiumte::autorefeveri(name owner, uint64_t index) 
{
   require_auth( _self );
   inline_refund_everipedia(owner, same_payer, index); // keep payer as before
}


void consortiumte::autorefbigga(name owner, uint64_t index) 
{
   require_auth( _self );
   inline_refund_biggame(owner, same_payer, index); // keep payer as before
}

void consortiumte::autorefdefin(name owner, uint64_t index) 
{
   require_auth( _self );
   inline_refund_defind(owner, same_payer, index); // keep payer as before
}
void consortiumte::autorefhirev(name owner, uint64_t index) 
{
   require_auth( _self );
   inline_refund_hirevibes(owner, same_payer, index); // keep payer as before
}
void consortiumte::autoreftpt(name owner, uint64_t index) 
{
   require_auth( _self );
   inline_refund_tpt(owner, same_payer, index); // keep payer as before
}
void consortiumte::autorefeosdt(name owner, uint64_t index) 
{
   require_auth( _self );
   inline_refund_eosdt(owner, same_payer, index); // keep payer as before
}
void consortiumte::autorefbanco(name owner, uint64_t index) 
{
   require_auth( _self );
   inline_refund_bancor(owner, same_payer, index); // keep payer as before
}
void consortiumte::autorefvigor(name owner, uint64_t index) 
{
   require_auth( _self );
   inline_refund_vigor(owner, same_payer, index); // keep payer as before
}
void consortiumte::autorefeosda(name owner, uint64_t index) 
{
   require_auth( _self );
   inline_refund_eosdac(owner, same_payer, index); // keep payer as before
}
void consortiumte::autorefedna(name owner, uint64_t index) 
{
   require_auth( _self );
   inline_refund_edna(owner, same_payer, index); // keep payer as before
}
void consortiumte::autorefsense(name owner, uint64_t index) 
{
   require_auth( _self );
   inline_refund_sense(owner, same_payer, index); // keep payer as before
}
void consortiumte::autorefpeos(name owner, uint64_t index) 
{
   require_auth( _self );
   inline_refund_peos(owner, same_payer, index); // keep payer as before
}
void consortiumte::autorefnewde(name owner, uint64_t index) 
{
   require_auth( _self );
   inline_refund_newdex(owner, same_payer, index); // keep payer as before
}
void consortiumte::autorefchint(name owner, uint64_t index) 
{
   require_auth( _self );
   inline_refund_chintai(owner, same_payer, index); // keep payer as before
}





void consortiumte::inline_refund_conso(name owner, name rampayer, uint64_t index)
{
   refunds_table refunds_tbl( _self, owner.value );
   auto req = refunds_tbl.find( index );
   check( req != refunds_tbl.end(), "refund request not found" );
   check( req->available_time <= current_time_point(), "refund is not available yet" );

   asset quantity = req->amount;

   stake_consos lock_from_acnts( _self, owner.value );

   const auto& lock_from = lock_from_acnts.get( quantity.symbol.code().raw(), "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   lock_from_acnts.modify( lock_from, rampayer, [&]( auto& a ) {
      a.staked_balance -= quantity;
   });
   
   auto sym = quantity.symbol;
   
   stake_consortium_totals total_consortiums( _self, sym.code().raw() ); 
   
  const auto& consortiums = total_consortiums.get( quantity.symbol.code().raw(), "no total conso stake balance object found" );
   
   total_consortiums.modify( consortiums, rampayer, [&]( auto& a ) {
      a.total_staked_consortium -= quantity;
   });
   
   inline_transfer(_self, owner, quantity);

   refunds_tbl.erase( req );
}


void consortiumte::inline_refund_prosp(name owner, name rampayer, uint64_t index)
{
   refunds_table refunds_tbl( _self, owner.value );
   auto req = refunds_tbl.find( index );
   check( req != refunds_tbl.end(), "refund request not found" );
   check( req->available_time <= current_time_point(), "refund is not available yet" );

   asset quantity = req->amount;

   stake_prospectors lock_from_acnts( _self, owner.value );

   const auto& lock_from = lock_from_acnts.get( quantity.symbol.code().raw(), "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   lock_from_acnts.modify( lock_from, rampayer, [&]( auto& a ) {
      a.staked_balance -= quantity;
   });
   
   refunds_tbl.erase( req );
   
   auto sym = quantity.symbol;
   
   stake_prospectors_totals total_prospectors( _self, sym.code().raw() ); 
   
  const auto& prospectors = total_prospectors.get( quantity.symbol.code().raw(), "no total prosp stake balance object found" );
   
   total_prospectors.modify( prospectors, rampayer, [&]( auto& a ) {
      a.total_staked_prospectors -= quantity;
   });
   
   inline_transfer(_self, owner, quantity);
}


void consortiumte::inline_refund_dice(name owner, name rampayer, uint64_t index)
{
   refunds_table refunds_tbl( _self, owner.value );
   auto req = refunds_tbl.find( index );
   check( req != refunds_tbl.end(), "refund request not found" );
   check( req->available_time <= current_time_point(), "refund is not available yet" );

   asset quantity = req->amount;

   stake_dices lock_from_acnts( _self, owner.value );

   const auto& lock_from = lock_from_acnts.get( quantity.symbol.code().raw(), "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   lock_from_acnts.modify( lock_from, rampayer, [&]( auto& a ) {
      a.staked_balance -= quantity;
   });

   refunds_tbl.erase( req );
   
   auto sym = quantity.symbol;
   
   stake_dice_totals total_dice( _self, sym.code().raw() ); 
   
  const auto& dice = total_dice.get( quantity.symbol.code().raw(), "no total dice stake balance object found" );
   
   total_dice.modify( dice, rampayer, [&]( auto& a ) {
      a.total_staked_dice -= quantity;
   });
   
   inline_transfer(_self, owner, quantity);
   
}



void consortiumte::inline_refund_lumeos(name owner, name rampayer, uint64_t index)
{
   refunds_table refunds_tbl( _self, owner.value );
   auto req = refunds_tbl.find( index );
   check( req != refunds_tbl.end(), "refund request not found" );
   check( req->available_time <= current_time_point(), "refund is not available yet" );

   asset quantity = req->amount;

   stake_lumeos lock_from_acnts( _self, owner.value );

   const auto& lock_from = lock_from_acnts.get( quantity.symbol.code().raw(), "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   lock_from_acnts.modify( lock_from, rampayer, [&]( auto& a ) {
      a.staked_balance -= quantity;
   });

   refunds_tbl.erase( req );
   
   auto sym = quantity.symbol;
   
   stake_lumeos_totals total_lumeos( _self, sym.code().raw() ); 
   
  const auto& lumeos = total_lumeos.get( quantity.symbol.code().raw(), "no total lumeos stake balance object found" );
   
   total_lumeos.modify( lumeos, rampayer, [&]( auto& a ) {
      a.total_staked_lumeos -= quantity;
   });
   
   inline_transfer(_self, owner, quantity);
   
}



void consortiumte::inline_refund_liqapps(name owner, name rampayer, uint64_t index)
{
   refunds_table refunds_tbl( _self, owner.value );
   auto req = refunds_tbl.find( index );
   check( req != refunds_tbl.end(), "refund request not found" );
   check( req->available_time <= current_time_point(), "refund is not available yet" );

   asset quantity = req->amount;

   stake_liqapps lock_from_acnts( _self, owner.value );

   const auto& lock_from = lock_from_acnts.get( quantity.symbol.code().raw(), "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   lock_from_acnts.modify( lock_from, rampayer, [&]( auto& a ) {
      a.staked_balance -= quantity;
   });

   refunds_tbl.erase( req );
   
   auto sym = quantity.symbol;
   
   stake_liqapps_totals total_liqapps( _self, sym.code().raw() ); 
   
  const auto& liqapps = total_liqapps.get( quantity.symbol.code().raw(), "no total liqapps stake balance object found" );
   
   total_liqapps.modify( liqapps, rampayer, [&]( auto& a ) {
      a.total_staked_liqapps -= quantity;
   });
   
   inline_transfer(_self, owner, quantity);
   
}





void consortiumte::inline_refund_pixeos(name owner, name rampayer, uint64_t index)
{
   refunds_table refunds_tbl( _self, owner.value );
   auto req = refunds_tbl.find( index );
   check( req != refunds_tbl.end(), "refund request not found" );
   check( req->available_time <= current_time_point(), "refund is not available yet" );

   asset quantity = req->amount;

   stake_pixeos lock_from_acnts( _self, owner.value );

   const auto& lock_from = lock_from_acnts.get( quantity.symbol.code().raw(), "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   lock_from_acnts.modify( lock_from, rampayer, [&]( auto& a ) {
      a.staked_balance -= quantity;
   });

   refunds_tbl.erase( req );
   
   auto sym = quantity.symbol;
   
   stake_pixeos_totals total_pixeos( _self, sym.code().raw() ); 
   
  const auto& pixeos = total_pixeos.get( quantity.symbol.code().raw(), "no total pixeos stake balance object found" );
   
   total_pixeos.modify( pixeos, rampayer, [&]( auto& a ) {
      a.total_staked_pixeos -= quantity;
   });
   
   
   inline_transfer(_self, owner, quantity);
   
}


void consortiumte::inline_refund_effectai(name owner, name rampayer, uint64_t index)
{
   refunds_table refunds_tbl( _self, owner.value );
   auto req = refunds_tbl.find( index );
   check( req != refunds_tbl.end(), "refund request not found" );
   check( req->available_time <= current_time_point(), "refund is not available yet" );

   asset quantity = req->amount;

   stake_effectais lock_from_acnts( _self, owner.value );

   const auto& lock_from = lock_from_acnts.get( quantity.symbol.code().raw(), "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   lock_from_acnts.modify( lock_from, rampayer, [&]( auto& a ) {
      a.staked_balance -= quantity;
   });

   refunds_tbl.erase( req );
   
   auto sym = quantity.symbol;
   
   stake_effectai_totals total_effectai( _self, sym.code().raw() ); 
   
  const auto& effectai = total_effectai.get( quantity.symbol.code().raw(), "no total effectai stake balance object found" );
   
   total_effectai.modify( effectai, rampayer, [&]( auto& a ) {
      a.total_staked_effectai -= quantity;
   });
   
   
   inline_transfer(_self, owner, quantity);
   
}





void consortiumte::inline_refund_emanate(name owner, name rampayer, uint64_t index)
{
   refunds_table refunds_tbl( _self, owner.value );
   auto req = refunds_tbl.find( index );
   check( req != refunds_tbl.end(), "refund request not found" );
   check( req->available_time <= current_time_point(), "refund is not available yet" );

   asset quantity = req->amount;

   stake_emanates lock_from_acnts( _self, owner.value );

   const auto& lock_from = lock_from_acnts.get( quantity.symbol.code().raw(), "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   lock_from_acnts.modify( lock_from, rampayer, [&]( auto& a ) {
      a.staked_balance -= quantity;
   });

   refunds_tbl.erase( req );
   
   auto sym = quantity.symbol;
   
   stake_emanate_totals total_emanate( _self, sym.code().raw() ); 
   
  const auto& emanate = total_emanate.get( quantity.symbol.code().raw(), "no total emanate stake balance object found" );
   
   total_emanate.modify( emanate, rampayer, [&]( auto& a ) {
      a.total_staked_emanate -= quantity;
   });
   
   inline_transfer(_self, owner, quantity);
   
}




void consortiumte::inline_refund_everipedia(name owner, name rampayer, uint64_t index)
{
   refunds_table refunds_tbl( _self, owner.value );
   auto req = refunds_tbl.find( index );
   check( req != refunds_tbl.end(), "refund request not found" );
   check( req->available_time <= current_time_point(), "refund is not available yet" );

   asset quantity = req->amount;

   stake_everipedias lock_from_acnts( _self, owner.value );

   const auto& lock_from = lock_from_acnts.get( quantity.symbol.code().raw(), "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   lock_from_acnts.modify( lock_from, rampayer, [&]( auto& a ) {
      a.staked_balance -= quantity;
   });

   refunds_tbl.erase( req );
   
   auto sym = quantity.symbol;
   
   stake_everipedia_totals total_everipedia( _self, sym.code().raw() ); 
   
  const auto& everipedia = total_everipedia.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_everipedia.modify( everipedia, rampayer, [&]( auto& a ) {
      a.total_staked_everipedia -= quantity;
   });
   
   
   inline_transfer(_self, owner, quantity);
   
}




void consortiumte::inline_refund_biggame(name owner, name rampayer, uint64_t index)
{
   refunds_table refunds_tbl( _self, owner.value );
   auto req = refunds_tbl.find( index );
   check( req != refunds_tbl.end(), "refund request not found" );
   check( req->available_time <= current_time_point(), "refund is not available yet" );

   asset quantity = req->amount;

   stake_biggames lock_from_acnts( _self, owner.value );

   const auto& lock_from = lock_from_acnts.get( quantity.symbol.code().raw(), "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   lock_from_acnts.modify( lock_from, rampayer, [&]( auto& a ) {
      a.staked_balance -= quantity;
   });

   refunds_tbl.erase( req );
   
   auto sym = quantity.symbol;
   
   stake_biggame_totals total_biggame( _self, sym.code().raw() ); 
   
  const auto& biggame = total_biggame.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_biggame.modify( biggame, rampayer, [&]( auto& a ) {
      a.total_staked_biggame -= quantity;
   });
   
   
   inline_transfer(_self, owner, quantity);
   
}

void consortiumte::inline_refund_defind(name owner, name rampayer, uint64_t index)
{
   refunds_table refunds_tbl( _self, owner.value );
   auto req = refunds_tbl.find( index );
   check( req != refunds_tbl.end(), "refund request not found" );
   check( req->available_time <= current_time_point(), "refund is not available yet" );

   asset quantity = req->amount;

   stake_definds lock_from_acnts( _self, owner.value );

   const auto& lock_from = lock_from_acnts.get( quantity.symbol.code().raw(), "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   lock_from_acnts.modify( lock_from, rampayer, [&]( auto& a ) {
      a.staked_balance -= quantity;
   });

   refunds_tbl.erase( req );
   
   auto sym = quantity.symbol;
   
   stake_defind_totals total_defind( _self, sym.code().raw() ); 
   
  const auto& defind = total_defind.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_defind.modify( defind, rampayer, [&]( auto& a ) {
      a.total_staked_defind -= quantity;
   });
   
   
   inline_transfer(_self, owner, quantity);
   
}

void consortiumte::inline_refund_hirevibes(name owner, name rampayer, uint64_t index)
{
   refunds_table refunds_tbl( _self, owner.value );
   auto req = refunds_tbl.find( index );
   check( req != refunds_tbl.end(), "refund request not found" );
   check( req->available_time <= current_time_point(), "refund is not available yet" );

   asset quantity = req->amount;

   stake_hirevibes lock_from_acnts( _self, owner.value );

   const auto& lock_from = lock_from_acnts.get( quantity.symbol.code().raw(), "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   lock_from_acnts.modify( lock_from, rampayer, [&]( auto& a ) {
      a.staked_balance -= quantity;
   });

   refunds_tbl.erase( req );
   
   auto sym = quantity.symbol;
   
   stake_hirevibes_totals total_hirevibes( _self, sym.code().raw() ); 
   
  const auto& hirevibes = total_hirevibes.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_hirevibes.modify( hirevibes, rampayer, [&]( auto& a ) {
      a.total_staked_hirevibes -= quantity;
   });
   
   
   inline_transfer(_self, owner, quantity);
   
}

void consortiumte::inline_refund_tpt(name owner, name rampayer, uint64_t index)
{
   refunds_table refunds_tbl( _self, owner.value );
   auto req = refunds_tbl.find( index );
   check( req != refunds_tbl.end(), "refund request not found" );
   check( req->available_time <= current_time_point(), "refund is not available yet" );

   asset quantity = req->amount;

   stake_tpts lock_from_acnts( _self, owner.value );

   const auto& lock_from = lock_from_acnts.get( quantity.symbol.code().raw(), "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   lock_from_acnts.modify( lock_from, rampayer, [&]( auto& a ) {
      a.staked_balance -= quantity;
   });

   refunds_tbl.erase( req );
   
   auto sym = quantity.symbol;
   
   stake_tpt_totals total_tpt( _self, sym.code().raw() ); 
   
  const auto& tpt = total_tpt.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_tpt.modify( tpt, rampayer, [&]( auto& a ) {
      a.total_staked_tpt -= quantity;
   });
   
   
   inline_transfer(_self, owner, quantity);
   
}

void consortiumte::inline_refund_eosdt(name owner, name rampayer, uint64_t index)
{
   refunds_table refunds_tbl( _self, owner.value );
   auto req = refunds_tbl.find( index );
   check( req != refunds_tbl.end(), "refund request not found" );
   check( req->available_time <= current_time_point(), "refund is not available yet" );

   asset quantity = req->amount;

   stake_eosdts lock_from_acnts( _self, owner.value );

   const auto& lock_from = lock_from_acnts.get( quantity.symbol.code().raw(), "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   lock_from_acnts.modify( lock_from, rampayer, [&]( auto& a ) {
      a.staked_balance -= quantity;
   });

   refunds_tbl.erase( req );
   
   auto sym = quantity.symbol;
   
   stake_eosdt_totals total_eosdt( _self, sym.code().raw() ); 
   
  const auto& eosdt = total_eosdt.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_eosdt.modify( eosdt, rampayer, [&]( auto& a ) {
      a.total_staked_eosdt -= quantity;
   });
   
   
   inline_transfer(_self, owner, quantity);
   
}

void consortiumte::inline_refund_bancor(name owner, name rampayer, uint64_t index)
{
   refunds_table refunds_tbl( _self, owner.value );
   auto req = refunds_tbl.find( index );
   check( req != refunds_tbl.end(), "refund request not found" );
   check( req->available_time <= current_time_point(), "refund is not available yet" );

   asset quantity = req->amount;

   stake_bancors lock_from_acnts( _self, owner.value );

   const auto& lock_from = lock_from_acnts.get( quantity.symbol.code().raw(), "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   lock_from_acnts.modify( lock_from, rampayer, [&]( auto& a ) {
      a.staked_balance -= quantity;
   });

   refunds_tbl.erase( req );
   
   auto sym = quantity.symbol;
   
   stake_bancor_totals total_bancor( _self, sym.code().raw() ); 
   
  const auto& bancor = total_bancor.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_bancor.modify( bancor, rampayer, [&]( auto& a ) {
      a.total_staked_bancor -= quantity;
   });
   
   
   inline_transfer(_self, owner, quantity);
   
}

void consortiumte::inline_refund_vigor(name owner, name rampayer, uint64_t index)
{
   refunds_table refunds_tbl( _self, owner.value );
   auto req = refunds_tbl.find( index );
   check( req != refunds_tbl.end(), "refund request not found" );
   check( req->available_time <= current_time_point(), "refund is not available yet" );

   asset quantity = req->amount;

   stake_vigors lock_from_acnts( _self, owner.value );

   const auto& lock_from = lock_from_acnts.get( quantity.symbol.code().raw(), "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   lock_from_acnts.modify( lock_from, rampayer, [&]( auto& a ) {
      a.staked_balance -= quantity;
   });

   refunds_tbl.erase( req );
   
   auto sym = quantity.symbol;
   
   stake_vigor_totals total_vigor( _self, sym.code().raw() ); 
   
  const auto& vigor = total_vigor.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_vigor.modify( vigor, rampayer, [&]( auto& a ) {
      a.total_staked_vigor -= quantity;
   });
   
   
   inline_transfer(_self, owner, quantity);
   
}

void consortiumte::inline_refund_eosdac(name owner, name rampayer, uint64_t index)
{
   refunds_table refunds_tbl( _self, owner.value );
   auto req = refunds_tbl.find( index );
   check( req != refunds_tbl.end(), "refund request not found" );
   check( req->available_time <= current_time_point(), "refund is not available yet" );

   asset quantity = req->amount;

   stake_eosdacs lock_from_acnts( _self, owner.value );

   const auto& lock_from = lock_from_acnts.get( quantity.symbol.code().raw(), "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   lock_from_acnts.modify( lock_from, rampayer, [&]( auto& a ) {
      a.staked_balance -= quantity;
   });

   refunds_tbl.erase( req );
   
   auto sym = quantity.symbol;
   
   stake_eosdac_totals total_eosdac( _self, sym.code().raw() ); 
   
  const auto& eosdac = total_eosdac.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_eosdac.modify( eosdac, rampayer, [&]( auto& a ) {
      a.total_staked_eosdac -= quantity;
   });
   
   
   inline_transfer(_self, owner, quantity);
   
}

void consortiumte::inline_refund_edna(name owner, name rampayer, uint64_t index)
{
   refunds_table refunds_tbl( _self, owner.value );
   auto req = refunds_tbl.find( index );
   check( req != refunds_tbl.end(), "refund request not found" );
   check( req->available_time <= current_time_point(), "refund is not available yet" );

   asset quantity = req->amount;

   stake_ednas lock_from_acnts( _self, owner.value );

   const auto& lock_from = lock_from_acnts.get( quantity.symbol.code().raw(), "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   lock_from_acnts.modify( lock_from, rampayer, [&]( auto& a ) {
      a.staked_balance -= quantity;
   });

   refunds_tbl.erase( req );
   
   auto sym = quantity.symbol;
   
   stake_edna_totals total_edna( _self, sym.code().raw() ); 
   
  const auto& edna = total_edna.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_edna.modify( edna, rampayer, [&]( auto& a ) {
      a.total_staked_edna -= quantity;
   });
   
   
   inline_transfer(_self, owner, quantity);
   
}

void consortiumte::inline_refund_sense(name owner, name rampayer, uint64_t index)
{
   refunds_table refunds_tbl( _self, owner.value );
   auto req = refunds_tbl.find( index );
   check( req != refunds_tbl.end(), "refund request not found" );
   check( req->available_time <= current_time_point(), "refund is not available yet" );

   asset quantity = req->amount;

   stake_senses lock_from_acnts( _self, owner.value );

   const auto& lock_from = lock_from_acnts.get( quantity.symbol.code().raw(), "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   lock_from_acnts.modify( lock_from, rampayer, [&]( auto& a ) {
      a.staked_balance -= quantity;
   });

   refunds_tbl.erase( req );
   
   auto sym = quantity.symbol;
   
   stake_sense_totals total_sense( _self, sym.code().raw() ); 
   
  const auto& sense = total_sense.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_sense.modify( sense, rampayer, [&]( auto& a ) {
      a.total_staked_sense -= quantity;
   });
   
   
   inline_transfer(_self, owner, quantity);
   
}

void consortiumte::inline_refund_peos(name owner, name rampayer, uint64_t index)
{
   refunds_table refunds_tbl( _self, owner.value );
   auto req = refunds_tbl.find( index );
   check( req != refunds_tbl.end(), "refund request not found" );
   check( req->available_time <= current_time_point(), "refund is not available yet" );

   asset quantity = req->amount;

   stake_peos lock_from_acnts( _self, owner.value );

   const auto& lock_from = lock_from_acnts.get( quantity.symbol.code().raw(), "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   lock_from_acnts.modify( lock_from, rampayer, [&]( auto& a ) {
      a.staked_balance -= quantity;
   });

   refunds_tbl.erase( req );
   
   auto sym = quantity.symbol;
   
   stake_peos_totals total_peos( _self, sym.code().raw() ); 
   
  const auto& peos = total_peos.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_peos.modify( peos, rampayer, [&]( auto& a ) {
      a.total_staked_peos -= quantity;
   });
   
   
   inline_transfer(_self, owner, quantity);
   
}

void consortiumte::inline_refund_newdex(name owner, name rampayer, uint64_t index)
{
   refunds_table refunds_tbl( _self, owner.value );
   auto req = refunds_tbl.find( index );
   check( req != refunds_tbl.end(), "refund request not found" );
   check( req->available_time <= current_time_point(), "refund is not available yet" );

   asset quantity = req->amount;

   stake_newdexs lock_from_acnts( _self, owner.value );

   const auto& lock_from = lock_from_acnts.get( quantity.symbol.code().raw(), "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   lock_from_acnts.modify( lock_from, rampayer, [&]( auto& a ) {
      a.staked_balance -= quantity;
   });

   refunds_tbl.erase( req );
   
   auto sym = quantity.symbol;
   
   stake_newdex_totals total_newdex( _self, sym.code().raw() ); 
   
  const auto& newdex = total_newdex.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_newdex.modify( newdex, rampayer, [&]( auto& a ) {
      a.total_staked_newdex -= quantity;
   });
   
   
   inline_transfer(_self, owner, quantity);
   
}

void consortiumte::inline_refund_chintai(name owner, name rampayer, uint64_t index)
{
   refunds_table refunds_tbl( _self, owner.value );
   auto req = refunds_tbl.find( index );
   check( req != refunds_tbl.end(), "refund request not found" );
   check( req->available_time <= current_time_point(), "refund is not available yet" );

   asset quantity = req->amount;

   stake_chintais lock_from_acnts( _self, owner.value );

   const auto& lock_from = lock_from_acnts.get( quantity.symbol.code().raw(), "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   lock_from_acnts.modify( lock_from, rampayer, [&]( auto& a ) {
      a.staked_balance -= quantity;
   });

   refunds_tbl.erase( req );
   
   auto sym = quantity.symbol;
   
   stake_chintai_totals total_chintai( _self, sym.code().raw() ); 
   
  const auto& chintai = total_chintai.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_chintai.modify( chintai, rampayer, [&]( auto& a ) {
      a.total_staked_chintai -= quantity;
   });
   
   
   inline_transfer(_self, owner, quantity);
   
}










void consortiumte::inline_stake_prosp(name owner, asset quantity, name rampayer)
{
   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must stake positive quantity" );



   stake_prospectors lock_from_acnts_prosp( _self, owner.value );
   const auto& lock_from_prosp = lock_from_acnts_prosp.get( quantity.symbol.code().raw(), "no prosp lock balance object found" );


   lock_from_acnts_prosp.modify( lock_from_prosp, rampayer, [&]( auto& a ) {
      a.staked_balance += quantity;
   });
   
 stake_prospectors_totals total_prospectors( _self, quantity.symbol.code().raw() ); 
 const auto& prospectors = total_prospectors.get( quantity.symbol.code().raw(), "no total prospectors stake balance object found" );
   
   total_prospectors.modify( prospectors, rampayer, [&]( auto& a ) {
      a.total_staked_prospectors += quantity;
   });
}


void consortiumte::inline_stake_conso(name owner, asset quantity, name rampayer)
{
   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must stake positive quantity" );

   //stakecheck(owner, quantity);

   stake_consos lock_from_acnts_conso( _self, owner.value );
   const auto& lock_from_conso = lock_from_acnts_conso.get( quantity.symbol.code().raw(), "no lock balance object found" );

   lock_from_acnts_conso.modify( lock_from_conso, rampayer, [&]( auto& a ) {
      a.staked_balance += quantity;
   });
   
stake_consortium_totals total_consortium( _self, quantity.symbol.code().raw() ); 
 const auto& consortium = total_consortium.get( quantity.symbol.code().raw(), "no total prospectors stake balance object found" );
   
   total_consortium.modify( consortium, rampayer, [&]( auto& a ) {
      a.total_staked_consortium += quantity;
   });
}



void consortiumte::inline_stake_dice(name owner, asset quantity, name rampayer)
{
   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must stake positive quantity" );
   

stake_dices lock_from_acnts_dice( _self, owner.value );
   const auto& lock_from_dice = lock_from_acnts_dice.get( quantity.symbol.code().raw(), "no dice lock balance object found" );

   
   lock_from_acnts_dice.modify( lock_from_dice, rampayer, [&]( auto& a ) {
      a.staked_balance += quantity;
   });
   
    stake_dice_totals total_dice( _self, quantity.symbol.code().raw() ); 
 const auto& dice = total_dice.get( quantity.symbol.code().raw(), "no total dice stake balance object found" );
   
   total_dice.modify( dice, rampayer, [&]( auto& a ) {
      a.total_staked_dice += quantity;
   });
}



void consortiumte::inline_stake_liqapps(name owner, asset quantity, name rampayer)
{
   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must stake positive quantity" );


   stake_liqapps lock_from_acnts_liqapps( _self, owner.value );
   const auto& lock_from_liqapps = lock_from_acnts_liqapps.get( quantity.symbol.code().raw(), "no liqapps lock balance object found" );

   lock_from_acnts_liqapps.modify( lock_from_liqapps, rampayer, [&]( auto& a ) {
      a.staked_balance += quantity;
   });
   
   stake_liqapps_totals total_liqapps( _self, quantity.symbol.code().raw() ); 
 const auto& liqapps = total_liqapps.get( quantity.symbol.code().raw(), "no total liqapps stake balance object found" );
   
   total_liqapps.modify( liqapps, rampayer, [&]( auto& a ) {
      a.total_staked_liqapps += quantity;
   });
}



void consortiumte::inline_stake_lumeos(name owner, asset quantity, name rampayer)
{
   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must stake positive quantity" );



stake_lumeos lock_from_acnts_lumeos( _self, owner.value );
   const auto& lock_from_lumeos = lock_from_acnts_lumeos.get( quantity.symbol.code().raw(), "no lumeos lock balance object found" );


   lock_from_acnts_lumeos.modify( lock_from_lumeos, rampayer, [&]( auto& a ) {
      a.staked_balance += quantity;
   });
   
stake_lumeos_totals total_lumeos( _self, quantity.symbol.code().raw() ); 
 const auto& lumeos = total_lumeos.get( quantity.symbol.code().raw(), "no total lumeos stake balance object found" );
   
   total_lumeos.modify( lumeos, rampayer, [&]( auto& a ) {
      a.total_staked_lumeos += quantity;
   });
}




void consortiumte::inline_stake_pixeos(name owner, asset quantity, name rampayer)
{
   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must stake positive quantity" );


stake_pixeos lock_from_acnts_pixeos( _self, owner.value );
   const auto& lock_from_pixeos = lock_from_acnts_pixeos.get( quantity.symbol.code().raw(), "no pixeos lock balance object found" );

   

   lock_from_acnts_pixeos.modify( lock_from_pixeos, rampayer, [&]( auto& a ) {
      a.staked_balance += quantity;
   });
   
stake_pixeos_totals total_pixeos( _self, quantity.symbol.code().raw() ); 
 const auto& pixeos = total_pixeos.get( quantity.symbol.code().raw(), "no total pixeos stake balance object found" );
   
   total_pixeos.modify( pixeos, rampayer, [&]( auto& a ) {
      a.total_staked_pixeos += quantity;
   });
}




void consortiumte::inline_stake_effectai(name owner, asset quantity, name rampayer)
{
   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must stake positive quantity" );
   


 stake_effectais lock_from_acnts_effectai( _self, owner.value );
   const auto& lock_from_effectai = lock_from_acnts_effectai.get( quantity.symbol.code().raw(), "no effectai lock balance object found" );

   lock_from_acnts_effectai.modify( lock_from_effectai, rampayer, [&]( auto& a ) {
      a.staked_balance += quantity;
   });
   
 stake_effectai_totals total_effectai( _self, quantity.symbol.code().raw() ); 
 const auto& effectai = total_effectai.get( quantity.symbol.code().raw(), "no total effectai stake balance object found" );
   
   total_effectai.modify( effectai, rampayer, [&]( auto& a ) {
      a.total_staked_effectai += quantity;
   });
}



void consortiumte::inline_stake_emanate(name owner, asset quantity, name rampayer)
{
   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must stake positive quantity" );




   stake_emanates lock_from_acnts_emanate( _self, owner.value );
   const auto& lock_from_emanate = lock_from_acnts_emanate.get( quantity.symbol.code().raw(), "no emanate lock balance object found" );


   lock_from_acnts_emanate.modify( lock_from_emanate, rampayer, [&]( auto& a ) {
      a.staked_balance += quantity;
   });
   
    
  stake_emanate_totals total_emanate( _self, quantity.symbol.code().raw() ); 
 const auto& emanate = total_emanate.get( quantity.symbol.code().raw(), "no total emanate stake balance object found" );
   
   total_emanate.modify( emanate, rampayer, [&]( auto& a ) {
      a.total_staked_emanate += quantity;
   });
}

void consortiumte::inline_stake_everipedia(name owner, asset quantity, name rampayer)
{
   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must stake positive quantity" );


   stake_everipedias lock_from_acnts_everipedia( _self, owner.value );
   const auto& lock_from_everipedia = lock_from_acnts_everipedia.get( quantity.symbol.code().raw(), "no everipedia lock balance object found" );

   

   lock_from_acnts_everipedia.modify( lock_from_everipedia, rampayer, [&]( auto& a ) {
      a.staked_balance += quantity;
   });
   
  stake_everipedia_totals total_everipedia( _self, quantity.symbol.code().raw() ); 
 const auto& everipedia = total_everipedia.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_everipedia.modify( everipedia, rampayer, [&]( auto& a ) {
      a.total_staked_everipedia += quantity;
   });
}



void consortiumte::inline_stake_biggame(name owner, asset quantity, name rampayer)
{
   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must stake positive quantity" );


   stake_biggames lock_from_acnts_biggame( _self, owner.value );
   const auto& lock_from_biggame = lock_from_acnts_biggame.get( quantity.symbol.code().raw(), "no everipedia lock balance object found" );

   

   lock_from_acnts_biggame.modify( lock_from_biggame, rampayer, [&]( auto& a ) {
      a.staked_balance += quantity;
   });
   
  stake_biggame_totals total_biggame( _self, quantity.symbol.code().raw() ); 
 const auto& biggame = total_biggame.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_biggame.modify( biggame, rampayer, [&]( auto& a ) {
      a.total_staked_biggame += quantity;
   });
}


void consortiumte::inline_stake_defind(name owner, asset quantity, name rampayer)
{
   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must stake positive quantity" );


   stake_definds lock_from_acnts_defind( _self, owner.value );
   const auto& lock_from_defind = lock_from_acnts_defind.get( quantity.symbol.code().raw(), "no everipedia lock balance object found" );

   

   lock_from_acnts_defind.modify( lock_from_defind, rampayer, [&]( auto& a ) {
      a.staked_balance += quantity;
   });
   
  stake_defind_totals total_defind( _self, quantity.symbol.code().raw() ); 
 const auto& defind = total_defind.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_defind.modify( defind, rampayer, [&]( auto& a ) {
      a.total_staked_defind += quantity;
   });
}

void consortiumte::inline_stake_hirevibes(name owner, asset quantity, name rampayer)
{
   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must stake positive quantity" );


   stake_hirevibes lock_from_acnts_hirevibes( _self, owner.value );
   const auto& lock_from_hirevibes = lock_from_acnts_hirevibes.get( quantity.symbol.code().raw(), "no everipedia lock balance object found" );

   

   lock_from_acnts_hirevibes.modify( lock_from_hirevibes, rampayer, [&]( auto& a ) {
      a.staked_balance += quantity;
   });
   
  stake_hirevibes_totals total_hirevibes( _self, quantity.symbol.code().raw() ); 
 const auto& hirevibes = total_hirevibes.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_hirevibes.modify( hirevibes, rampayer, [&]( auto& a ) {
      a.total_staked_hirevibes += quantity;
   });
}

void consortiumte::inline_stake_tpt(name owner, asset quantity, name rampayer)
{
   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must stake positive quantity" );


   stake_tpts lock_from_acnts_tpt( _self, owner.value );
   const auto& lock_from_tpt = lock_from_acnts_tpt.get( quantity.symbol.code().raw(), "no everipedia lock balance object found" );

   

   lock_from_acnts_tpt.modify( lock_from_tpt, rampayer, [&]( auto& a ) {
      a.staked_balance += quantity;
   });
   
  stake_tpt_totals total_tpt( _self, quantity.symbol.code().raw() ); 
 const auto& tpt = total_tpt.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_tpt.modify( tpt, rampayer, [&]( auto& a ) {
      a.total_staked_tpt += quantity;
   });
}

void consortiumte::inline_stake_eosdt(name owner, asset quantity, name rampayer)
{
   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must stake positive quantity" );


   stake_eosdts lock_from_acnts_eosdt( _self, owner.value );
   const auto& lock_from_eosdt = lock_from_acnts_eosdt.get( quantity.symbol.code().raw(), "no everipedia lock balance object found" );

   

   lock_from_acnts_eosdt.modify( lock_from_eosdt, rampayer, [&]( auto& a ) {
      a.staked_balance += quantity;
   });
   
  stake_eosdt_totals total_eosdt( _self, quantity.symbol.code().raw() ); 
 const auto& eosdt = total_eosdt.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_eosdt.modify( eosdt, rampayer, [&]( auto& a ) {
      a.total_staked_eosdt += quantity;
   });
}

void consortiumte::inline_stake_bancor(name owner, asset quantity, name rampayer)
{
   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must stake positive quantity" );


   stake_bancors lock_from_acnts_bancor( _self, owner.value );
   const auto& lock_from_bancor = lock_from_acnts_bancor.get( quantity.symbol.code().raw(), "no everipedia lock balance object found" );

   

   lock_from_acnts_bancor.modify( lock_from_bancor, rampayer, [&]( auto& a ) {
      a.staked_balance += quantity;
   });
   
  stake_bancor_totals total_bancor( _self, quantity.symbol.code().raw() ); 
 const auto& bancor = total_bancor.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_bancor.modify( bancor, rampayer, [&]( auto& a ) {
      a.total_staked_bancor += quantity;
   });
}

void consortiumte::inline_stake_vigor(name owner, asset quantity, name rampayer)
{
   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must stake positive quantity" );


   stake_vigors lock_from_acnts_vigor( _self, owner.value );
   const auto& lock_from_vigor = lock_from_acnts_vigor.get( quantity.symbol.code().raw(), "no everipedia lock balance object found" );

   

   lock_from_acnts_vigor.modify( lock_from_vigor, rampayer, [&]( auto& a ) {
      a.staked_balance += quantity;
   });
   
  stake_vigor_totals total_vigor( _self, quantity.symbol.code().raw() ); 
 const auto& vigor = total_vigor.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_vigor.modify( vigor, rampayer, [&]( auto& a ) {
      a.total_staked_vigor += quantity;
   });
}

void consortiumte::inline_stake_eosdac(name owner, asset quantity, name rampayer)
{
   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must stake positive quantity" );


   stake_eosdacs lock_from_acnts_eosdac( _self, owner.value );
   const auto& lock_from_eosdac= lock_from_acnts_eosdac.get( quantity.symbol.code().raw(), "no everipedia lock balance object found" );

   

   lock_from_acnts_eosdac.modify( lock_from_eosdac, rampayer, [&]( auto& a ) {
      a.staked_balance += quantity;
   });
   
  stake_eosdac_totals total_eosdac( _self, quantity.symbol.code().raw() ); 
 const auto& eosdac = total_eosdac.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_eosdac.modify( eosdac, rampayer, [&]( auto& a ) {
      a.total_staked_eosdac+= quantity;
   });
}

void consortiumte::inline_stake_edna(name owner, asset quantity, name rampayer)
{
   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must stake positive quantity" );


   stake_ednas lock_from_acnts_edna( _self, owner.value );
   const auto& lock_from_edna = lock_from_acnts_edna.get( quantity.symbol.code().raw(), "no everipedia lock balance object found" );

   

   lock_from_acnts_edna.modify( lock_from_edna, rampayer, [&]( auto& a ) {
      a.staked_balance += quantity;
   });
   
  stake_edna_totals total_edna( _self, quantity.symbol.code().raw() ); 
 const auto& edna = total_edna.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_edna.modify( edna, rampayer, [&]( auto& a ) {
      a.total_staked_edna += quantity;
   });
}

void consortiumte::inline_stake_sense(name owner, asset quantity, name rampayer)
{
   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must stake positive quantity" );


   stake_senses lock_from_acnts_sense( _self, owner.value );
   const auto& lock_from_sense = lock_from_acnts_sense.get( quantity.symbol.code().raw(), "no everipedia lock balance object found" );

   

   lock_from_acnts_sense.modify( lock_from_sense, rampayer, [&]( auto& a ) {
      a.staked_balance += quantity;
   });
   
  stake_sense_totals total_sense( _self, quantity.symbol.code().raw() ); 
 const auto& sense = total_sense.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_sense.modify( sense, rampayer, [&]( auto& a ) {
      a.total_staked_sense += quantity;
   });
}

void consortiumte::inline_stake_peos(name owner, asset quantity, name rampayer)
{
   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must stake positive quantity" );


   stake_peos lock_from_acnts_peos( _self, owner.value );
   const auto& lock_from_peos = lock_from_acnts_peos.get( quantity.symbol.code().raw(), "no everipedia lock balance object found" );

   

   lock_from_acnts_peos.modify( lock_from_peos, rampayer, [&]( auto& a ) {
      a.staked_balance += quantity;
   });
   
  stake_peos_totals total_peos ( _self, quantity.symbol.code().raw() ); 
 const auto& peos = total_peos.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_peos.modify(peos, rampayer, [&]( auto& a ) {
      a.total_staked_peos += quantity;
   });
}

void consortiumte::inline_stake_newdex(name owner, asset quantity, name rampayer)
{
   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must stake positive quantity" );


   stake_newdexs lock_from_acnts_newdex( _self, owner.value );
   const auto& lock_from_newdex= lock_from_acnts_newdex.get( quantity.symbol.code().raw(), "no everipedia lock balance object found" );

   

   lock_from_acnts_newdex.modify( lock_from_newdex, rampayer, [&]( auto& a ) {
      a.staked_balance += quantity;
   });
   
  stake_newdex_totals total_newdex( _self, quantity.symbol.code().raw() ); 
 const auto& newdex = total_newdex.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_newdex.modify( newdex, rampayer, [&]( auto& a ) {
      a.total_staked_newdex += quantity;
   });
}

void consortiumte::inline_stake_chintai(name owner, asset quantity, name rampayer)
{
   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must stake positive quantity" );


   stake_chintais lock_from_acnts_chintai( _self, owner.value );
   const auto& lock_from_chintai= lock_from_acnts_chintai.get( quantity.symbol.code().raw(), "no everipedia lock balance object found" );

   

   lock_from_acnts_chintai.modify( lock_from_chintai, rampayer, [&]( auto& a ) {
      a.staked_balance += quantity;
   });
   
  stake_chintai_totals total_chintai( _self, quantity.symbol.code().raw() ); 
 const auto& chintai = total_chintai.get( quantity.symbol.code().raw(), "no total everipedia stake balance object found" );
   
   total_chintai.modify( chintai, rampayer, [&]( auto& a ) {
      a.total_staked_chintai += quantity;
   });
}









void consortiumte::stakeprosp(name owner, asset quantity)
{
   require_auth( owner );
   
   inline_transfer(owner, _self, quantity);
   
   inline_stake_prosp(owner, quantity, _self); // use owner as payer 
}

void consortiumte::stakeconso(name owner, asset quantity)
{
   require_auth( owner );
   
   inline_transfer(owner, _self, quantity);
   inline_stake_conso(owner, quantity, _self); // use owner as payer 
}


void consortiumte::stakedice(name owner, asset quantity)
{
   require_auth( owner );
   
   inline_transfer(owner, _self, quantity);
   
   inline_stake_dice(owner, quantity, _self); // use owner as payer 
}

void consortiumte::stakelumeos(name owner, asset quantity)
{
   require_auth( owner );
   
   inline_transfer(owner, _self, quantity);
   
   inline_stake_lumeos(owner, quantity, _self); // use owner as payer 
}

void consortiumte::stakeliqapps(name owner, asset quantity)
{
   require_auth( owner );
   
   inline_transfer(owner, _self, quantity);
   
   inline_stake_liqapps(owner, quantity, _self); // use owner as payer 
}

void consortiumte::stakepixeos(name owner, asset quantity)
{
   require_auth( owner );
   
   inline_transfer(owner, _self, quantity);
   
   inline_stake_pixeos(owner, quantity, _self); // use owner as payer 
}

void consortiumte::stakeeffect(name owner, asset quantity)
{
   require_auth( owner );
   
   inline_transfer(owner, _self, quantity);
   
   inline_stake_effectai(owner, quantity, _self); // use owner as payer 
}

void consortiumte::stakeemanate(name owner, asset quantity)
{
   require_auth( owner );
   
   inline_transfer(owner, _self, quantity);
   
   inline_stake_emanate(owner, quantity, _self); // use owner as payer 
}

void consortiumte::stakeeveripe(name owner, asset quantity)
{
   require_auth( owner );
   
   inline_transfer(owner, _self, quantity);
   
   inline_stake_everipedia(owner, quantity, _self); // use owner as payer 
}


void consortiumte::stakebiggame(name owner, asset quantity)
{
   require_auth( owner );
   
   inline_transfer(owner, _self, quantity);
   
   inline_stake_biggame(owner, quantity, _self); // use owner as payer 
}


void consortiumte::stakedefind(name owner, asset quantity)
{
   require_auth( owner );
   
   inline_transfer(owner, _self, quantity);
   
   inline_stake_defind(owner, quantity, _self); // use owner as payer 
}


void consortiumte::stakehirevib(name owner, asset quantity)
{
   require_auth( owner );
   
   inline_transfer(owner, _self, quantity);
   
   inline_stake_hirevibes(owner, quantity, _self); // use owner as payer 
}


void consortiumte::staketpt(name owner, asset quantity)
{
   require_auth( owner );
   
   inline_transfer(owner, _self, quantity);
   
   inline_stake_tpt(owner, quantity, _self); // use owner as payer 
}


void consortiumte::stakeeosdt(name owner, asset quantity)
{
   require_auth( owner );
   
   inline_transfer(owner, _self, quantity);
   
   inline_stake_eosdt(owner, quantity, _self); // use owner as payer 
}


void consortiumte::stakebancor(name owner, asset quantity)
{
   require_auth( owner );
   
   inline_transfer(owner, _self, quantity);
   
   inline_stake_bancor(owner, quantity, _self); // use owner as payer 
}


void consortiumte::stakevigor(name owner, asset quantity)
{
   require_auth( owner );
   
   inline_transfer(owner, _self, quantity);
   
   inline_stake_vigor(owner, quantity, _self); // use owner as payer 
}


void consortiumte::stakeeosdac(name owner, asset quantity)
{
   require_auth( owner );
   
   inline_transfer(owner, _self, quantity);
   
   inline_stake_eosdac(owner, quantity, _self); // use owner as payer 
}


void consortiumte::stakeedna(name owner, asset quantity)
{
   require_auth( owner );
   
   inline_transfer(owner, _self, quantity);
   
   inline_stake_edna(owner, quantity, _self); // use owner as payer 
}


void consortiumte::stakesense(name owner, asset quantity)
{
   require_auth( owner );
   
   inline_transfer(owner, _self, quantity);
   
   inline_stake_sense(owner, quantity, _self); // use owner as payer 
}


void consortiumte::stakepeos(name owner, asset quantity)
{
   require_auth( owner );
   
   inline_transfer(owner, _self, quantity);
   
   inline_stake_peos(owner, quantity, _self); // use owner as payer 
}


void consortiumte::stakenewdex(name owner, asset quantity)
{
   require_auth( owner );
   
   inline_transfer(owner, _self, quantity);
   
   inline_stake_newdex(owner, quantity, _self); // use owner as payer 
}

void consortiumte::stakechintai(name owner, asset quantity)
{
   require_auth( owner );
   
   inline_transfer(owner, _self, quantity);
   
   inline_stake_chintai(owner, quantity, _self); // use owner as payer 
}







void consortiumte::unstakeprosp(name owner, asset quantity)
{
   require_auth( owner );

   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must unstake positive quantity" );

   stake_prospectors lock_from_acnts( _self, owner.value );

   const auto& sym_code_raw = quantity.symbol.code().raw();

   const auto& lock_from = lock_from_acnts.get( sym_code_raw, "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );
   

   stats statstable( _self, sym_code_raw);
   const auto& st = statstable.get( sym_code_raw , "symbol does not exist");

   refunds_table refunds_tbl( _self, owner.value );

   uint64_t auto_index = refunds_tbl.available_primary_key();

   asset unstaking_amount = collect_refund(owner, quantity.symbol, auto_index);

   check( lock_from.staked_balance >= (unstaking_amount + quantity), "overdrawn locked balance" );

   refunds_tbl.emplace( owner, [&]( refund_request& r ) {
      r.index = auto_index;
      r.owner = owner;
      r.available_time = current_time_point() + seconds(st.refund_delay);
      r.amount = quantity;
   });

   // defer to call refund
   eosio::transaction out;
   //self needs eosio.code permission
   out.actions.emplace_back( permission_level{_self, "active"_n}, _self, "autorefprosp"_n, std::make_tuple(owner, auto_index) );
   out.delay_sec = st.refund_delay;
   uint128_t sender_id = SENDER_ID(owner.value, auto_index);
   cancel_deferred( sender_id );
   out.send( sender_id, owner, false );
}


void consortiumte::unstakeconso(name owner, asset quantity)
{
   require_auth( owner );

   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must unstake positive quantity" );

   stake_consos lock_from_acnts( _self, owner.value );

   const auto& sym_code_raw = quantity.symbol.code().raw();

   //struct asset checknotzero = {int64_t (0), symbol ("GOVERN", 4)};

   const auto& lock_from = lock_from_acnts.get( sym_code_raw, "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );
    

   stats statstable( _self, sym_code_raw);
   const auto& st = statstable.get( sym_code_raw , "symbol does not exist");

   refunds_table refunds_tbl( _self, owner.value );

   uint64_t auto_index = refunds_tbl.available_primary_key();

   asset unstaking_amount = collect_refund(owner, quantity.symbol, auto_index);

   check( lock_from.staked_balance >= (unstaking_amount + quantity), "overdrawn locked balance" );

   refunds_tbl.emplace( owner, [&]( refund_request& r ) {
      r.index = auto_index;
      r.owner = owner;
      r.available_time = current_time_point() + seconds(st.refund_delay);
      r.amount = quantity;
   });

   // defer to call refund
   eosio::transaction out;
   //self needs eosio.code permission
   out.actions.emplace_back( permission_level{_self, "active"_n}, _self, "autorefund"_n, std::make_tuple(owner, auto_index) );
   out.delay_sec = st.refund_delay;
   uint128_t sender_id = SENDER_ID(owner.value, auto_index);
   cancel_deferred( sender_id );
   out.send( sender_id, owner, false );
}

void consortiumte::unstakedice(name owner, asset quantity)
{
   require_auth( owner );

   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must unstake positive quantity" );

   stake_dices lock_from_acnts( _self, owner.value );
   
   const auto& sym_code_raw = quantity.symbol.code().raw();

   const auto& lock_from = lock_from_acnts.get( sym_code_raw, "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   stats statstable( _self, sym_code_raw);
   const auto& st = statstable.get( sym_code_raw , "symbol does not exist");

   refunds_table refunds_tbl( _self, owner.value );

   uint64_t auto_index = refunds_tbl.available_primary_key();

   asset unstaking_amount = collect_refund(owner, quantity.symbol, auto_index);

   check( lock_from.staked_balance >= (unstaking_amount + quantity), "overdrawn locked balance" );

   refunds_tbl.emplace( owner, [&]( refund_request& r ) {
      r.index = auto_index;
      r.owner = owner;
      r.available_time = current_time_point() + seconds(st.refund_delay);
      r.amount = quantity;
   });

   // defer to call refund
   eosio::transaction out;
   //self needs eosio.code permission
   out.actions.emplace_back( permission_level{_self, "active"_n}, _self, "autorefdice"_n, std::make_tuple(owner, auto_index) );
   out.delay_sec = st.refund_delay;
   uint128_t sender_id = SENDER_ID(owner.value, auto_index);
   cancel_deferred( sender_id );
   out.send( sender_id, owner, false );
   
   
}


void consortiumte::unstakelumeo(name owner, asset quantity)
{
   require_auth( owner );

   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must unstake positive quantity" );

   stake_lumeos lock_from_acnts( _self, owner.value );
   
   const auto& sym_code_raw = quantity.symbol.code().raw();

   const auto& lock_from = lock_from_acnts.get( sym_code_raw, "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   stats statstable( _self, sym_code_raw);
   const auto& st = statstable.get( sym_code_raw , "symbol does not exist");

   refunds_table refunds_tbl( _self, owner.value );

   uint64_t auto_index = refunds_tbl.available_primary_key();

   asset unstaking_amount = collect_refund(owner, quantity.symbol, auto_index);

   check( lock_from.staked_balance >= (unstaking_amount + quantity), "overdrawn locked balance" );

   refunds_tbl.emplace( owner, [&]( refund_request& r ) {
      r.index = auto_index;
      r.owner = owner;
      r.available_time = current_time_point() + seconds(st.refund_delay);
      r.amount = quantity;
   });

   // defer to call refund
   eosio::transaction out;
   //self needs eosio.code permission
   out.actions.emplace_back( permission_level{_self, "active"_n}, _self, "autoreflumeo"_n, std::make_tuple(owner, auto_index) );
   out.delay_sec = st.refund_delay;
   uint128_t sender_id = SENDER_ID(owner.value, auto_index);
   cancel_deferred( sender_id );
   out.send( sender_id, owner, false );
}



void consortiumte::unstakeliqap(name owner, asset quantity)
{
   require_auth( owner );

   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must unstake positive quantity" );

   stake_liqapps lock_from_acnts( _self, owner.value );
   
   const auto& sym_code_raw = quantity.symbol.code().raw();

   const auto& lock_from = lock_from_acnts.get( sym_code_raw, "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   stats statstable( _self, sym_code_raw);
   const auto& st = statstable.get( sym_code_raw , "symbol does not exist");

   refunds_table refunds_tbl( _self, owner.value );

   uint64_t auto_index = refunds_tbl.available_primary_key();

   asset unstaking_amount = collect_refund(owner, quantity.symbol, auto_index);

   check( lock_from.staked_balance >= (unstaking_amount + quantity), "overdrawn locked balance" );

   refunds_tbl.emplace( owner, [&]( refund_request& r ) {
      r.index = auto_index;
      r.owner = owner;
      r.available_time = current_time_point() + seconds(st.refund_delay);
      r.amount = quantity;
   });

   // defer to call refund
   eosio::transaction out;
   //self needs eosio.code permission
   out.actions.emplace_back( permission_level{_self, "active"_n}, _self, "autorefliqap"_n, std::make_tuple(owner, auto_index) );
   out.delay_sec = st.refund_delay;
   uint128_t sender_id = SENDER_ID(owner.value, auto_index);
   cancel_deferred( sender_id );
   out.send( sender_id, owner, false );
}



void consortiumte::unstakepixeo(name owner, asset quantity)
{
   require_auth( owner );

   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must unstake positive quantity" );

   stake_pixeos lock_from_acnts( _self, owner.value );
   
   const auto& sym_code_raw = quantity.symbol.code().raw();

   const auto& lock_from = lock_from_acnts.get( sym_code_raw, "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   stats statstable( _self, sym_code_raw);
   const auto& st = statstable.get( sym_code_raw , "symbol does not exist");

   refunds_table refunds_tbl( _self, owner.value );

   uint64_t auto_index = refunds_tbl.available_primary_key();

   asset unstaking_amount = collect_refund(owner, quantity.symbol, auto_index);

   check( lock_from.staked_balance >= (unstaking_amount + quantity), "overdrawn locked balance" );

   refunds_tbl.emplace( owner, [&]( refund_request& r ) {
      r.index = auto_index;
      r.owner = owner;
      r.available_time = current_time_point() + seconds(st.refund_delay);
      r.amount = quantity;
   });

   // defer to call refund
   eosio::transaction out;
   //self needs eosio.code permission
   out.actions.emplace_back( permission_level{_self, "active"_n}, _self, "autorefpixeo"_n, std::make_tuple(owner, auto_index) );
   out.delay_sec = st.refund_delay;
   uint128_t sender_id = SENDER_ID(owner.value, auto_index);
   cancel_deferred( sender_id );
   out.send( sender_id, owner, false );
}



void consortiumte::unstakeeffec(name owner, asset quantity)
{
   require_auth( owner );

   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must unstake positive quantity" );

   stake_effectais lock_from_acnts( _self, owner.value );
   
   const auto& sym_code_raw = quantity.symbol.code().raw();

   const auto& lock_from = lock_from_acnts.get( sym_code_raw, "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   stats statstable( _self, sym_code_raw);
   const auto& st = statstable.get( sym_code_raw , "symbol does not exist");

   refunds_table refunds_tbl( _self, owner.value );

   uint64_t auto_index = refunds_tbl.available_primary_key();

   asset unstaking_amount = collect_refund(owner, quantity.symbol, auto_index);

   check( lock_from.staked_balance >= (unstaking_amount + quantity), "overdrawn locked balance" );

   refunds_tbl.emplace( owner, [&]( refund_request& r ) {
      r.index = auto_index;
      r.owner = owner;
      r.available_time = current_time_point() + seconds(st.refund_delay);
      r.amount = quantity;
   });

   // defer to call refund
   eosio::transaction out;
   //self needs eosio.code permission
   out.actions.emplace_back( permission_level{_self, "active"_n}, _self, "autorefeffec"_n, std::make_tuple(owner, auto_index) );
   out.delay_sec = st.refund_delay;
   uint128_t sender_id = SENDER_ID(owner.value, auto_index);
   cancel_deferred( sender_id );
   out.send( sender_id, owner, false );
}



void consortiumte::unstakeemana(name owner, asset quantity)
{
   require_auth( owner );

   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must unstake positive quantity" );

   stake_emanates lock_from_acnts( _self, owner.value );
   
   const auto& sym_code_raw = quantity.symbol.code().raw();

   const auto& lock_from = lock_from_acnts.get( sym_code_raw, "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   stats statstable( _self, sym_code_raw);
   const auto& st = statstable.get( sym_code_raw , "symbol does not exist");

   refunds_table refunds_tbl( _self, owner.value );

   uint64_t auto_index = refunds_tbl.available_primary_key();

   asset unstaking_amount = collect_refund(owner, quantity.symbol, auto_index);

   check( lock_from.staked_balance >= (unstaking_amount + quantity), "overdrawn locked balance" );

   refunds_tbl.emplace( owner, [&]( refund_request& r ) {
      r.index = auto_index;
      r.owner = owner;
      r.available_time = current_time_point() + seconds(st.refund_delay);
      r.amount = quantity;
   });

   // defer to call refund
   eosio::transaction out;
   //self needs eosio.code permission
   out.actions.emplace_back( permission_level{_self, "active"_n}, _self, "autorefemana"_n, std::make_tuple(owner, auto_index) );
   out.delay_sec = st.refund_delay;
   uint128_t sender_id = SENDER_ID(owner.value, auto_index);
   cancel_deferred( sender_id );
   out.send( sender_id, owner, false );
}



void consortiumte::unstakeeveri(name owner, asset quantity)
{
   require_auth( owner );

   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must unstake positive quantity" );

   stake_everipedias lock_from_acnts( _self, owner.value );
   
   const auto& sym_code_raw = quantity.symbol.code().raw();

   const auto& lock_from = lock_from_acnts.get( sym_code_raw, "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   stats statstable( _self, sym_code_raw);
   const auto& st = statstable.get( sym_code_raw , "symbol does not exist");

   refunds_table refunds_tbl( _self, owner.value );

   uint64_t auto_index = refunds_tbl.available_primary_key();

   asset unstaking_amount = collect_refund(owner, quantity.symbol, auto_index);

   check( lock_from.staked_balance >= (unstaking_amount + quantity), "overdrawn locked balance" );

   refunds_tbl.emplace( owner, [&]( refund_request& r ) {
      r.index = auto_index;
      r.owner = owner;
      r.available_time = current_time_point() + seconds(st.refund_delay);
      r.amount = quantity;
   });

   // defer to call refund
   eosio::transaction out;
   //self needs eosio.code permission
   out.actions.emplace_back( permission_level{_self, "active"_n}, _self, "autorefeveri"_n, std::make_tuple(owner, auto_index) );
   out.delay_sec = st.refund_delay;
   uint128_t sender_id = SENDER_ID(owner.value, auto_index);
   cancel_deferred( sender_id );
   out.send( sender_id, owner, false );
}



void consortiumte::unstakebigga(name owner, asset quantity)
{
   require_auth( owner );

   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must unstake positive quantity" );

   stake_biggames lock_from_acnts( _self, owner.value );
   
   const auto& sym_code_raw = quantity.symbol.code().raw();

   const auto& lock_from = lock_from_acnts.get( sym_code_raw, "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   stats statstable( _self, sym_code_raw);
   const auto& st = statstable.get( sym_code_raw , "symbol does not exist");

   refunds_table refunds_tbl( _self, owner.value );

   uint64_t auto_index = refunds_tbl.available_primary_key();

   asset unstaking_amount = collect_refund(owner, quantity.symbol, auto_index);

   check( lock_from.staked_balance >= (unstaking_amount + quantity), "overdrawn locked balance" );

   refunds_tbl.emplace( owner, [&]( refund_request& r ) {
      r.index = auto_index;
      r.owner = owner;
      r.available_time = current_time_point() + seconds(st.refund_delay);
      r.amount = quantity;
   });

   // defer to call refund
   eosio::transaction out;
   //self needs eosio.code permission
   out.actions.emplace_back( permission_level{_self, "active"_n}, _self, "autorefbigga"_n, std::make_tuple(owner, auto_index) );
   out.delay_sec = st.refund_delay;
   uint128_t sender_id = SENDER_ID(owner.value, auto_index);
   cancel_deferred( sender_id );
   out.send( sender_id, owner, false );
}

void consortiumte::unstakedefin(name owner, asset quantity)
{
   require_auth( owner );

   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must unstake positive quantity" );

   stake_definds lock_from_acnts( _self, owner.value );
   
   const auto& sym_code_raw = quantity.symbol.code().raw();

   const auto& lock_from = lock_from_acnts.get( sym_code_raw, "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   stats statstable( _self, sym_code_raw);
   const auto& st = statstable.get( sym_code_raw , "symbol does not exist");

   refunds_table refunds_tbl( _self, owner.value );

   uint64_t auto_index = refunds_tbl.available_primary_key();

   asset unstaking_amount = collect_refund(owner, quantity.symbol, auto_index);

   check( lock_from.staked_balance >= (unstaking_amount + quantity), "overdrawn locked balance" );

   refunds_tbl.emplace( owner, [&]( refund_request& r ) {
      r.index = auto_index;
      r.owner = owner;
      r.available_time = current_time_point() + seconds(st.refund_delay);
      r.amount = quantity;
   });

   // defer to call refund
   eosio::transaction out;
   //self needs eosio.code permission
   out.actions.emplace_back( permission_level{_self, "active"_n}, _self, "autorefdefin"_n, std::make_tuple(owner, auto_index) );
   out.delay_sec = st.refund_delay;
   uint128_t sender_id = SENDER_ID(owner.value, auto_index);
   cancel_deferred( sender_id );
   out.send( sender_id, owner, false );
}

void consortiumte::unstakehirev(name owner, asset quantity)
{
   require_auth( owner );

   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must unstake positive quantity" );

   stake_hirevibes lock_from_acnts( _self, owner.value );
   
   const auto& sym_code_raw = quantity.symbol.code().raw();

   const auto& lock_from = lock_from_acnts.get( sym_code_raw, "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   stats statstable( _self, sym_code_raw);
   const auto& st = statstable.get( sym_code_raw , "symbol does not exist");

   refunds_table refunds_tbl( _self, owner.value );

   uint64_t auto_index = refunds_tbl.available_primary_key();

   asset unstaking_amount = collect_refund(owner, quantity.symbol, auto_index);

   check( lock_from.staked_balance >= (unstaking_amount + quantity), "overdrawn locked balance" );

   refunds_tbl.emplace( owner, [&]( refund_request& r ) {
      r.index = auto_index;
      r.owner = owner;
      r.available_time = current_time_point() + seconds(st.refund_delay);
      r.amount = quantity;
   });

   // defer to call refund
   eosio::transaction out;
   //self needs eosio.code permission
   out.actions.emplace_back( permission_level{_self, "active"_n}, _self, "autorefhirev"_n, std::make_tuple(owner, auto_index) );
   out.delay_sec = st.refund_delay;
   uint128_t sender_id = SENDER_ID(owner.value, auto_index);
   cancel_deferred( sender_id );
   out.send( sender_id, owner, false );
}

void consortiumte::unstaketpt(name owner, asset quantity)
{
   require_auth( owner );

   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must unstake positive quantity" );

   stake_tpts lock_from_acnts( _self, owner.value );
   
   const auto& sym_code_raw = quantity.symbol.code().raw();

   const auto& lock_from = lock_from_acnts.get( sym_code_raw, "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   stats statstable( _self, sym_code_raw);
   const auto& st = statstable.get( sym_code_raw , "symbol does not exist");

   refunds_table refunds_tbl( _self, owner.value );

   uint64_t auto_index = refunds_tbl.available_primary_key();

   asset unstaking_amount = collect_refund(owner, quantity.symbol, auto_index);

   check( lock_from.staked_balance >= (unstaking_amount + quantity), "overdrawn locked balance" );

   refunds_tbl.emplace( owner, [&]( refund_request& r ) {
      r.index = auto_index;
      r.owner = owner;
      r.available_time = current_time_point() + seconds(st.refund_delay);
      r.amount = quantity;
   });

   // defer to call refund
   eosio::transaction out;
   //self needs eosio.code permission
   out.actions.emplace_back( permission_level{_self, "active"_n}, _self, "autoreftpt"_n, std::make_tuple(owner, auto_index) );
   out.delay_sec = st.refund_delay;
   uint128_t sender_id = SENDER_ID(owner.value, auto_index);
   cancel_deferred( sender_id );
   out.send( sender_id, owner, false );
}

void consortiumte::unstakeeosdt(name owner, asset quantity)
{
   require_auth( owner );

   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must unstake positive quantity" );

   stake_eosdts lock_from_acnts( _self, owner.value );
   
   const auto& sym_code_raw = quantity.symbol.code().raw();

   const auto& lock_from = lock_from_acnts.get( sym_code_raw, "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   stats statstable( _self, sym_code_raw);
   const auto& st = statstable.get( sym_code_raw , "symbol does not exist");

   refunds_table refunds_tbl( _self, owner.value );

   uint64_t auto_index = refunds_tbl.available_primary_key();

   asset unstaking_amount = collect_refund(owner, quantity.symbol, auto_index);

   check( lock_from.staked_balance >= (unstaking_amount + quantity), "overdrawn locked balance" );

   refunds_tbl.emplace( owner, [&]( refund_request& r ) {
      r.index = auto_index;
      r.owner = owner;
      r.available_time = current_time_point() + seconds(st.refund_delay);
      r.amount = quantity;
   });

   // defer to call refund
   eosio::transaction out;
   //self needs eosio.code permission
   out.actions.emplace_back( permission_level{_self, "active"_n}, _self, "autorefeosdt"_n, std::make_tuple(owner, auto_index) );
   out.delay_sec = st.refund_delay;
   uint128_t sender_id = SENDER_ID(owner.value, auto_index);
   cancel_deferred( sender_id );
   out.send( sender_id, owner, false );
}

void consortiumte::unstakebanco(name owner, asset quantity)
{
   require_auth( owner );

   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must unstake positive quantity" );

   stake_bancors lock_from_acnts( _self, owner.value );
   
   const auto& sym_code_raw = quantity.symbol.code().raw();

   const auto& lock_from = lock_from_acnts.get( sym_code_raw, "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   stats statstable( _self, sym_code_raw);
   const auto& st = statstable.get( sym_code_raw , "symbol does not exist");

   refunds_table refunds_tbl( _self, owner.value );

   uint64_t auto_index = refunds_tbl.available_primary_key();

   asset unstaking_amount = collect_refund(owner, quantity.symbol, auto_index);

   check( lock_from.staked_balance >= (unstaking_amount + quantity), "overdrawn locked balance" );

   refunds_tbl.emplace( owner, [&]( refund_request& r ) {
      r.index = auto_index;
      r.owner = owner;
      r.available_time = current_time_point() + seconds(st.refund_delay);
      r.amount = quantity;
   });

   // defer to call refund
   eosio::transaction out;
   //self needs eosio.code permission
   out.actions.emplace_back( permission_level{_self, "active"_n}, _self, "autorefbanco"_n, std::make_tuple(owner, auto_index) );
   out.delay_sec = st.refund_delay;
   uint128_t sender_id = SENDER_ID(owner.value, auto_index);
   cancel_deferred( sender_id );
   out.send( sender_id, owner, false );
}

void consortiumte::unstakevigor(name owner, asset quantity)
{
   require_auth( owner );

   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must unstake positive quantity" );

   stake_vigors lock_from_acnts( _self, owner.value );
   
   const auto& sym_code_raw = quantity.symbol.code().raw();

   const auto& lock_from = lock_from_acnts.get( sym_code_raw, "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   stats statstable( _self, sym_code_raw);
   const auto& st = statstable.get( sym_code_raw , "symbol does not exist");

   refunds_table refunds_tbl( _self, owner.value );

   uint64_t auto_index = refunds_tbl.available_primary_key();

   asset unstaking_amount = collect_refund(owner, quantity.symbol, auto_index);

   check( lock_from.staked_balance >= (unstaking_amount + quantity), "overdrawn locked balance" );

   refunds_tbl.emplace( owner, [&]( refund_request& r ) {
      r.index = auto_index;
      r.owner = owner;
      r.available_time = current_time_point() + seconds(st.refund_delay);
      r.amount = quantity;
   });

   // defer to call refund
   eosio::transaction out;
   //self needs eosio.code permission
   out.actions.emplace_back( permission_level{_self, "active"_n}, _self, "autorefvigor"_n, std::make_tuple(owner, auto_index) );
   out.delay_sec = st.refund_delay;
   uint128_t sender_id = SENDER_ID(owner.value, auto_index);
   cancel_deferred( sender_id );
   out.send( sender_id, owner, false );
}

void consortiumte::unstakeeosda(name owner, asset quantity)
{
   require_auth( owner );

   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must unstake positive quantity" );

   stake_eosdacs lock_from_acnts( _self, owner.value );
   
   const auto& sym_code_raw = quantity.symbol.code().raw();

   const auto& lock_from = lock_from_acnts.get( sym_code_raw, "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   stats statstable( _self, sym_code_raw);
   const auto& st = statstable.get( sym_code_raw , "symbol does not exist");

   refunds_table refunds_tbl( _self, owner.value );

   uint64_t auto_index = refunds_tbl.available_primary_key();

   asset unstaking_amount = collect_refund(owner, quantity.symbol, auto_index);

   check( lock_from.staked_balance >= (unstaking_amount + quantity), "overdrawn locked balance" );

   refunds_tbl.emplace( owner, [&]( refund_request& r ) {
      r.index = auto_index;
      r.owner = owner;
      r.available_time = current_time_point() + seconds(st.refund_delay);
      r.amount = quantity;
   });

   // defer to call refund
   eosio::transaction out;
   //self needs eosio.code permission
   out.actions.emplace_back( permission_level{_self, "active"_n}, _self, "autorefeosda"_n, std::make_tuple(owner, auto_index) );
   out.delay_sec = st.refund_delay;
   uint128_t sender_id = SENDER_ID(owner.value, auto_index);
   cancel_deferred( sender_id );
   out.send( sender_id, owner, false );
}

void consortiumte::unstakeedna(name owner, asset quantity)
{
   require_auth( owner );

   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must unstake positive quantity" );

   stake_ednas lock_from_acnts( _self, owner.value );
   
   const auto& sym_code_raw = quantity.symbol.code().raw();

   const auto& lock_from = lock_from_acnts.get( sym_code_raw, "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   stats statstable( _self, sym_code_raw);
   const auto& st = statstable.get( sym_code_raw , "symbol does not exist");

   refunds_table refunds_tbl( _self, owner.value );

   uint64_t auto_index = refunds_tbl.available_primary_key();

   asset unstaking_amount = collect_refund(owner, quantity.symbol, auto_index);

   check( lock_from.staked_balance >= (unstaking_amount + quantity), "overdrawn locked balance" );

   refunds_tbl.emplace( owner, [&]( refund_request& r ) {
      r.index = auto_index;
      r.owner = owner;
      r.available_time = current_time_point() + seconds(st.refund_delay);
      r.amount = quantity;
   });

   // defer to call refund
   eosio::transaction out;
   //self needs eosio.code permission
   out.actions.emplace_back( permission_level{_self, "active"_n}, _self, "autorefedna"_n, std::make_tuple(owner, auto_index) );
   out.delay_sec = st.refund_delay;
   uint128_t sender_id = SENDER_ID(owner.value, auto_index);
   cancel_deferred( sender_id );
   out.send( sender_id, owner, false );
}

void consortiumte::unstakesense(name owner, asset quantity)
{
   require_auth( owner );

   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must unstake positive quantity" );

   stake_senses lock_from_acnts( _self, owner.value );
   
   const auto& sym_code_raw = quantity.symbol.code().raw();

   const auto& lock_from = lock_from_acnts.get( sym_code_raw, "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   stats statstable( _self, sym_code_raw);
   const auto& st = statstable.get( sym_code_raw , "symbol does not exist");

   refunds_table refunds_tbl( _self, owner.value );

   uint64_t auto_index = refunds_tbl.available_primary_key();

   asset unstaking_amount = collect_refund(owner, quantity.symbol, auto_index);

   check( lock_from.staked_balance >= (unstaking_amount + quantity), "overdrawn locked balance" );

   refunds_tbl.emplace( owner, [&]( refund_request& r ) {
      r.index = auto_index;
      r.owner = owner;
      r.available_time = current_time_point() + seconds(st.refund_delay);
      r.amount = quantity;
   });

   // defer to call refund
   eosio::transaction out;
   //self needs eosio.code permission
   out.actions.emplace_back( permission_level{_self, "active"_n}, _self, "autorefsense"_n, std::make_tuple(owner, auto_index) );
   out.delay_sec = st.refund_delay;
   uint128_t sender_id = SENDER_ID(owner.value, auto_index);
   cancel_deferred( sender_id );
   out.send( sender_id, owner, false );
}

void consortiumte::unstakepeos(name owner, asset quantity)
{
   require_auth( owner );

   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must unstake positive quantity" );

   stake_peos lock_from_acnts( _self, owner.value );
   
   const auto& sym_code_raw = quantity.symbol.code().raw();

   const auto& lock_from = lock_from_acnts.get( sym_code_raw, "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   stats statstable( _self, sym_code_raw);
   const auto& st = statstable.get( sym_code_raw , "symbol does not exist");

   refunds_table refunds_tbl( _self, owner.value );

   uint64_t auto_index = refunds_tbl.available_primary_key();

   asset unstaking_amount = collect_refund(owner, quantity.symbol, auto_index);

   check( lock_from.staked_balance >= (unstaking_amount + quantity), "overdrawn locked balance" );

   refunds_tbl.emplace( owner, [&]( refund_request& r ) {
      r.index = auto_index;
      r.owner = owner;
      r.available_time = current_time_point() + seconds(st.refund_delay);
      r.amount = quantity;
   });

   // defer to call refund
   eosio::transaction out;
   //self needs eosio.code permission
   out.actions.emplace_back( permission_level{_self, "active"_n}, _self, "autorefpeos"_n, std::make_tuple(owner, auto_index) );
   out.delay_sec = st.refund_delay;
   uint128_t sender_id = SENDER_ID(owner.value, auto_index);
   cancel_deferred( sender_id );
   out.send( sender_id, owner, false );
}

void consortiumte::unstakenewde(name owner, asset quantity)
{
   require_auth( owner );

   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must unstake positive quantity" );

   stake_newdexs lock_from_acnts( _self, owner.value );
   
   const auto& sym_code_raw = quantity.symbol.code().raw();

   const auto& lock_from = lock_from_acnts.get( sym_code_raw, "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   stats statstable( _self, sym_code_raw);
   const auto& st = statstable.get( sym_code_raw , "symbol does not exist");

   refunds_table refunds_tbl( _self, owner.value );

   uint64_t auto_index = refunds_tbl.available_primary_key();

   asset unstaking_amount = collect_refund(owner, quantity.symbol, auto_index);

   check( lock_from.staked_balance >= (unstaking_amount + quantity), "overdrawn locked balance" );

   refunds_tbl.emplace( owner, [&]( refund_request& r ) {
      r.index = auto_index;
      r.owner = owner;
      r.available_time = current_time_point() + seconds(st.refund_delay);
      r.amount = quantity;
   });

   // defer to call refund
   eosio::transaction out;
   //self needs eosio.code permission
   out.actions.emplace_back( permission_level{_self, "active"_n}, _self, "autorefnewde"_n, std::make_tuple(owner, auto_index) );
   out.delay_sec = st.refund_delay;
   uint128_t sender_id = SENDER_ID(owner.value, auto_index);
   cancel_deferred( sender_id );
   out.send( sender_id, owner, false );
}

void consortiumte::unstakechint(name owner, asset quantity)
{
   require_auth( owner );

   check( quantity.is_valid(), "invalid quantity" );
   check( quantity.amount > 0, "must unstake positive quantity" );

   stake_chintais lock_from_acnts( _self, owner.value );
   
   const auto& sym_code_raw = quantity.symbol.code().raw();

   const auto& lock_from = lock_from_acnts.get( sym_code_raw, "no balance object found" );
   check( lock_from.staked_balance >= quantity, "overdrawn locked balance" );

   stats statstable( _self, sym_code_raw);
   const auto& st = statstable.get( sym_code_raw , "symbol does not exist");

   refunds_table refunds_tbl( _self, owner.value );

   uint64_t auto_index = refunds_tbl.available_primary_key();

   asset unstaking_amount = collect_refund(owner, quantity.symbol, auto_index);

   check( lock_from.staked_balance >= (unstaking_amount + quantity), "overdrawn locked balance" );

   refunds_tbl.emplace( owner, [&]( refund_request& r ) {
      r.index = auto_index;
      r.owner = owner;
      r.available_time = current_time_point() + seconds(st.refund_delay);
      r.amount = quantity;
   });

   // defer to call refund
   eosio::transaction out;
   //self needs eosio.code permission
   out.actions.emplace_back( permission_level{_self, "active"_n}, _self, "autorefchint"_n, std::make_tuple(owner, auto_index) );
   out.delay_sec = st.refund_delay;
   uint128_t sender_id = SENDER_ID(owner.value, auto_index);
   cancel_deferred( sender_id );
   out.send( sender_id, owner, false );
}





