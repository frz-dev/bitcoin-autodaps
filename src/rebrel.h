/*REBREL*/
#include <uint256.h>

static constexpr std::chrono::minutes EPOCH_INTERVAL{1};
static constexpr std::chrono::minutes PROXY_BROADCAST_CHECK{1};

void ProxyTx(const CTransactionRef& tx, CNode *pfrom, CConnman& connman);
void BroadcastProxyTx(CTransactionRef ptx, CConnman& connman);
CTransactionRef FindProxiedTx(const uint256 txid);
void SetTxBroadcasted(CTransactionRef ptx);
void ReattemptProxy(CScheduler& scheduler);