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
#ifndef dpsTRACE_H__
#define dpsTRACE_H__
// Component: dps
#define SDB_DPSLOCKBUCKET_ACQUIRE                          0x100000069eL
#define SDB_DPSLOCKBUCKET_WAITLOCKX                        0x100000069fL
#define SDB_DPSLOCKBUCKET_UPGRADE                          0x10000006a0L
#define SDB_DPSLOCKBUCKET_LOCKID                           0x10000006a1L
#define SDB_DPSLOCKBUCKET_APPENDTORUN                      0x10000006a2L
#define SDB_DPSLOCKBUCKET_APPENDTOWAIT                     0x10000006a3L
#define SDB_DPSLOCKBUCKET_APPENDHEADTOWAIT                 0x10000006a4L
#define SDB_DPSLOCKBUCKET_REMOVEFROMRUN                    0x10000006a5L
#define SDB_DPSLOCKBUCKET_REMOVEFROMWAIT                   0x10000006a6L
#define SDB_DPSLOCKBUCKET_WAITLOCK                         0x10000006a7L
#define SDB_DPSLOCKBUCKET_WAKEUP                           0x10000006a8L
#define SDB_DPSLOCKBUCKET_CHECKCOMPATIBLE                  0x10000006a9L
#define SDB_DPSLOCKBUCKET_TEST                             0x10000006aaL
#define SDB_DPSLOCKBUCKET_TRYACQUIRE                       0x10000006abL
#define SDB_DPSLOCKBUCKET_TRYACQUIREORAPPEND               0x10000006acL
#define SDB_DPSLOCKBUCKET_HASWAIT                          0x10000006adL
#define SDB__DPSLGRECD_LOAD                                0x10000006aeL
#define SDB__DPSLGRECD_FIND                                0x10000006afL
#define SDB__DPSLGRECD_PUSH                                0x10000006b0L
#define SDB__DPSLGRECD_DUMP                                0x10000006b1L
#define SDB_DPSTRANSCB_SVTRANSINFO                         0x10000006b2L
#define SDB_DPSTRANSCB_ADDTRANSCB                          0x10000006b3L
#define SDB_DPSTRANSCB_DELTRANSCB                          0x10000006b4L
#define SDB_DPSTRANSCB_SAVETRANSINFOFROMLOG                0x10000006b5L
#define SDB_DPSTRANSCB_TERMALLTRANS                        0x10000006b6L
#define SDB__DPSLOGFILE_INIT                               0x10000006b7L
#define SDB__DPSLOGFILE__RESTRORE                          0x10000006b8L
#define SDB__DPSLOGFILE_RESET                              0x10000006b9L
#define SDB__DPSLOGFILE__FLUSHHD                           0x10000006baL
#define SDB__DPSLOGFILE__RDHD                              0x10000006bbL
#define SDB__DPSLOGFILE_WRITE                              0x10000006bcL
#define SDB__DPSLOGFILE_READ                               0x10000006bdL
#define SDB__DPSMSGBLK_EXTEND                              0x10000006beL
#define SDB__DPS_INSERT2RECORD                             0x10000006bfL
#define SDB_DPS_INSERT2RECORD                              0x10000006c0L
#define SDB__DPS_UPDATE2RECORD                             0x10000006c1L
#define SDB__DPS_RECORD2UPDATE                             0x10000006c2L
#define SDB__DPS_DELETE2RECORD                             0x10000006c3L
#define SDB__DPS_RECORD2DELETE                             0x10000006c4L
#define SDB__DPS_CSCRT2RECORD                              0x10000006c5L
#define SDB__DPS_RECORD2CSCRT                              0x10000006c6L
#define SDB__DPS_CSDEL2RECORD                              0x10000006c7L
#define SDB__DPS_RECORD2CSDEL                              0x10000006c8L
#define SDB__DPS_CLCRT2RECORD                              0x10000006c9L
#define SDB__DPS_RECORD2CLCRT                              0x10000006caL
#define SDB__DPS_CLDEL2RECORD                              0x10000006cbL
#define SDB__DPS_RECORD2CLDEL                              0x10000006ccL
#define SDB__DPS_IXCRT2RECORD                              0x10000006cdL
#define SDB__DPS_RECORD2IXCRT                              0x10000006ceL
#define SDB__DPS_IXDEL2RECORD                              0x10000006cfL
#define SDB__DPS_RECORD2IXDEL                              0x10000006d0L
#define SDB__DPS_CLRENAME2RECORD                           0x10000006d1L
#define SDB__DPS_RECORD2CLRENAME                           0x10000006d2L
#define SDB__DPS_CLTRUNC2RECORD                            0x10000006d3L
#define SDB__DPS_RECORD2CLTRUNC                            0x10000006d4L
#define SDB__DPS_RECORD2TRANSCOMMIT                        0x10000006d5L
#define SDB__DPS_TRANSCOMMIT2RECORD                        0x10000006d6L
#define SDB__DPS_TRANSROLLBACK2RECORD                      0x10000006d7L
#define SDB__DPS_INVALIDCATA2RECORD                        0x10000006d8L
#define SDB__DPS_RECORD2INVALIDCATA                        0x10000006d9L
#define SDB__DPS_LOBW2RECORD                               0x10000006daL
#define SDB__DPS_RECORD2LOBW                               0x10000006dbL
#define SDB__DPS_LOBU2RECORD                               0x10000006dcL
#define SDB__DPS_RECORD2LOBU                               0x10000006ddL
#define SDB__DPS_LOBRM2RECORD                              0x10000006deL
#define SDB__DPS_RECORD2LOBRM                              0x10000006dfL
#define SDB__DPS_LOBTRUNCATE2RECORD                        0x10000006e0L
#define SDB__DPS_RECORD2LOBTRUNCATE                        0x10000006e1L
#define SDB__DPSRPCMGR_INIT                                0x10000006e2L
#define SDB__DPSRPCMGR__RESTRORE                           0x10000006e3L
#define SDB__DPSRPCMGR_PREPAGES                            0x10000006e4L
#define SDB__DPSRPCMGR_WRITEDATA                           0x10000006e5L
#define SDB__DPSRPCMGR_MERGE                               0x10000006e6L
#define SDB__DPSRPCMGR_GETLSNWIN                           0x10000006e7L
#define SDB__DPSRPCMGR_GETLSNWIN2                          0x10000006e8L
#define SDB__DPSRPCMGR__MVPAGES                            0x10000006e9L
#define SDB__DPSRPCMGR_MOVE                                0x10000006eaL
#define SDB__DPSRPCMGR__GETSTARTLSN                        0x10000006ebL
#define SDB__DPSRPCMGR__SEARCH                             0x10000006ecL
#define SDB__DPSRPCMGR__PARSE                              0x10000006edL
#define SDB__DPSRPCMGR_SEARCH                              0x10000006eeL
#define SDB__DPSRPCMGR__ALLOCATE                           0x10000006efL
#define SDB__DPSRPCMGR__PSH2SNDQUEUE                       0x10000006f0L
#define SDB__DPSRPCMGR__MRGLOGS                            0x10000006f1L
#define SDB__DPSRPCMGR__MRGPAGE                            0x10000006f2L
#define SDB__DPSRPCMGR_RUN                                 0x10000006f3L
#define SDB__DPSRPCMGR__FLUSHALL                           0x10000006f4L
#define SDB__DPSRPCMGR_TEARDOWN                            0x10000006f5L
#define SDB__DPSRPCMGR__FLUSHPAGE                          0x10000006f6L
#define SDB_DPSTRANSLOCK_ACQUIREX                          0x10000006f7L
#define SDB_DPSTRANSLOCK_ACQUIRES                          0x10000006f8L
#define SDB_DPSTRANSLOCK_ACQUIREIX                         0x10000006f9L
#define SDB_DPSTRANSLOCK_ACQUIREIS                         0x10000006faL
#define SDB_DPSTRANSLOCK_RELEASE                           0x10000006fbL
#define SDB_DPSTRANSLOCK_RELEASEALL                        0x10000006fcL
#define SDB_DPSTRANSLOCK_UPGRADE                           0x10000006fdL
#define SDB_DPSTRANSLOCK_UPGRADECHECK                      0x10000006feL
#define SDB_DPSTRANSLOCK_GETBUCKET                         0x10000006ffL
#define SDB_DPSTRANSLOCK_TESTS                             0x1000000700L
#define SDB_DPSTRANSLOCK_TESTUPGRADE                       0x1000000701L
#define SDB_DPSTRANSLOCK_TESTIS                            0x1000000702L
#define SDB_DPSTRANSLOCK_TESTX                             0x1000000703L
#define SDB_DPSTRANSLOCK_TESTIX                            0x1000000704L
#define SDB_DPSTRANSLOCK_TRYX                              0x1000000705L
#define SDB_DPSTRANSLOCK_TRYS                              0x1000000706L
#define SDB_DPSTRANSLOCK_TRYIX                             0x1000000707L
#define SDB_DPSTRANSLOCK_TRYIS                             0x1000000708L
#define SDB_DPSTRANSLOCK_TRYUPGRADE                        0x1000000709L
#define SDB_DPSTRANSLOCK_TRYUPGRADEORAPPEND                0x100000070aL
#define SDB_DPSTRANSLOCK_TRYORAPPENDX                      0x100000070bL
#define SDB_DPSTRANSLOCK_WAIT                              0x100000070cL
#define SDB_DPSTRANSLOCK_HASWAIT                           0x100000070dL
#define SDB__DPSLGFILEMGR_INIT                             0x100000070eL
#define SB__DPSLGFILEMGR__ANLYS                            0x100000070fL
#define SDB__DPSLGFILEMGR_FLUSH                            0x1000000710L
#define SDB__DPSLGFILEMGR_LOAD                             0x1000000711L
#define SDB__DPSLGFILEMGR_MOVE                             0x1000000712L
#define SDB__DPSLGPAGE                                     0x1000000713L
#define SDB__DPSLGPAGE2                                    0x1000000714L
#define SDB__DPSMGBLK_CLEAR                                0x1000000715L
#define SDB__DPSLGWRAPP_RECDROW                            0x1000000716L
#define SDB__DPSLGWRAPP_PREPARE                            0x1000000717L
#endif
