/***********************  I n c l u d e  -  F i l e  ************************
 *
 *         Name: m58_drv.h
 *
 *       Author: see
 *        $Date: 2013/06/26 16:53:56 $
 *    $Revision: 2.4 $
 *
 *  Description: Header file for M58 driver
 *               - M58 specific status codes
 *               - M58 function prototypes
 *
 *     Switches: _ONE_NAMESPACE_PER_DRIVER_
 *               _LL_DRV_
 *
 *-------------------------------[ History ]---------------------------------
 *
 * $Log: m58_drv.h,v $
 * Revision 2.4  2013/06/26 16:53:56  gv
 * R: Porting to MDIS
 * M: Changed according to MDIS Porting Guide 0.9
 *
 * Revision 2.3  2004/06/02 17:05:54  kp
 * fixed typo (default variant now M58)
 *
 * Revision 2.2  2000/04/13 14:44:29  Schmidt
 * low-level driver prototypes moved to m58_drv.c
 * GetEntry declaration modified for swapping support
 *
 * Revision 2.1  1998/10/01 15:55:16  see
 * Added by mcvs
 *
 *---------------------------------------------------------------------------
 * (c) Copyright 1998 by MEN mikro elektronik GmbH, Nuernberg, Germany
 ****************************************************************************/

#ifndef _M58_LLDRV_H
#define _M58_LLDRV_H

#ifdef __cplusplus
      extern "C" {
#endif

/*-----------------------------------------+
|  TYPEDEFS                                |
+-----------------------------------------*/
/* none */

/*-----------------------------------------+
|  DEFINES                                 |
+-----------------------------------------*/
/* M58 specific status codes (STD) */       /* S,G: S=setstat, G=getstat */
#define M58_PORT_TERM		M_DEV_OF+0x00	/* S,G: channel termination */
#define M58_TRIG_EDGE		M_DEV_OF+0x01	/* S,G: trigger edge */
#define M58_DATA_MODE		M_DEV_OF+0x02	/* S,G: data storage mode */
#define M58_TRIG_SIG_SET	M_DEV_OF+0x03	/* S,G: trigger signal enable */
#define M58_TRIG_SIG_CLR	M_DEV_OF+0x04	/* S  : trigger signal disable */
#define M58_BUF_ENABLE		M_DEV_OF+0x05	/* S,G: channel buffering enable */
#define M58_BUF_RDSIZE		M_DEV_OF+0x06	/*   G: nr of enabled input  channels */
#define M58_BUF_WRSIZE		M_DEV_OF+0x07	/*   G: nr of enabled output channels */

/* M58_PORT_TERM definitions */
#define M58_TERM_ACTIVE		0x00
#define M58_TERM_PASSIVE	0x01

/* M58_TRIG_EDGE definitions */
#define M58_TRIG_FALL		0x00
#define M58_TRIG_RISE		0x01

#ifndef  M58_VARIANT
# define M58_VARIANT M58
#endif

# define _M58_GLOBNAME(var,name) var##_##name
#ifndef _ONE_NAMESPACE_PER_DRIVER_
# define M58_GLOBNAME(var,name) _M58_GLOBNAME(var,name)
#else
# define M58_GLOBNAME(var,name) _M58_GLOBNAME(M58,name)
#endif

#define GetEntry	M58_GLOBNAME(M58_VARIANT,GetEntry)

/*-----------------------------------------+
|  PROTOTYPES                              |
+-----------------------------------------*/
#ifdef _LL_DRV_
#ifndef _ONE_NAMESPACE_PER_DRIVER_
	extern void GetEntry(LL_ENTRY* drvP);
#endif
#endif /* _LL_DRV_ */

/*-----------------------------------------+
|  BACKWARD COMPATIBILITY TO MDIS4         |
+-----------------------------------------*/
#ifndef U_INT32_OR_64
 /* we have an MDIS4 men_types.h and mdis_api.h included */
 /* only 32bit compatibility needed!                     */
 #define INT32_OR_64  int32
 #define U_INT32_OR_64 u_int32
 typedef INT32_OR_64  MDIS_PATH;
#endif /* U_INT32_OR_64 */

#ifdef __cplusplus
      }
#endif

#endif /* _M58_LLDRV_H */
