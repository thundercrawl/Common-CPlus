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
#ifndef clsTRACE_H__
#define clsTRACE_H__
// Component: cls
#define SDB__CLSSHDMGR_DECONSTRUCTOR                       0x800000037L
#define SDB__CLSSHDMGR_INIT                                0x800000038L
#define SDB__CLSSHDMGR_SETCATINFO                          0x800000039L
#define SDB__CLSSHDMGR_SYNCSND                             0x80000003aL
#define SDB__CLSSHDMGR_SND2CAT                             0x80000003bL
#define SDB__CLSSHDMGR_UPDCATGRP                           0x80000003cL
#define SDB__CLSSHDMGR_CLRALLDATA                          0x80000003dL
#define SDB__CLSSHDMGR_SYNCUPDCAT                          0x80000003eL
#define SDB__CLSSHDMGR_SYNCUPDGPINFO                       0x80000003fL
#define SDB__CLSSHDMGR_UPDPRM                              0x800000040L
#define SDB__CLSSHDMGR__SNDGPREQ                           0x800000041L
#define SDB__CLSSHDMGR__SENDCATAQUERYREQ                   0x800000042L
#define SDB__CLSSHDMGR__SNDCATREQ                          0x800000043L
#define SDB__CLSSHDMGR__SENDCSINFOREQ                      0x800000044L
#define SDB__CLSSHDMGR__ONCATGPRES                         0x800000045L
#define SDB__CLSSHDMGR__ONCATGRPRES                        0x800000046L
#define SDB__CLSSHDMGR__ONCATREQMSG                        0x800000047L
#define SDB__CLSSHDMGR__FNDCATSYNCEV                       0x800000048L
#define SDB__CLSSHDMGR__FNDCATSYNCEVN                      0x800000049L
#define SDB__CLSSHDMGR__FNDNMSYNCEV                        0x80000004aL
#define SDB__CLSSHDMGR__FNDNMSYNCEVN                       0x80000004bL
#define SDB__CLSSHDMGR__FNDCATNODEID                       0x80000004cL
#define SDB__CLSSHDMGR_GETANDLOCKCATSET                    0x80000004dL
#define SDB__CLSSHDMGR_GETNLCKGPITEM                       0x80000004eL
#define SDB_CLSCATAHASHMATCHER_PARSEANOBJ                  0x80000004fL
#define SDB_CLSCATAHASHMATCHER_PARSELOGICOP                0x800000050L
#define SDB_CLSCATAHASHMATCHER_PARSECMPOP                  0x800000051L
#define SDB_CLSCATAHASHMATCHER_CHECKOPOBJ                  0x800000052L
#define SDB_CLSCATAHASHMATCHER_MATCHES                     0x800000053L
#define SDB_CLSSYNCWIN                                     0x800000054L
#define SDB__CLSCTIM_UDIM                                  0x800000055L
#define SDB__CLSCTSET_GETALLGPID                           0x800000056L
#define SDB__CLSCTSET_ADDGPID                              0x800000057L
#define SDB__CLSCTSET_ADDSUBCLNAME                         0x800000058L
#define SDB__CLSCTSET_CLEARSUBCLNAME                       0x800000059L
#define SDB__CLSCTSET_ISINSDKEY                            0x80000005aL
#define SDB__CLSCTSET__CLEAR                               0x80000005bL
#define SDB__CLSCTSET_GENKEYOBJ                            0x80000005cL
#define SDB__CLSCTSET_FINDIM                               0x80000005dL
#define SDB__CLSCTSET__FINDIM                              0x80000005eL
#define SDB__CLSCTSET_FINDGPID                             0x80000005fL
#define SDB__CLSCTSET_FINDGPID2                            0x800000060L
#define SDB__CLSCTSET_FINDGPIDS                            0x800000061L
#define SDB__CLSCTSET_ISOBJINGP                            0x800000062L
#define SDB__CLSCTSET_ISKEYINGP                            0x800000063L
#define SDB__CLSCTSET_ISKEYONBD                            0x800000064L
#define SDB__CLSCTSET_SPLIT                                0x800000065L
#define SDB__CLSCTSET__DEDUP                               0x800000066L
#define SDB__CLSCTSET_TOCTINFOBSON                         0x800000067L
#define SDB__CLSCT_UDCATSET                                0x800000068L
#define SDB__CLSCTSET__ISOBJALLMK                          0x800000069L
#define SDB__CLSCTAGENT_GETALLNAMES                        0x80000006aL
#define SDB__CLSCTAGENT_CLVS                               0x80000006bL
#define SDB__CLSCTAGENT_CLINFO                             0x80000006cL
#define SDB__CLSCTAGENT_CLSET                              0x80000006dL
#define SDB__CLSCTAGENT__ADDCLSET                          0x80000006eL
#define SDB__CLSCTAGENT_UPCT                               0x80000006fL
#define SDB__CLSCTAGENT_CLEAR                              0x800000070L
#define SDB__CLSCTAGENT_CRBYSPACENAME                      0x800000071L
#define SDB__CLSCTAGENT_CLALL                              0x800000072L
#define SDB__CLSGPIM_GETNDID2                              0x800000073L
#define SDB__CLSGPIM_GETNDID                               0x800000074L
#define SDB__CLSGPIM_GETNDINFO1                            0x800000075L
#define SDB__CLSGPIM_GETNDINFO2                            0x800000076L
#define SDB__CLSGPIM_GETNDINFO3                            0x800000077L
#define SDB__CLSGPIM_UPPRRIMARY                            0x800000078L
#define SDB__CLSGPIM_UPNODESTAT                            0x800000079L
#define SDB__CLSNDMGRAG_GPVS                               0x80000007aL
#define SDB__CLDNDMGRAGENT_GPID2NAME                       0x80000007bL
#define SDB__CLSNDMGRAGENT_GPNM2ID                         0x80000007cL
#define SDB__CLSNDMGRAGENT_GPNDCOUNT                       0x80000007dL
#define SDB__CLSNDMGRAGENT_GPPRYND                         0x80000007eL
#define SDB__CLSNDMGRAGENT_CELPRY                          0x80000007fL
#define SDB__CLSNDMGRAGENT_GPIM1                           0x800000080L
#define SDB__CLSNDMGRAGENT_GPIM2                           0x800000081L
#define SDB__CLSNDMGRAGENT_CLALL                           0x800000082L
#define SDB__CLSNDMGRAGENT_CLGP                            0x800000083L
#define SDB__CLSNDMGRAGENT_UPGPINFO                        0x800000084L
#define SDB__CLSNDMGRAGENT__ADDGPIM                        0x800000085L
#define SDB__CLSNDMGRAGENT__ADDGPNAME                      0x800000086L
#define SDB__CLSVSPMY_HDTMOUT                              0x800000087L
#define SDB__CLSVSPMY_ACTIVE                               0x800000088L
#define SDB__CLSVSANN_HDINPUT                              0x800000089L
#define SDB__CLSVSANN_HDTMOUT                              0x80000008aL
#define SDB__CLSVSANN_ACTIVE                               0x80000008bL
#define SDB__CLSREPPSET_NOTIFY2SESSION                     0x80000008cL
#define SDB__CLSREPSET_REGSN                               0x80000008dL
#define SDB__CLSREPSET_UNREGSN                             0x80000008eL
#define SDB__CLSREPSET_INIT                                0x80000008fL
#define SDB__CLSREPSET_ACTIVE                              0x800000090L
#define SDB__CLSREPSET__SETGPSET                           0x800000091L
#define SDB__CLSREPSET_GETPRMY                             0x800000092L
#define SDB__CLSREPSET_GETGPINFO                           0x800000093L
#define SDB__CLSREPSET_ONTMR                               0x800000094L
#define SDB__CLSREPSET_HNDMSG                              0x800000095L
#define SDB__CLSREPSET__HNDGPRES                           0x800000096L
#define SDB__CLSREPSET__SHRBEAT                            0x800000097L
#define SDB__CLSREPSET__CHKBRK                             0x800000098L
#define SDB__CLSREPSET__HNDSHRBEAT                         0x800000099L
#define SDB__CLSREPSET__ALIVE                              0x80000009aL
#define SDB__CLSREPSET__CANASSIGNLOGPAGE                   0x80000009bL
#define SDB_CLSCATAPREDICATETREE_ADDCHILD                  0x80000009cL
#define SDB_CLSCATAPREDICATETREE_CLEAR                     0x80000009dL
#define SDB_CLSCATAPREDICATETREE_ADDPREDICATE              0x80000009eL
#define SDB_CLSCATAPREDICATETREE_ADJUSTBYSHARDINGKEY       0x80000009fL
#define SDB_CLSCATAPREDICATETREE_ISUNIVERSE                0x8000000a0L
#define SDB_CLSCATAPREDICATETREE_MATCHES                   0x8000000a1L
#define SDB__CLSMGR_ACTIVE                                 0x8000000a2L
#define SDB__CLSMGR_FINAL                                  0x8000000a3L
#define SDB__CLSMGR__STRATEDU                              0x8000000a4L
#define SDB__CLSMGR__ONPRMCHG                              0x8000000a5L
#define SDB__CLSMGR_INVDATACAT                             0x8000000a6L
#define SDB__CLSMGR_STARTINSN                              0x8000000a7L
#define SDB__CLSMGR_STARTTSKCHK                            0x8000000a8L
#define SDB__CLSMGR__DFTMSGFUNC                            0x8000000a9L
#define SDB__CLSMGR_ONTMR                                  0x8000000aaL
#define SDB__CLSMGR__STARTINSN                             0x8000000abL
#define SDB__CLSMGR__PREPTASK                              0x8000000acL
#define SDB__CLSMGR__ADDTSKINSN                            0x8000000adL
#define SDB__CLSMGR_SETTMR                                 0x8000000aeL
#define SDB__CLSMGR_KILLTMR                                0x8000000afL
#define SDB__CLSMGR__SNDREGMSG                             0x8000000b0L
#define SDB__CLSMGR__SNDQTSKREQ                            0x8000000b1L
#define SDB__CLSMGR__ONCATREGRES                           0x8000000b2L
#define SDB__CLSMGR__ONCATQTSKRES                          0x8000000b3L
#define SDB__CLSCATCLR_CALL                                0x8000000b4L
#define SDB__CLSCATCLR_REMOVE                              0x8000000b5L
#define SDB__CLSCATCLR_HNDTMOUT                            0x8000000b6L
#define SDB__CLSDSTREPSN__CLSDSTREPSN                      0x8000000b7L
#define SDB__CLSDSTREPSN_ONTIMER                           0x8000000b8L
#define SDB__CLSDSTREPSN_HNDSYNCRES                        0x8000000b9L
#define SDB__CLSDSTREPSN_HNDNTF                            0x8000000baL
#define SDB__CLSDSTREPSN_HNDSSTRES                         0x8000000bbL
#define SDB__CLSDSTREPSN__FULLSYNC                         0x8000000bcL
#define SDB__CLSDSTREPSN__RLBCK                            0x8000000bdL
#define SDB__CLSDSTREPSN__SNDSYNCREQ                       0x8000000beL
#define SDB__CLSDSTREPSN__SNDCSTREQ                        0x8000000bfL
#define SDB__CLSDSTREPSN__REPLG                            0x8000000c0L
#define SDB__CLSSRCREPSN__CLSREPSN                         0x8000000c1L
#define SDB__CLSSRCREPSN_ONTIMER                           0x8000000c2L
#define SDB__CLSSRCREPSN_HNDSYNCREQ                        0x8000000c3L
#define SDB__CLSSRCREPSN_HNDVIRSYNCREQ                     0x8000000c4L
#define SDB__CLSSRCREPSN_HNDCSTREQ                         0x8000000c5L
#define SDB__CLSSRCREPSN__SYNCLOG                          0x8000000c6L
#define SDB__CLSTKMGR_ADDTK                                0x8000000c7L
#define SDB__CLSTKMGR_RVTK1                                0x8000000c8L
#define SDB__CLSTKMGR_RVTK2                                0x8000000c9L
#define SDB__CLSSPLITTK_INIT                               0x8000000caL
#define SDB__CLSSPLITTK_MXON                               0x8000000cbL
#define SDB__CLSDATADBS_ONTIMER                            0x8000000ccL
#define SDB__CLSDATADBS_ONRECV                             0x8000000cdL
#define SDB__CLSDATADBS__DISCONN                           0x8000000ceL
#define SDB__CLSDATADBS__META                              0x8000000cfL
#define SDB__CLSDATADBS__INDEX                             0x8000000d0L
#define SDB__CLSDATADBS__NOTIFY                            0x8000000d1L
#define SDB__CLSDATADBS__MORE                              0x8000000d2L
#define SDB__CLSDATADBS__ADDDCL                            0x8000000d3L
#define SDB__CLSDATADBS__RMCL                              0x8000000d4L
#define SDB__CLSDATADBS__RMCS                              0x8000000d5L
#define SDB__CLSDATADBS__EXTFLLNMS                         0x8000000d6L
#define SDB__CLSDATADBS__EXTMETA                           0x8000000d7L
#define SDB__CLSDATADBS__EXTINX                            0x8000000d8L
#define SDB__CLSDATADBS_HNDMETARES                         0x8000000d9L
#define SDB__CLSDATADBS_HNDINXRES2                         0x8000000daL
#define SDB__CLSDATADBS_HNDNTFRES                          0x8000000dbL
#define SDB__CLSDATADBS__REPLAYDOC                         0x8000000dcL
#define SDB__CLSDATADBS__REPLAYLOB                         0x8000000ddL
#define SDB__CLSDATADBS__REPLAYLOG                         0x8000000deL
#define SDB__CLSFSDS_HNDBGRES                              0x8000000dfL
#define SDB__CLSFSDS_HNDENDRES                             0x8000000e0L
#define SDB__CLSFSDS__BEGIN                                0x8000000e1L
#define SDB__CLSFSDS__END                                  0x8000000e2L
#define SDB__CLSFSDS__ISREADY                              0x8000000e3L
#define SDB__CLSFSDS__ONDETACH                             0x8000000e4L
#define SDB__CLSFSDS__ENDLOG                               0x8000000e5L
#define SDB__CLSSPLDS_ONATH                                0x8000000e6L
#define SDB__CLSSPLDS__ONDTH                               0x8000000e7L
#define SDB__CLSSPLDS__ISREADY                             0x8000000e8L
#define SDB__CLSSPLDS__BEGIN                               0x8000000e9L
#define SDB__CLSSPLDS__LEND                                0x8000000eaL
#define SDB__CLSSPLDS__END                                 0x8000000ebL
#define SDB__CLSSPLDS__TSKNTF                              0x8000000ecL
#define SDB__CLSSPLDS_HNDNTFRES                            0x8000000edL
#define SDB__CLSSPLDS_HNDBGRES                             0x8000000eeL
#define SDB__CLSSPLDS_HNDENDRES                            0x8000000efL
#define SDB__CLSSPLDS_HNDENDRES2                           0x8000000f0L
#define SDB__CLSVSSL_HDINPUT                               0x8000000f1L
#define SDB__CLSVSSL_HDTMOUT                               0x8000000f2L
#define SDB__CLSVSSL_ACTIVE                                0x8000000f3L
#define SDB__CLSDSBS__RESET                                0x8000000f4L
#define SDB__CLSDSBS__RESEND                               0x8000000f5L
#define SDB__CLSDSBS__ERSDFTINX                            0x8000000f6L
#define SDB__CLSDSBS__OPNCONTX                             0x8000000f7L
#define SDB__CLSDSBS__CONSTINX                             0x8000000f8L
#define SDB__CLSDSBS__CONSTFULLNMS                         0x8000000f9L
#define SDB__CLSDSBS__CONSTMETA                            0x8000000faL
#define SDB__CLSDSBS__GETCSNM                              0x8000000fbL
#define SDB__CLSDSBS__GETCL                                0x8000000fcL
#define SDB__CLSDSBS__GETRGEKEY                            0x8000000fdL
#define SDB__CLSDSBS__DISCONN                              0x8000000feL
#define SDB__CLSDSBS__SYNCLOB                              0x8000000ffL
#define SDB__CLSDSBS__SYNCLOG                              0x800000100L
#define SDB__CLSDSBS__SYNCRECD                             0x800000101L
#define SDB__CLSDSBS_HNDFSMETA                             0x800000102L
#define SDB__CLSDSBS_HNDFSINX                              0x800000103L
#define SDB__CLSDSBS_HNDFSNTF                              0x800000104L
#define SDB__CLSFSSS_HNDBEGIN                              0x800000105L
#define SDB__CLSFSSS_HNDEND                                0x800000106L
#define SDB__CLSFSSS_HNDTRANSREQ                           0x800000107L
#define SDB__CLSFSSS_NTFLSN                                0x800000108L
#define SDB__CLSSPLSS_NTFLSN                               0x800000109L
#define SDB__CLSSPLSS__ONFSMETA                            0x80000010aL
#define SDB__CLSSPLSS_HNDBEGIN                             0x80000010bL
#define SDB__CLSSPLSS_HNDEND                               0x80000010cL
#define SDB__CLSSPLSS_HNDEND2                              0x80000010dL
#define SDB__CLSSPLSS__GENKEYOBJ                           0x80000010eL
#define SDB__CLSSPLSS__ADD2FMB                             0x80000010fL
#define SDB__CLSSPLSS__ONOBJFLT                            0x800000110L
#define SDB__CLSSPLSS__ONATH                               0x800000111L
#define SDB__CLSSPLSS__ONDTH                               0x800000112L
#define SDB__CLSSPLSS__ONLOBFILTER                         0x800000113L
#define SDB_CLSCATAMATCHER_LOADPATTERN                     0x800000114L
#define SDB_CLSCATAMATCHER_PARSEANOBJ                      0x800000115L
#define SDB_CLSCATAMATCHER_PARSELOGICOP                    0x800000116L
#define SDB_CLSCATAMATCHER_PARSECMPOP                      0x800000117L
#define SDB_CLSCATAMATCHER_ISOPOBJ                         0x800000118L
#define SDB__CLSVTMH_INIT                                  0x800000119L
#define SDB__CLSVTMH_CLEAR                                 0x80000011aL
#define SDB__CLSVTMH_HDINPUT                               0x80000011bL
#define SDB__CLSVTMH_HDTMOUT                               0x80000011cL
#define SDB__CLSVTMH_FORCE                                 0x80000011dL
#define SDB__CLSSRCSL__CLSSRCSL                            0x80000011eL
#define SDB__CLSSRCSL_GETFLSYNSRC                          0x80000011fL
#define SDB__CLSSRCSL_GETSYNCSRC                           0x800000120L
#define SDB__CLSSRCSL_SLTED                                0x800000121L
#define SDB__CLSSRCSL_SLPMY                                0x800000122L
#define SDB__CLSVSVT_HDINPUT                               0x800000123L
#define SDB__CLSVSVT_HDTMOUT                               0x800000124L
#define SDB__CLSVSVT_ACTIVE                                0x800000125L
#define SDB__CLSSPLIT_INIT                                 0x800000126L
#define SDB__CLSSPLIT_DOIT                                 0x800000127L
#define SDB__CLSLINKCL_INIT                                0x800000128L
#define SDB__CLSUNLINKCL_INIT                              0x800000129L
#define SDB__RTNALTERCL_DOIT                               0x80000012aL
#define SDB__CLSVSSD_HDINPUT                               0x80000012bL
#define SDB__CLSVSSD_HDTMOUT                               0x80000012cL
#define SDB__CLSVSSD_ACTIVE                                0x80000012dL
#define SDB__CLSCLNJOB_DOIT                                0x80000012eL
#define SDB__CLSCLNJOB__FILTERDEL                          0x80000012fL
#define SDB__CLSCLNJOB__CLEANLOBDATA                       0x800000130L
#define SDB__CLSCLNJOB__CLNBYTBSCAN                        0x800000131L
#define SDB__CLSCLNJOB__FLTDEL                             0x800000132L
#define SDB_STRARTCLNJOB                                   0x800000133L
#define SDB__CLSREP_REPLAY                                 0x800000134L
#define SDB__CLSREP_ROLBCK                                 0x800000135L
#define SDB_STARTINXJOB                                    0x800000136L
#define SDB__CLSSYNCMAG__CLSSYNCMAG                        0x800000137L
#define SDB__CLSSYNCMAG_GETARBITLSN                        0x800000138L
#define SDB__CLSSYNCMAG_UPNFYLIST                          0x800000139L
#define SDB__CLSSYNCMAG_SYNC                               0x80000013aL
#define SDB__CLSSYNCMAG_COMPLETE                           0x80000013bL
#define SDB__CLSSYNCMAG_NOTIFY                             0x80000013cL
#define SDB__CLSSYNCMAG_GETSYNCSRC                         0x80000013dL
#define SDB__CLSSYNCMAG_GETFULLSRC                         0x80000013eL
#define SDB__CLSSYNCMAG_CUT                                0x80000013fL
#define SDB__CLSSYNCMAG__COMPLETE                          0x800000140L
#define SDB__CLSSYNCMAG__WAKE                              0x800000141L
#define SDB__CLSSYNCMAG__CTWAKEPLAN                        0x800000142L
#define SDB__CLSSYNCMAG__WAIT                              0x800000143L
#define SDB__CLSSYNCMAG__CRSYNCLIST                        0x800000144L
#define SDB__CLSVTSTUS__LAU                                0x800000145L
#define SDB__CLSVTSTUS__LAU1                               0x800000146L
#define SDB__CLSVTSTUS__BCALIVES                           0x800000147L
#define SDB__CLSSDSESS__CLSSHDSESS                         0x800000148L
#define SDB__CLSSHDSESS_ONRV                               0x800000149L
#define SDB__CLSSHDSESS_TMOUT                              0x80000014aL
#define SDB__CLSSHDSESS__ONDETACH                          0x80000014bL
#define SDB__CLSSHDSESS__DFMSGFUNC                         0x80000014cL
#define SDB__CLSSHDSESS__CK                                0x80000014dL
#define SDB__CLSSHDSESS__CKCATA                            0x80000014eL
#define SDB__CLSSHDSESS__REPLY                             0x80000014fL
#define SDB__CLSSHDSESS__ONOPMSG                           0x800000150L
#define SDB__CLSSHDSESS__ONUPREQMSG                        0x800000151L
#define SDB__CLSSHDSESS__ONINSTREQMSG                      0x800000152L
#define SDB__CLSSHDSESS__ONDELREQMSG                       0x800000153L
#define SDB__CLSSHDSESS__ONQYREQMSG                        0x800000154L
#define SDB__CLSSHDSESS__ONGETMOREREQMSG                   0x800000155L
#define SDB__CLSSHDSESS__ONKILLCTXREQMSG                   0x800000156L
#define SDB__CLSSHDSESS__ONINRPTMSG                        0x800000157L
#endif
