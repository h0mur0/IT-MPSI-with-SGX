#include <vector>
#include <cmath>
#include <string>

#include "client.h"
#include "sgx_eid.h"

using namespace std;
extern sgx_enclave_id_t global_eid; 
// 构造函数实现
client::client(string state, int client_id, int N) : state(state), client_id(client_id) {
    client_send_to_database = vector<vector<int>>(N);
}



