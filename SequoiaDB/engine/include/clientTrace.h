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
#ifndef clientTRACE_H__
#define clientTRACE_H__
// Component: client
#define SDB_CLIENT__SETCOLLECTIONINCUR                     0x40000000015fL
#define SDB_CURSORIMPL__SETCONNECTIONINCUR                 0x400000000160L
#define SDB_CLIENT__KILLCURSOR                             0x400000000161L
#define SDB_CLIENT__READNEXTBUF                            0x400000000162L
#define SDB_CLIENT_NEXT                                    0x400000000163L
#define SDB_CLIENT_CURRENT                                 0x400000000164L
#define SDB_CLIENT_CLOSECURSOR                             0x400000000165L
#define SDB_CLIENT_UPDATECURRENT                           0x400000000166L
#define SDB_CLIENT_DELCURRENT                              0x400000000167L
#define SDB_CLIMPL__SETNAME                                0x400000000168L
#define SDB_CLIMPL__APPENDOID                              0x400000000169L
#define SDB_CLIMPL__SETCONNECTIONINCL                      0x40000000016aL
#define SDB_CLIMPL__GETCONNECTIONINCL                      0x40000000016bL
#define SDB_CLIENT_GETCOUNT                                0x40000000016cL
#define SDB_CLIENT_BULKINSERT                              0x40000000016dL
#define SDB_CLIENT_INSERT                                  0x40000000016eL
#define SDB_CLIENT__UPDATE                                 0x40000000016fL
#define SDB_CLIENT_DEL                                     0x400000000170L
#define SDB_CLIENT_QUERY                                   0x400000000171L
#define SDB_CLIENT_GETQUERYMETA                            0x400000000172L
#define SDB_CLIENT_RENAME                                  0x400000000173L
#define SDB_CLIENT_CREATEINDEX                             0x400000000174L
#define SDB_CLIENT_GETINDEXES                              0x400000000175L
#define SDB_CLIENT_DROPINDEX                               0x400000000176L
#define SDB_CLIENT_CREATEINCL                              0x400000000177L
#define SDB_CLIENT_DROPINCL                                0x400000000178L
#define SDB_CLIENT_SPLIT                                   0x400000000179L
#define SDB_CLIENT_SPLIT2                                  0x40000000017aL
#define SDB_CLIENT_SPLITASYNC                              0x40000000017bL
#define SDB_CLIENT_SPLITASYNC2                             0x40000000017cL
#define SDB_CLIENT_AGGREGATE                               0x40000000017dL
#define SDB_CLIENT_ATTACHCOLLECTION                        0x40000000017eL
#define SDB_CLIENT_DETACHCOLLECTION                        0x40000000017fL
#define SDB_CLIENT_ALTERCOLLECTION                         0x400000000180L
#define SDB_CLIENT_EXPLAIN                                 0x400000000181L
#define SDB_CLIENT_CREATELOB                               0x400000000182L
#define SDB_CLIENT_REMOVELOB                               0x400000000183L
#define SDB_CLIENT_OPENLOB                                 0x400000000184L
#define SDB_CLIENT_LISTLOBS                                0x400000000185L
#define SDB_CLIENT_RUNCMDOFLOB                             0x400000000186L
#define SDB_CLIENT_GETLOBOBJ                               0x400000000187L
#define SDB_CLIENT_CONNECTINRN                             0x400000000188L
#define SDB_CLIENT_GETSTATUS                               0x400000000189L
#define SDB_CLIENT__STOPSTART                              0x40000000018aL
#define SDB_CLIENT_GETNODENUM                              0x40000000018bL
#define SDB_CLIENT_CREATENODE                              0x40000000018cL
#define SDB_CLIENT_REMOVENODE                              0x40000000018dL
#define SDB_CLIENT_GETDETAIL                               0x40000000018eL
#define SDB_CLIENT__EXTRACTNODE                            0x40000000018fL
#define SDB_CLIENT_GETMASETER                              0x400000000190L
#define SDB_CLIENT_GETSLAVE                                0x400000000191L
#define SDB_CLIENT_GETNODE1                                0x400000000192L
#define SDB_CLIENT_GETNODE2                                0x400000000193L
#define SDB_CLIENT_STARTRS                                 0x400000000194L
#define SDB_CLIENT_STOPRS                                  0x400000000195L
#define SDB_CLIENT__SETNAME                                0x400000000196L
#define SDB_SDBCSIMPL__SETCONNECTIONINCS                   0x400000000197L
#define SDB_CLIENT_GETCOLLECTIONINCS                       0x400000000198L
#define SDB_CLIENT_CREATECOLLECTION                        0x400000000199L
#define SDB_CLIENT_DROPCOLLECTION                          0x40000000019aL
#define SDB_CLIENT_CREATECS                                0x40000000019bL
#define SDB_CLIENT_DROPCS                                  0x40000000019cL
#define SDB_CLIENT__DOMAINSETCONNECTION                    0x40000000019dL
#define SDB_CLIENT__DOMAINSETNAME                          0x40000000019eL
#define SDB_CLIENT_ALTERDOMAIN                             0x40000000019fL
#define SDB_CLIENT_LISTCSINDOMAIN                          0x4000000001a0L
#define SDB_CLIENT_LISTCLINDOMAIN                          0x4000000001a1L
#define SDB_CLIENT__SETCONNECTIONINLOB                     0x4000000001a2L
#define SDB_CLIENT__SETCOLLECTIONINLOB                     0x4000000001a3L
#define SDB_CLIENT__READINCACHE                            0x4000000001a4L
#define SDB_CLIENT__REVISEREADLEN                          0x4000000001a5L
#define SDB_CLIENT__ONCEREAD                               0x4000000001a6L
#define SDB_CLIENT_CLOSE                                   0x4000000001a7L
#define SDB_CLIENT_READ                                    0x4000000001a8L
#define SDB_CLIENT_WRITE                                   0x4000000001a9L
#define SDB_CLIENT_SEEK                                    0x4000000001aaL
#define SDB_CLIENT_ISCLOSED2                               0x4000000001abL
#define SDB_CLIENT_GETOID2                                 0x4000000001acL
#define SDB_CLIENT_GETSIZE2                                0x4000000001adL
#define SDB_CLIENT_GETCREATETIME2                          0x4000000001aeL
#define SDB_CLIENT_ISCLOSED                                0x4000000001afL
#define SDB_CLIENT_GETOID                                  0x4000000001b0L
#define SDB_CLIENT_GETSIZE                                 0x4000000001b1L
#define SDB_CLIENT_GETCREATETIME                           0x4000000001b2L
#define SDB_CLIENT__DISCONNECT                             0x4000000001b3L
#define SDB_CLIENT__CONNECT                                0x4000000001b4L
#define SDB_CLIENT_CONNECTWITHPORT                         0x4000000001b5L
#define SDB_CLIENT_CONNECTWITHSERVALADDR                   0x4000000001b6L
#define SDB_CLIENT_CREATEUSR                               0x4000000001b7L
#define SDB_CLIENT_REMOVEUSR                               0x4000000001b8L
#define SDB_CLIENT_GETSNAPSHOT                             0x4000000001b9L
#define SDB_CLIENT_RESETSNAPSHOT                           0x4000000001baL
#define SDB_CLIENT_GETLIST                                 0x4000000001bbL
#define SDB_CLIENT_CONNECTWITHSERVERNAME                   0x4000000001bcL
#define SDB_CLIENT_DISCONNECT                              0x4000000001bdL
#define SDB_CLIENT__REALLOCBUFFER                          0x4000000001beL
#define SDB_CLIENT__SEND                                   0x4000000001bfL
#define SDB_CLIENT__RECV                                   0x4000000001c0L
#define SDB_CLIENT__RECVEXTRACT                            0x4000000001c1L
#define SDB_CLIENT__RUNCOMMAND                             0x4000000001c2L
#define SDB_CLIENT_GETCOLLECTIONINSDB                      0x4000000001c3L
#define SDB_CLIENT_GETCOLLECTIONSPACE                      0x4000000001c4L
#define SDB_CLIENT_CREATECOLLECTIONSPACE                   0x4000000001c5L
#define SDB_CLIENT_CREATECOLLECTIONSPACE2                  0x4000000001c6L
#define SDB_CLIENT_DROPCOLLECTIONSPACE                     0x4000000001c7L
#define SDB_CLIENT_GETRGWITHNAME                           0x4000000001c8L
#define SDB_CLIENT_GETRGWITHID                             0x4000000001c9L
#define SDB_CLIENT_CREATERG                                0x4000000001caL
#define SDB_CLIENT_REMOVERG                                0x4000000001cbL
#define SDB_CLIENT_CREATECATARG                            0x4000000001ccL
#define SDB_CLIENT_ACTIVATERG                              0x4000000001cdL
#define SDB_CLIENT_EXECUPDATE                              0x4000000001ceL
#define SDB_CLIENT_EXEC                                    0x4000000001cfL
#define SDB_CLIENT_TRANSBEGIN                              0x4000000001d0L
#define SDB_CLIENT_TRANSCOMMIT                             0x4000000001d1L
#define SDB_CLIENT_TRANSROLLBACK                           0x4000000001d2L
#define SDB_CLIENT_FLUSHCONGIGURE                          0x4000000001d3L
#define SDB_CLIENT_CRTJSPROCEDURE                          0x4000000001d4L
#define SDB_CLIENT_RMPROCEDURE                             0x4000000001d5L
#define SDB_CLIENT_LISTPROCEDURES                          0x4000000001d6L
#define SDB_CLIENT_EVALJS                                  0x4000000001d7L
#define SDB_CLIENT_BACKUPOFFLINE                           0x4000000001d8L
#define SDB_CLIENT_LISTBACKUP                              0x4000000001d9L
#define SDB_CLIENT_REMOVEBACKUP                            0x4000000001daL
#define SDB_CLIENT_LISTTASKS                               0x4000000001dbL
#define SDB_CLIENT_WAITTASKS                               0x4000000001dcL
#define SDB_CLIENT_CANCELTASK                              0x4000000001ddL
#define SDB_CLIENT_SETSESSIONATTR                          0x4000000001deL
#define SDB_CLIENT_CLOSE_ALL_CURSORS                       0x4000000001dfL
#define SDB_CLIENT_IS_VALID2                               0x4000000001e0L
#define SDB_CLIENT_IS_VALID                                0x4000000001e1L
#define SDB_CLIENT_CREATEDOMAIN                            0x4000000001e2L
#define SDB_CLIENT_DROPDOMAIN                              0x4000000001e3L
#define SDB_CLIENT_GETDOMAIN                               0x4000000001e4L
#define SDB_CLIENT_LISTDOMAINS                             0x4000000001e5L
#endif
