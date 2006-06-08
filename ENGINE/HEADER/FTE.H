#ifndef FAT_TRANSFORMATION_ENGINE_H_
#define FAT_TRANSFORMATION_ENGINE_H_

/* low level functionality */
#include "bool.h"
#include "traversl.h"
#include "direct.h"
#include "drive.h"
#include "fat.h"
#include "fatconst.h"
#include "fteerr.h"
#include "rdwrsect.h"
#include "subdir.h"
#include "boot.h"
#include "FSInfo.h"
#include "dataarea.h"
#include "volume.h"
#include "backup.h"
#include "lfn.h"

/* high level functionality */
#include "cpysct.h"
#include "dircnt.h"
#include "fndffspc.h"
#include "fndcidir.h"
#include "fndcifat.h"
#include "fndlstct.h"
#include "gtnthcst.h"
#include "nthentry.h"
#include "nthflclt.h"
#include "relocclt.h"
#include "swpclst.h"
#include "walktree.h"
#include "AdCPDirs.h"
#include "fexist.h"
#include "FileChn.h"
#include "Locpath.h"
#include "WalkWPth.h"
#include "TracePth.h"
#include "ClcFSize.h"
#include "FreeSpac.h"

/* Miscelanous functionality */
#include "ftemisc.h"
#include "wildcard.h"
#include "pathconv.h"
#include "mkabspth.h"

/* Heap memory management */
#include "ftemem.h"

/* Sector cache */
#include "sctcache.h"
#include "PreRead.h"

/* Data structures */
#include "dtstrct.h"

#endif