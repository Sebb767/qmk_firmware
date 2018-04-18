
int portals = 0;

void addPortal(void) { ++portals; }
void delPortal(void) { --portals; }
int portalOnline(void) { return portals > 0; }

