<h1> <img src="https://user-images.githubusercontent.com/46645013/78460735-fb03f280-76cb-11ea-9c1e-eb86c1511462.png" width="47" height="30"> Consortium - decentralized, on-chain, incentive based governance layer for any social organization.  </h1>


Welcome to the Consortium's smart contracts repository! 

<p>Contracts are deployed to the following accounts on the EOS mainnet:
        <ul>
        <li><b>consortiumtt</b>   </li>
        <li><b>consortium11</b>   </li>
        <li><b>consortiumlv</b>   </li>   </ul></p>
        <hr></hr>
<h3>Contract - consoriumtt </h3>

Contract consortiumtt contains actions and tables related to staking GOVRN tokens issued by the contract. The contract will be active only during the Genesis vote phase. After the vote contract after will be frozen.
<hr></hr>
<h3>Contract - consortium11 </h3>

Contract consortium11 contains all the actions and tables related to voting. On-notify actions (listening to the listed dApps' token transfers to consortium11) trigger external inline actions that subsequently trigger initialdistr action on consortiumtt account.
Due to sensitive nature of the contract (users having to transfer their tokens in order to vote) the private key holders of the contract have been changed to the block
producers. Time lock has been added to the contract to stop the Genesis vote by on 08.05.2020. consortiumtt account has the ability to prolong the Genesis vote by 20 days in case of 
persisting voting activity (indefinite number of times). 
<hr></hr>
<h3>Contract - consortiumlv </h3>

Contract consortiumlv contains all the actions and tables related to the main utility token of Consortium - GOVRN. Token is issued similarly to token on consortiumtt account. consortiumlv GOVRN tokens will be used post Genesis vote firstly in Consortium DAC launch/governance and after that as a sole utility token of the Consortium's economy.
