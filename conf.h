
#define SRV_PORT 23001
#define MGR_SOCKET "/home/pawel/kropkid_sock"

#define MAP_HEIGHT 18
#define MAP_WIDTH 35
#define MAP_LEFT 6

/*
 * 0 - No debug messages
 * 1 - Warnings
 * 2 - General state messages
 * 3 - Detailed event information
 */
#define DEBUG_LEVEL 2

#define DBG(l,...) { if ((l) <= DEBUG_LEVEL) printf(__VA_ARGS__); }
