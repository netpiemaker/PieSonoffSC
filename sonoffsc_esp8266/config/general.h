//------------------------------------------------------------------------------
// GENERAL
//------------------------------------------------------------------------------

#define SERIAL_BAUDRATE         115200
#define HOSTNAME                APP_NAME
#define DEVICE                  APP_NAME
#define MANUFACTURER            "ITEAD STUDIO"
#define HEARTBEAT_INTERVAL      300000

// -----------------------------------------------------------------------------
// WIFI
// -----------------------------------------------------------------------------

#define WIFI_RECONNECT_TIMEOUT  300000
#define AP_NAME           		"sonoffsc"

// -----------------------------------------------------------------------------
// HARDWARE
// -----------------------------------------------------------------------------

#define BUTTON_PIN              0
#define LED_PIN                 13

// -----------------------------------------------------------------------------
// NETPIE
// -----------------------------------------------------------------------------
#define APPID   "YOUR_APPID"
#define KEY     "YOUR_KEY"
#define SECRET  "YOUR_SECRET"
#define ALIAS   "sonoffsc"

#define FEEDID	"FEED_ID"
#define FEEDAPIKEY	"FEED_API_KEY"
#define FEED_EVERY	15000

#define NETPIE_RETAIN             false
#define NETPIE_RECONNECT_DELAY    5000
#define NETPIE_SKIP_RETAINED      1

#define NETPIE_TOPIC              "/data/sonoffsc"
#define NETPIE_INTERVAL_SEND      5000

// -----------------------------------------------------------------------------
// SENSORS
// -----------------------------------------------------------------------------

#define SENSOR_EVERY            5
#define SENSOR_CLAP_ENABLED     1