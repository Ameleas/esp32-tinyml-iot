#include <pgmspace.h>

#define SECRET

const char* ssid = "add_WiFi_here";
const char* password = "add_WiFi_password_here";
const char* mqtt_server = "add_your_server_ip_address_here";
const int mqtt_port = 8883; // for secure transmission
const char* mqtt_user = "enter_made_up_user_name_here";
const char* mqtt_password = "add_your_mqtt_password_here";
const char* mqtt_topic = "/home/birds"; // edit to fit your project


// CA Certificate
const char* ca_cert = R"EOF(
-----BEGIN CERTIFICATE-----
... (PASTE CA CERTIFICATE HERE) ...
-----END CERTIFICATE-----
)EOF";

// Client Certificate
const char* client_cert = R"KEY(
-----BEGIN CERTIFICATE-----
... (PASTE CLIENT CERTIFICATE HERE) ...
-----END CERTIFICATE-----
)KEY";

// Client Private Key
const char* client_key = R"KEY(
-----BEGIN RSA PRIVATE KEY-----
... (PASTE CLIENT KEY HERE) ...
-----END RSA PRIVATE KEY-----
)KEY";