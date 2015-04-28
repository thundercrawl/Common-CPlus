/*    Copyright 2012 SequoiaDB Inc.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

/* This list file is automatically generated,you shoud NOT modify this file anyway! test comment*/
#ifndef dmsTRACE_H__
#define dmsTRACE_H__
// Component: dms
#define SDB__SDB_DMSCB__LGCSCBNMMAP                        0x100000000036bL
#define SDB__SDB_DMSCB__CSCBNMINST                         0x100000000036cL
#define SDB__SDB_DMSCB__CSCBNMREMV                         0x100000000036dL
#define SDB__SDB_DMSCB__CSCBNMREMVP1                       0x100000000036eL
#define SDB__SDB_DMSCB__CSCBNMREMVP1CANCEL                 0x100000000036fL
#define SDB__SDB_DMSCB__CSCBNMREMVP2                       0x1000000000370L
#define SDB__SDB_DMSCB__CSCBNMMAPCLN                       0x1000000000371L
#define SDB__SDB_DMSCB_ADDCS                               0x1000000000372L
#define SDB__SDB_DMSCB_DELCS                               0x1000000000373L
#define SDB__SDB_DMSCB_DROPCSP1                            0x1000000000374L
#define SDB__SDB_DMSCB_DROPCSP1CANCEL                      0x1000000000375L
#define SDB__SDB_DMSCB_DROPCSP2                            0x1000000000376L
#define SDB__SDB_DMSCB_DUMPINFO                            0x1000000000377L
#define SDB__SDB_DMSCB_DUMPINFO2                           0x1000000000378L
#define SDB__SDB_DMSCB_DUMPINFO3                           0x1000000000379L
#define SDB__SDB_DMSCB_DUMPINFO4                           0x100000000037aL
#define SDB__SDB_DMSCB_DISPATCHPAGECLEANSU                 0x100000000037bL
#define SDB__SDB_DMSCB_JOINPAGECLEANSU                     0x100000000037cL
#define SDB__SDB_DMSCB__JOINPAGECLEANSU                    0x100000000037dL
#define SDB__MBFLAG2STRING                                 0x100000000037eL
#define SDB__MBATTR2STRING                                 0x100000000037fL
#define SDB__DMSMBCONTEXT                                  0x1000000000380L
#define SDB__DMSMBCONTEXT_DESC                             0x1000000000381L
#define SDB__DMSMBCONTEXT__RESET                           0x1000000000382L
#define SDB__DMSMBCONTEXT_PAUSE                            0x1000000000383L
#define SDB__DMSMBCONTEXT_RESUME                           0x1000000000384L
#define SDB__DMSSTORAGEDATA                                0x1000000000385L
#define SDB__DMSSTORAGEDATA_DESC                           0x1000000000386L
#define SDB__DMSSTORAGEDATA_SYNCMEMTOMMAP                  0x1000000000387L
#define SDB__DMSSTORAGEDATA__ONCREATE                      0x1000000000388L
#define SDB__DMSSTORAGEDATA__ONMAPMETA                     0x1000000000389L
#define SDB__DMSSTORAGEDATA__ONCLOSED                      0x100000000038aL
#define SDB__DMSSTORAGEDATA__INITMME                       0x100000000038bL
#define SDB__DMSSTORAGEDATA__LOGDPS                        0x100000000038cL
#define SDB__DMSSTORAGEDATA__LOGDPS1                       0x100000000038dL
#define SDB__DMSSTORAGEDATA__ALLOCATEEXTENT                0x100000000038eL
#define SDB__DMSSTORAGEDATA__FREEEXTENT                    0x100000000038fL
#define SDB__DMSSTORAGEDATA__RESERVEFROMDELETELIST         0x1000000000390L
#define SDB__DMSSTORAGEDATA__TRUNCATECOLLECTION            0x1000000000391L
#define SDB__DMSSTORAGEDATA__TRUNCATECOLLECITONLOADS       0x1000000000392L
#define SDB__DMSSTORAGEDATA__SAVEDELETEDRECORD             0x1000000000393L
#define SDB__DMSSTORAGEDATA__SAVEDELETEDRECORD1            0x1000000000394L
#define SDB__DMSSTORAGEDATA__MAPEXTENT2DELLIST             0x1000000000395L
#define SDB__DMSSTORAGEDATA_ADDEXTENT2META                 0x1000000000396L
#define SDB__DMSSTORAGEDATA_ADDCOLLECTION                  0x1000000000397L
#define SDB__DMSSTORAGEDATA_DROPCOLLECTION                 0x1000000000398L
#define SDB__DMSSTORAGEDATA_TRUNCATECOLLECTION             0x1000000000399L
#define SDB__DMSSTORAGEDATA_TRUNCATECOLLECTIONLOADS        0x100000000039aL
#define SDB__DMSSTORAGEDATA_RENAMECOLLECTION               0x100000000039bL
#define SDB__DMSSTORAGEDATA_FINDCOLLECTION                 0x100000000039cL
#define SDB__DMSSTORAGEDATA_INSERTRECORD                   0x100000000039dL
#define SDB__DMSSTORAGEDATA__EXTENTINSERTRECORD            0x100000000039eL
#define SDB__DMSSTORAGEDATA_DELETERECORD                   0x100000000039fL
#define SDB__DMSSTORAGEDATA__EXTENTREMOVERECORD            0x10000000003a0L
#define SDB__DMSSTORAGEDATA_UPDATERECORD                   0x10000000003a1L
#define SDB__DMSSTORAGEDATA__EXTENTUPDATERECORD            0x10000000003a2L
#define SDB__DMSSTORAGEDATA_FETCH                          0x10000000003a3L
#define SDB__DMSSTORAGELOB_OPEN                            0x10000000003a4L
#define SDB__DMSSTORAGELOB__DELAYOPEN                      0x10000000003a5L
#define SDB__DMSSTORAGELOB__OPENLOB                        0x10000000003a6L
#define SDB__DMSSTORAGELOB_REMOVESTORAGEFILES              0x10000000003a7L
#define SDB__DMSSTORAGELOB_GETLOBMETA                      0x10000000003a8L
#define SDB__DMSSTORAGELOB_WRITELOBMETA                    0x10000000003a9L
#define SDB__DMSSTORAGELOB_WRITE                           0x10000000003aaL
#define SDB__DMSSTORAGELOB_UPDATE                          0x10000000003abL
#define SDB__DMSSTORAGELOB_READ                            0x10000000003acL
#define SDB__DMSSTORAGELOB__ALLOCATEPAGE                   0x10000000003adL
#define SDB__DMSSTORAGELOB__FILLPAGE                       0x10000000003aeL
#define SDB__DMSSTORAGELOB_REMOVE                          0x10000000003afL
#define SDB__DMSSTORAGELOB__FIND                           0x10000000003b0L
#define SDB__DMSSTORAGELOB__PUSH2BUCKET                    0x10000000003b1L
#define SDB__DMSSTORAGELOB__ONCREATE                       0x10000000003b2L
#define SDB__DMSSTORAGELOB__ONMAPMETA                      0x10000000003b3L
#define SDB__DMSSTORAGELOB__EXTENDSEGMENTS                 0x10000000003b4L
#define SDB__DMSSTORAGELOB_READPAGE                        0x10000000003b5L
#define SDB__DMSSTORAGELOB__REMOVEPAGE                     0x10000000003b6L
#define SDB__DMSSTORAGELOB_TRUNCATE                        0x10000000003b7L
#define SDB__DMSROUNIT__INIT                               0x10000000003b8L
#define SDB__DMSROUNIT_CLNUP                               0x10000000003b9L
#define SDB__DMSROUNIT_OPEN                                0x10000000003baL
#define SDB__DMSROUNIT_IMPMME                              0x10000000003bbL
#define SDB__DMSROUNIT_EXPMME                              0x10000000003bcL
#define SDB__DMSROUNIT__ALCEXT                             0x10000000003bdL
#define SDB__DMSROUNIT__FLSEXT                             0x10000000003beL
#define SDB__DMSROUNIT_FLUSH                               0x10000000003bfL
#define SDB__DMSROUNIT_INSRCD                              0x10000000003c0L
#define SDB__DMSROUNIT_GETNXTEXTSIZE                       0x10000000003c1L
#define SDB__DMSROUNIT_EXPHEAD                             0x10000000003c2L
#define SDB__DMSROUNIT_EXPEXT                              0x10000000003c3L
#define SDB__DMSROUNIT_VLDHDBUFF                           0x10000000003c4L
#define SDB__DMS_LOBDIRECTBUF__EXTENDBUF                   0x10000000003c5L
#define SDB__DMSSMS__RSTMAX                                0x10000000003c6L
#define SDB__DMSSMS_RSVPAGES                               0x10000000003c7L
#define SDB__DMSSMS_RLSPAGES                               0x10000000003c8L
#define SDB__DMSSMEMGR_INIT                                0x10000000003c9L
#define SDB__DMSSMEMGR_RSVPAGES                            0x10000000003caL
#define SDB__DMSSMEMGR_RLSPAGES                            0x10000000003cbL
#define SDB__DMSSMEMGR_DEPOSIT                             0x10000000003ccL
#define SDB__DMSSU                                         0x10000000003cdL
#define SDB__DMSSU_DESC                                    0x10000000003ceL
#define SDB__DMSSU_OPEN                                    0x10000000003cfL
#define SDB__DMSSU_CLOSE                                   0x10000000003d0L
#define SDB__DMSSU_REMOVE                                  0x10000000003d1L
#define SDB__DMSSU__RESETCOLLECTION                        0x10000000003d2L
#define SDB__DMSSU_LDEXTA                                  0x10000000003d3L
#define SDB__DMSSU_LDEXT                                   0x10000000003d4L
#define SDB__DMSSU_INSERTRECORD                            0x10000000003d5L
#define SDB__DMSSU_UPDATERECORDS                           0x10000000003d6L
#define SDB__DMSSU_DELETERECORDS                           0x10000000003d7L
#define SDB__DMSSU_REBUILDINDEXES                          0x10000000003d8L
#define SDB__DMSSU_CREATEINDEX                             0x10000000003d9L
#define SDB__DMSSU_DROPINDEX                               0x10000000003daL
#define SDB__DMSSU_DROPINDEX1                              0x10000000003dbL
#define SDB__DMSSU_COUNTCOLLECTION                         0x10000000003dcL
#define SDB__DMSSU_GETCOLLECTIONFLAG                       0x10000000003ddL
#define SDB__DMSSU_CHANGECOLLECTIONFLAG                    0x10000000003deL
#define SDB__DMSSU_GETCOLLECTIONATTRIBUTES                 0x10000000003dfL
#define SDB__DMSSU_UPDATECOLLECTIONATTRIBUTES              0x10000000003e0L
#define SDB__DMSSU_GETSEGEXTENTS                           0x10000000003e1L
#define SDB__DMSSU_GETINDEXES                              0x10000000003e2L
#define SDB__DMSSU_GETINDEX                                0x10000000003e3L
#define SDB__DMSSU_DUMPINFO                                0x10000000003e4L
#define SDB__DMSSU_DUMPINFO1                               0x10000000003e5L
#define SDB__DMSSU_DUMPINFO2                               0x10000000003e6L
#define SDB__DMSSU_TOTALSIZE                               0x10000000003e7L
#define SDB__DMSSU_TOTALDATAPAGES                          0x10000000003e8L
#define SDB__DMSSU_TOTALDATASIZE                           0x10000000003e9L
#define SDB__DMSSU_TOTALFREEPAGES                          0x10000000003eaL
#define SDB__DMSSU_GETSTATINFO                             0x10000000003ebL
#define SDB__DMSSTORAGELOADEXT__ALLOCEXTENT                0x10000000003ecL
#define SDB__DMSSTORAGELOADEXT__IMPRTBLOCK                 0x10000000003edL
#define SDB__DMSSTORAGELOADEXT__LDDATA                     0x10000000003eeL
#define SDB__DMSSTORAGELOADEXT__ROLLEXTENT                 0x10000000003efL
#define SDB_DMSSTORAGELOBDATA_OPEN                         0x10000000003f0L
#define SDB_DMSSTORAGELOBDATA__REOPEN                      0x10000000003f1L
#define SDB_DMSSTORAGELOBDATA_CLOSE                        0x10000000003f2L
#define SDB_DMSSTORAGELOBDATA_WRITE                        0x10000000003f3L
#define SDB_DMSSTORAGELOBDATA_READ                         0x10000000003f4L
#define SDB_DMSSTORAGELOBDATA_READRAW                      0x10000000003f5L
#define SDB_DMSSTORAGELOBDATA_EXTEND                       0x10000000003f6L
#define SDB_DMSSTORAGELOBDATA__EXTEND                      0x10000000003f7L
#define SDB_DMSSTORAGELOBDATA_REMOVE                       0x10000000003f8L
#define SDB_DMSSTORAGELOBDATA__INITFILEHEADER              0x10000000003f9L
#define SDB_DMSSTORAGELOBDATA__VALIDATEFILE                0x10000000003faL
#define SDB_DMSSTORAGELOBDATA__FETFILEHEADER               0x10000000003fbL
#define SDB__DMSTMPCB_INIT                                 0x10000000003fcL
#define SDB__DMSTMPCB_RELEASE                              0x10000000003fdL
#define SDB__DMSTMPCB_RESERVE                              0x10000000003feL
#define SDB__DMS_LOBDIRECTINBUF_GETALIGNEDTUPLE            0x10000000003ffL
#define SDB__DMS_LOBDIRECTINBUF_CP2USRBUF                  0x1000000000400L
#define SDB__DMS_LOBDIRECTOUTBUF_GETALIGNEDTUPLE           0x1000000000401L
#define SDB_DMSCHKCSNM                                     0x1000000000402L
#define SDB_DMSCHKFULLCLNM                                 0x1000000000403L
#define SDB_DMSCHKCLNM                                     0x1000000000404L
#define SDB_DMSCHKINXNM                                    0x1000000000405L
#endif
