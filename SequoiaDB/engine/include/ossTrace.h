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
#ifndef ossTRACE_H__
#define ossTRACE_H__
// Component: oss
#define SDB__OSSSK__OSSSK                                  0x100000004a3L
#define SDB__OSSSK__OSSSK2                                 0x100000004a4L
#define SDB__OSSSK__OSSSK3                                 0x100000004a5L
#define SDB_OSSSK_INITTSK                                  0x100000004a6L
#define SDB_OSSSK_SETSKLI                                  0x100000004a7L
#define SDB_OSSSK_BIND_LSTN                                0x100000004a8L
#define SDB_OSSSK_SEND                                     0x100000004a9L
#define SDB_OSSSK_ISCONN                                   0x100000004aaL
#define SDB_OSSSK_CONNECT                                  0x100000004abL
#define SDB_OSSSK_CLOSE                                    0x100000004acL
#define SDB_OSSSK_DISNAG                                   0x100000004adL
#define SDB_OSSSK__GETADDR                                 0x100000004aeL
#define SDB_OSSSK_SETTMOUT                                 0x100000004afL
#define SDB__OSSSK__COMPLETE                               0x100000004b0L
#define SDB_OSSTS2STR                                      0x100000004b1L
#define SDB_OSSGETCPUUSG                                   0x100000004b2L
#define SDB_OSSGETCPUUSG2                                  0x100000004b3L
#define SDB_OSSTCF_INIT                                    0x100000004b4L
#define SDB_OSSSRAND                                       0x100000004b5L
#define SDB_OSSRAND                                        0x100000004b6L
#define SDB_OSSHEXDL                                       0x100000004b7L
#define SDB_OSSHEXDUMPBUF                                  0x100000004b8L
#define SDB_OSSGETMEMINFO                                  0x100000004b9L
#define SDB_OSSGETDISKINFO                                 0x100000004baL
#define SDB_OSSGETCPUINFO                                  0x100000004bbL
#define SDB_OSSGETPROCMEMINFO                              0x100000004bcL
#define SDB_OSSISPROCRUNNING                               0x100000004bdL
#define SDB_OSSWAITCHLD                                    0x100000004beL
#define SDB_OSSCRTLST                                      0x100000004bfL
#define SDB_OSSEXEC2                                       0x100000004c0L
#define SDB_OSSEXEC                                        0x100000004c1L
#define SDB_OSSENBNMCHGS                                   0x100000004c2L
#define SDB_OSSRENMPROC                                    0x100000004c3L
#define SDB_OSSVERIFYPID                                   0x100000004c4L
#define SDB_OSSRSVPATH                                     0x100000004c5L
#define SDB_OSSWTINT                                       0x100000004c6L
#define SDB_OSSSTARTSERVICE                                0x100000004c7L
#define SDB_OSS_WFSTRS                                     0x100000004c8L
#define SDB_OSS_STOPSERVICE                                0x100000004c9L
#define SDB_OSSCRTPADUPHND                                 0x100000004caL
#define SDB_WIN_OSSEXEC                                    0x100000004cbL
#define SDB_OSSGETEWD                                      0x100000004ccL
#define SDB_OSSCMSTART_BLDARGS                             0x100000004cdL
#define SDB_OSS_STARTPROCESS                               0x100000004ceL
#define SDB__OSSENUMNMPS                                   0x100000004cfL
#define SDB__OSSENUMNMPS2                                  0x100000004d0L
#define SDB_OSSCRTNMP                                      0x100000004d1L
#define SDB_OSSOPENNMP                                     0x100000004d2L
#define SDB_OSSCONNNMP                                     0x100000004d3L
#define SDB_OSSRENMP                                       0x100000004d4L
#define SDB_OSSWTNMP                                       0x100000004d5L
#define SDB_OSSDISCONNNMP                                  0x100000004d6L
#define SDB_OSSCLSNMP                                      0x100000004d7L
#define SDB_OSSNMP2FD                                      0x100000004d8L
#define SDB_OSSCRTNP                                       0x100000004d9L
#define SDB_OSSOPENNP                                      0x100000004daL
#define SDB_OSSRDNP                                        0x100000004dbL
#define SDB__OSSWTNP                                       0x100000004dcL
#define SDB_OSSDELNP                                       0x100000004ddL
#define SDB_OSSNP2FD                                       0x100000004deL
#define SDB_OSSCLNPBYNM                                    0x100000004dfL
#define SDB__OSSRWM_LOCK_R                                 0x100000004e0L
#define SDB__OSSRWM_LOCK_W                                 0x100000004e1L
#define SDB__OSSRWM_RLS_R                                  0x100000004e2L
#define SDB__OSSRWM_RLS_W                                  0x100000004e3L
#define SDB__OSSEVN_WAIT                                   0x100000004e4L
#define SDB__OSSEN_SIGNAL                                  0x100000004e5L
#define SDB__OSSEN_SIGALL                                  0x100000004e6L
#define SDB__OSSVN_RESET                                   0x100000004e7L
#define SDB_OSSOPEN                                        0x100000004e8L
#define SDB_OSSCLOSE                                       0x100000004e9L
#define SDB_OSSMKDIR                                       0x100000004eaL
#define SDB_OSSDELETE                                      0x100000004ebL
#define SDB_OSSFILECOPY                                    0x100000004ecL
#define SDB_OSSACCESS                                      0x100000004edL
#define SDB_OSSREAD                                        0x100000004eeL
#define SDB_OSSWRITE                                       0x100000004efL
#define SDB_OSSSEEK                                        0x100000004f0L
#define SDB_OSSSEEKANDREAD                                 0x100000004f1L
#define SDB_OSSSEEKANDWRITE                                0x100000004f2L
#define SDB_OSSFSYNC                                       0x100000004f3L
#define SDB_OSSGETPATHTYPE                                 0x100000004f4L
#define SDB_OSSGETFSBYNM                                   0x100000004f5L
#define SDB_OSSGETFILESIZE                                 0x100000004f6L
#define SDB_OSSTRUNCATEFILE                                0x100000004f7L
#define SDB_OSSEXTFILE                                     0x100000004f8L
#define SDB_OSSGETREALPATH                                 0x100000004f9L
#define SDB_OSSGETFSTYPE                                   0x100000004faL
#define SDB_OSSRENMPATH                                    0x100000004fbL
#define SDB_OSSLOCKFILE                                    0x100000004fcL
#define SDB__OSSAIOMSGPROC__PROC                           0x100000004fdL
#define SDB__OSSAIOMSGPROC__HNDWP                          0x100000004feL
#define SDB__OSSAIOMSGPROC__HNDRPH                         0x100000004ffL
#define SDB__OSSAIOMSGPROC__RDPH                           0x10000000500L
#define SDB__OSSAIOMSGPROC_CONNECT                         0x10000000501L
#define SDB__TMPAIR_CHK_DLINE                              0x10000000502L
#define SDB__TMPAIR_RUN                                    0x10000000503L
#define SDB__OSSAIO__HNDAPT                                0x10000000504L
#define SDB__OSSAIO__ACCEPT                                0x10000000505L
#define SDB__OSSAIO_CONNECT                                0x10000000506L
#define SDB__OSSAIO_ADDTIMER                               0x10000000507L
#define SDB__OSSAIO_RMTIMER                                0x10000000508L
#define SDB_OSSPFOP_OPEN                                   0x10000000509L
#define SDB_OSSPFOP_READ                                   0x1000000050aL
#define SDB_OSSPFOP_WRITE                                  0x1000000050bL
#define SDB_OSSPFOP_FWRITE                                 0x1000000050cL
#define SDB_OSSPFOP_GETSIZE                                0x1000000050dL
#define SDB__OSSMEMALLOC                                   0x1000000050eL
#define SDB__OSSMEMREALLOC                                 0x1000000050fL
#define SDB__OSSMEMFREE                                    0x10000000510L
#define SDB_OSSRSTSYSSIG                                   0x10000000511L
#define SDB_OSSSIGHNDABT                                   0x10000000512L
#define SDB_OSSFUNCADDR2NM                                 0x10000000513L
#define SDB_OSSDUMPSYSTM                                   0x10000000514L
#define SDB_OSSDUMPDBINFO                                  0x10000000515L
#define SDB_OSSDUMPSYSINFO                                 0x10000000516L
#define SDB_OSSMCHCODE                                     0x10000000517L
#define SDB_OSSDUMPSIGINFO                                 0x10000000518L
#define SDB_OSSWLKSTK                                      0x10000000519L
#define SDB_OSSGETSYMBNFA                                  0x1000000051aL
#define SDB_OSSDUMPREGSINFO                                0x1000000051bL
#define SDB_OSSDUMPST                                      0x1000000051cL
#define SDB_OSSDUMPREGSINFO2                               0x1000000051dL
#define SDB_OSSDUMPST2                                     0x1000000051eL
#define SDB_OSSDUMPREGSINFO3                               0x1000000051fL
#define SDB_OSSDUMPST3                                     0x10000000520L
#define SDB_OSSSYMINIT                                     0x10000000521L
#define SDB_OSSWKSEX                                       0x10000000522L
#define SDB_OSSWS                                          0x10000000523L
#define SDB_OSSGETSYMBNFADDR                               0x10000000524L
#define SDB_GETEXECNM                                      0x10000000525L
#define SDB_OSSLCEXEC                                      0x10000000526L
#define SDB__OSSMMF_OPEN                                   0x10000000527L
#define SDB__OSSMMF_CLOSE                                  0x10000000528L
#define SDB__OSSMMF_SIZE                                   0x10000000529L
#define SDB__OSSMMF_MAP                                    0x1000000052aL
#define SDB__OSSMMF_FLHALL                                 0x1000000052bL
#define SDB__OSSMMF_FLUSH                                  0x1000000052cL
#define SDB__OSSMMF_UNLINK                                 0x1000000052dL
#define SDB_OSSMODULEHANDLE_INIT                           0x1000000052eL
#define SDB_OSSMODULEHANDLE_UNLOAD                         0x1000000052fL
#define SDB_OSSMODULEHANDLE_RESOLVEADDRESS                 0x10000000530L
#define SDB_OSSNTHND                                       0x10000000531L
#define SDB_OSSST                                          0x10000000532L
#define SDB_OSSEDUCTHND                                    0x10000000533L
#define SDB_OSSEDUEXCFLT                                   0x10000000534L
#define SDB_OSSDMPSYSTM                                    0x10000000535L
#define SDB_OSSDMPDBINFO                                   0x10000000536L
#define SDB_OSSSTKTRA                                      0x10000000537L
#define SDB_OSSREGSIGHND                                   0x10000000538L
#endif
