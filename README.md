<h1> <img src="https://user-images.githubusercontent.com/46645013/78460735-fb03f280-76cb-11ea-9c1e-eb86c1511462.png" width="55" height="35"> Consortium - decentralized, on-chain, incentive based governance layer for any social organization.  </h1>


Welcome to the Consortium's smart contracts repository! 


<p>Contract is deployed to the following account on the EOS mainnet:
        <ul>
        <li><b>consortiumlv</b>   </li>   </ul></p>
        <hr></hr>

<h3>Contract - consortiumlv </h3>


Contract consortiumlv could be categorized into three parts that contain:

1. actions/tables related to standard eosio.token contract

2. voting and poll creation logic (ACTION votez / ACTION createpollz)

3. staking and unstaking of GOVRN token (ACTION stakeforcomm / ACTION unstkfromcom).


In addition contract is integrated with DAPP network (LiquidApps services). Two LiquidApps services are being utilized, cron and oracle. Cron is used to calculate and distribute the rewards (GOVRN) to creators of the popular polls and to delete four different table rows (TABLE paljuvoted / TABLE kysimused / TABLE usrpoll / TABLE voterstatzi) that are no longer in use to release RAM. 

