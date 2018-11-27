/*
 * userInfoThread.c
 *
 *  Created on: 26 бреб„ 2018
 *      Author: sergeym
 */


#include "string.h"
#include "lwip/netif.h"
#include "api.h"
#include "lwip/dhcp.h"
#define DHCP_STATE_BOUND          10


void printDHCP_IP(struct netif *netif);
void printUDPport(struct netconn *conn);


void printDHCP_IP(struct netif *netif)
{
	  struct dhcp *dhcp;
	  LWIP_ERROR("dhcp_bind: netif != NULL", (netif != NULL), return;);
	  dhcp = netif_dhcp_data(netif);


	  ip4_addr_t offered_ip_addr;
	  while (dhcp->state !=  DHCP_STATE_BOUND)
	  {
		  offered_ip_addr = netif->ip_addr;
	  }
	  u8_t add0 = (offered_ip_addr.addr)>>24;
	  u8_t add1 = (offered_ip_addr.addr)>>16;
	  u8_t add2 = (offered_ip_addr.addr)>>8;
	  u8_t add3 = (offered_ip_addr.addr);

	  printf("IP ADDRESS GIVEN BY DHCP: %d.%d.%d.%d\n", add3,add2,add1,add0);



}

void printUDPport(struct netconn *conn)
{

	 ip4_addr_t addr;
	 u16_t port;

	 netconn_getaddr(conn,&addr,&port,1);


	 printf("UDP Port: %d\n", port);

}

