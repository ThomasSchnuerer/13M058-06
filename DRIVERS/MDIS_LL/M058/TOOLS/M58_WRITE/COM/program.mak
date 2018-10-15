#***************************  M a k e f i l e  *******************************
#
#         Author: see
#          $Date: 2004/04/20 16:26:39 $
#      $Revision: 1.2 $
#
#    Description: Makefile definitions for M58 tools
#
#---------------------------------[ History ]---------------------------------
#
#   $Log: program.mak,v $
#   Revision 1.2  2004/04/20 16:26:39  cs
#   Minor modifications for mdis4/2004 conformity
#         removed unused macro MAK_OPTIM=$(OPT_1)
#         removed unused include file mdis_err.h
#
#   Revision 1.1  1998/10/01 15:54:47  see
#   Added by mcvs
#
#-----------------------------------------------------------------------------
#   (c) Copyright 1998 by MEN mikro elektronik GmbH, Nuernberg, Germany
#*****************************************************************************

MAK_NAME=m58_write

MAK_LIBS=$(LIB_PREFIX)$(MEN_LIB_DIR)/usr_oss$(LIB_SUFFIX)     \
         $(LIB_PREFIX)$(MEN_LIB_DIR)/usr_utl$(LIB_SUFFIX)     \
         $(LIB_PREFIX)$(MEN_LIB_DIR)/mdis_api$(LIB_SUFFIX)    \
         
MAK_INCL=$(MEN_INC_DIR)/m58_drv.h     \
         $(MEN_INC_DIR)/men_typs.h    \
         $(MEN_INC_DIR)/mdis_api.h    \
         $(MEN_INC_DIR)/usr_oss.h     \
         $(MEN_INC_DIR)/usr_utl.h     \

MAK_INP1=m58_write$(INP_SUFFIX)

MAK_INP=$(MAK_INP1)
