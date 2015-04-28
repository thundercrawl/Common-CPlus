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
#ifndef sptTRACE_H__
#define sptTRACE_H__
// Component: spt
#define SDB_SE_GLBSE                                       0x80000000000624L
#define SDB_SE_NEWSCOPE                                    0x80000000000625L
#define SDB_SCOPE_INIT                                     0x80000000000626L
#define SDB_SCOPE_EVALUATE                                 0x80000000000627L
#define SDB_SCOPE_EVALUATE2                                0x80000000000628L
#define SDB_OBJ2BSON                                       0x80000000000629L
#define SDB_BSON_DESTRUCTOR                                0x8000000000062aL
#define SDB_BSON_CONSTRUCTOR                               0x8000000000062bL
#define SDB_BSON_TO_JSON                                   0x8000000000062cL
#define SDB_GLOBAL_PRINT                                   0x8000000000062dL
#define SDB_TRACE_FMT                                      0x8000000000062eL
#define SDB_GLOBAL_HELP                                    0x8000000000062fL
#define SDB_CURSOR_DESTRUCTOR                              0x80000000000630L
#define SDB_CURSOR_RESV                                    0x80000000000631L
#define SDB_CURSOR_CONSTRUCTOR                             0x80000000000632L
#define SDB_CURSOR_NEXT                                    0x80000000000633L
#define SDB_CURSOR_CURRENT                                 0x80000000000634L
#define SDB_CURSOR_UP_CURRENT                              0x80000000000635L
#define SDB_CURSOR_DEL_CURR                                0x80000000000636L
#define SDB_CURSOR_CLOSE                                   0x80000000000637L
#define SDB_COUNT_DESTRUCTOR                               0x80000000000638L
#define SDB_COUNT_RESV                                     0x80000000000639L
#define SDB_COUNT_CONSTRUCTOR                              0x8000000000063aL
#define SDB_COLL_DESTRUCTOR                                0x8000000000063bL
#define SDB_COLL_CONSTRUCTOR                               0x8000000000063cL
#define SDB_COLL_RAW_FND                                   0x8000000000063dL
#define SDB_COLL_INSERT                                    0x8000000000063eL
#define SDB_COLL_UPDATE                                    0x8000000000063fL
#define SDB_COLL_UPSERT                                    0x80000000000640L
#define SDB_COLL_REMOVE                                    0x80000000000641L
#define SDB_COLL_DELETE_LOB                                0x80000000000642L
#define SDB_COLL_LIST_LOBS                                 0x80000000000643L
#define SDB_COLL_LIST_LOBPIECES                            0x80000000000644L
#define SDB_COLL_GET_LOB                                   0x80000000000645L
#define SDB_COLL_PUT_LOB                                   0x80000000000646L
#define SDB_COLL_EXPLAIN                                   0x80000000000647L
#define SDB_COLL_COUNT                                     0x80000000000648L
#define SDB_COLL_SPLIT                                     0x80000000000649L
#define SDB_COLL_SPLIT_ASYNC                               0x8000000000064aL
#define SDB_COLL_CRT_INX                                   0x8000000000064bL
#define SDB_COLL_GET_INX                                   0x8000000000064cL
#define SDB_COLL_DROP_INX                                  0x8000000000064dL
#define SDB_COLL_BULK_INSERT                               0x8000000000064eL
#define SDB_COLL_RENM                                      0x8000000000064fL
#define SDB_COLL_AGGR                                      0x80000000000650L
#define SDB_COLL_ATTACHCOLLECTION                          0x80000000000651L
#define SDB_COLL_DETACHCOLLECTION                          0x80000000000652L
#define SDB_QUERY_RESV                                     0x80000000000653L
#define SDB_QUERY_CONSTRUCTOR                              0x80000000000654L
#define SDB_RN_DESTRUCTOR                                  0x80000000000655L
#define SB_RG_DESTRUCTOR                                   0x80000000000656L
#define SDB_RG_CONSTRUCTOR                                 0x80000000000657L
#define SDB_RG_GET_MST                                     0x80000000000658L
#define SDB_RG_GET_SLAVE                                   0x80000000000659L
#define SDB_RG_START                                       0x8000000000065aL
#define SDB_RG_STOP                                        0x8000000000065bL
#define SDB_RG_CRT_NODE                                    0x8000000000065cL
#define SDB_RG_RM_NODE                                     0x8000000000065dL
#define SDB_GET_NODE_AND_SETPROPERTY                       0x8000000000065eL
#define SDB_RG_GET_NODE                                    0x8000000000065fL
#define SDB_CS_DESTRUCTOR                                  0x80000000000660L
#define SDB_ISSPECCOLLNM                                   0x80000000000661L
#define SDB_CS_RESV                                        0x80000000000662L
#define GET_CL_AND_SETPROPERTY                             0x80000000000663L
#define SDB_CS_GET_CL                                      0x80000000000664L
#define SB_CS_CRT_CL                                       0x80000000000665L
#define SDB_CS_DROP_CL                                     0x80000000000666L
#define SDB_DOMAIN_DESTRUCTOR                              0x80000000000667L
#define SDB_DOMAIN_ALTER                                   0x80000000000668L
#define SDB_DOMAIN_LIST_GROUP                              0x80000000000669L
#define SDB_DOMAIN_LIST_CS                                 0x8000000000066aL
#define SDB_DOMAIN_LIST_CL                                 0x8000000000066bL
#define SDB_DESTRUCTOR                                     0x8000000000066cL
#define SDB_ISSPECSNM                                      0x8000000000066dL
#define SDB_SDB_RESV                                       0x8000000000066eL
#define SDB_SDB_CONSTRUCTOR                                0x8000000000066fL
#define SDB_RN_CONNECT                                     0x80000000000670L
#define SDB_RN_START                                       0x80000000000671L
#define SDB_RN_STOP                                        0x80000000000672L
#define SDB_SDB_CRT_RG                                     0x80000000000673L
#define SDB_SDB_CREATE_DOMAIN                              0x80000000000674L
#define SDB_SDB_DROP_DOMAIN                                0x80000000000675L
#define SDB_SDB_GET_DOMAIN                                 0x80000000000676L
#define SDB_SDB_LIST_DOMAINS                               0x80000000000677L
#define SDB_SDB_CRT_PROCEDURE                              0x80000000000678L
#define SDB_SDB_RM_PROCEDURE                               0x80000000000679L
#define SDB_SDB_LIST_PROCEDURES                            0x8000000000067aL
#define SDB_SDB_EVAL                                       0x8000000000067bL
#define SDB_SDB_FLUSH_CONF                                 0x8000000000067cL
#define SDB_SDB_RM_RG                                      0x8000000000067dL
#define SDB_SDB_CRT_CATA_RG                                0x8000000000067eL
#define SDB_SDB_CRT_CS                                     0x8000000000067fL
#define SDB_GET_RG_AND_SETPROPERTY                         0x80000000000680L
#define SDB_SDB_GET_RG                                     0x80000000000681L
#define GET_CS_AND_SETPROPERTY                             0x80000000000682L
#define SDB_GET_CS                                         0x80000000000683L
#define SDB_SDB_DROP_CS                                    0x80000000000684L
#define SDB_SDB_SNAPSHOT                                   0x80000000000685L
#define SDB_SDB_RESET_SNAP                                 0x80000000000686L
#define SDB_SDB_LIST                                       0x80000000000687L
#define SDB_SDB_START_RG                                   0x80000000000688L
#define SDB_SDB_CRT_USER                                   0x80000000000689L
#define SDB_SDB_DROP_USER                                  0x8000000000068aL
#define SDB_SDB_EXEC                                       0x8000000000068bL
#define SDB_SDB_EXECUP                                     0x8000000000068cL
#define SDB_SDB_TRACE_ON                                   0x8000000000068dL
#define SDB_SDB_TRACE_RESUME                               0x8000000000068eL
#define SDB_SDB_TRACE_OFF                                  0x8000000000068fL
#define SDB_SDB_TRANS_BEGIN                                0x80000000000690L
#define SDB_SDB_TRANS_COMMIT                               0x80000000000691L
#define SDB_SDB_TRANS_ROLLBACK                             0x80000000000692L
#define SDB_SDB_CLOSE                                      0x80000000000693L
#define SDB_SDB_BACKUP_OFFLINE                             0x80000000000694L
#define SDB_SDB_LIST_BACKUP                                0x80000000000695L
#define SDB_SDB_REMOVE_BACKUP                              0x80000000000696L
#define SDB_SDB_LIST_TASKS                                 0x80000000000697L
#define SDB_SDB_WAIT_TASKS                                 0x80000000000698L
#define SDB_SDB_CANCEL_TASK                                0x80000000000699L
#define SDB_SDB_SET_SESSION_ATTR                           0x8000000000069aL
#define SDB_SDB_MSG                                        0x8000000000069bL
#define SDB_SDB_INVALIDATE_CACHE                           0x8000000000069cL
#define SDB_SDB_FORCE_SESSION                              0x8000000000069dL
#endif
