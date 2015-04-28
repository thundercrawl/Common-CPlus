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
#ifndef qgmTRACE_H__
#define qgmTRACE_H__
// Component: qgm
#define SDB__QGMPLFILTER__FETCHNEXT                        0x80000000000058cL
#define SDB__QGMPLHASHJOIN_INIT                            0x80000000000058dL
#define SDB__QGMPLHASHJOIN__EXEC                           0x80000000000058eL
#define SDB__QGMPLHASHJOIN__FETCHNEXT                      0x80000000000058fL
#define SDB__QGMPLHASHJOIN__BUILDHASNTBL                   0x800000000000590L
#define SDB__QGMPLDELETE__EXEC                             0x800000000000591L
#define SDB__QGMOPTINLJOIN__MAKECONDVAR                    0x800000000000592L
#define SDB__QGMOPTINLJOIN_MAKECONDITION                   0x800000000000593L
#define SDB__QGMOPTINLJOIN_INIT                            0x800000000000594L
#define SDB__QGMOPTINLJOIN__CRTJOINUNIT                    0x800000000000595L
#define SDB__QGMOPTINLJOIN_OUTPUTSTREAM                    0x800000000000596L
#define SDB__QGMOPTINLJOIN__PUSHOPRUNIT                    0x800000000000597L
#define SDB__QGMOPTINLJOIN__UPDATECHANGE                   0x800000000000598L
#define SDB__QGMOPTINLJOIN_HANDLEHINTS                     0x800000000000599L
#define SDB__QGMOPTINLJOIN__VALIDATE                       0x80000000000059aL
#define SDB__QGMHASHTBL_PUSH                               0x80000000000059bL
#define SDB__QGMHASHTBL_FIND                               0x80000000000059cL
#define SDB__QGMHASHTBL_GETMORE                            0x80000000000059dL
#define SDB__QGMPLMTHMATCHERFILTER__FETCHNEXT              0x80000000000059eL
#define SDB__QGMPARAMTABLE_ADDCONST                        0x80000000000059fL
#define SDB__QGMPARAMTABLE_ADDCONST2                       0x8000000000005a0L
#define SDB__QGMPARATABLE_ADDVAR                           0x8000000000005a1L
#define SDB__QGMPARAMTABLE_SETVAR                          0x8000000000005a2L
#define SDB__QGMPLSCAN__EXEC                               0x8000000000005a3L
#define SDB__QGMPLSCAN__EXECONDATA                         0x8000000000005a4L
#define SDB__QGMPLSCAN__EXECONCOORD                        0x8000000000005a5L
#define SDB__QGMPLSCAN__FETCHNEXT                          0x8000000000005a6L
#define SDB__QGMPLSCAN__FETCH                              0x8000000000005a7L
#define SDB__QGMOPTISELECT_INIT                            0x8000000000005a8L
#define SDB__QGMOPTISELECT_DONE                            0x8000000000005a9L
#define SDB__QGMOPTISELECT_OUTPUTSTREAM                    0x8000000000005aaL
#define SDB__QGMOPTISELECT__PUSHOPRUNIT                    0x8000000000005abL
#define SDB__QGMOPTISELECT__RMOPRUNIT                      0x8000000000005acL
#define SDB__QGMOPTISELECT__EXTEND                         0x8000000000005adL
#define SDB__QGMOPTISELECT__VALIDATEANDCRTPLAN             0x8000000000005aeL
#define SDB__QGMOPTISELECT__PARAMEXISTINSELECOTR           0x8000000000005afL
#define SDB__QGMBUILDER_BUILDORDERBY                       0x8000000000005b0L
#define SDB__QGMBUILDER_BUILD1                             0x8000000000005b1L
#define SDB__QGMBUILDER_BUILD2                             0x8000000000005b2L
#define SDB__QGMBUILDER__BUILDPHYNODE                      0x8000000000005b3L
#define SDB__QGMBUILDER__ADDPHYCOMMAND                     0x8000000000005b4L
#define SDB__QGMBUILDER__ADDPHYAGGR                        0x8000000000005b5L
#define SDB__QGMBUILDER__CRTPHYSORT                        0x8000000000005b6L
#define SDB__QGMBUILDER__ADDPHYSCAN                        0x8000000000005b7L
#define SDB__QGMBUILDER__ADDMTHMATHERSCAN                  0x8000000000005b8L
#define SDB__QGMBUILDER__CRTPHYJOIN                        0x8000000000005b9L
#define SDB__QGMBUILDER__CRTPHYFILTER                      0x8000000000005baL
#define SDB__QGMBUILDER__CRTMTHMATHERFILTER                0x8000000000005bbL
#define SDB__QGMBUILDER__BUILD1                            0x8000000000005bcL
#define SDB__QGMBUILDER__BUILDUPDATE                       0x8000000000005bdL
#define SDB__QGMBUILDER__ADDSET                            0x8000000000005beL
#define SDB__QGMBUILDER__BUILDDELETE                       0x8000000000005bfL
#define SDB__QGMBUILDER__BUILDDROPCL                       0x8000000000005c0L
#define SDB__QGMBUILDER__BUILDDROPINX                      0x8000000000005c1L
#define SDB__QGMBUILDER__BUILDCRTINX                       0x8000000000005c2L
#define SDB__QGMBUILDER__BUILDINXCOLUMNS                   0x8000000000005c3L
#define SDB__QGMBUILDER__BUILDCRTCL                        0x8000000000005c4L
#define SDB__QGMBUILDER__BUILDCRTCS                        0x8000000000005c5L
#define SDB__QGMBUILDER__BUILDDROPCS                       0x8000000000005c6L
#define SDB__QGMBUILDER__BUILDSELECT                       0x8000000000005c7L
#define SDB__QGMBUILDER__BUILDINSERT                       0x8000000000005c8L
#define SDB__QGMBUILDER__ADDSELECTOR                       0x8000000000005c9L
#define SDB__QGMBUILDER__ADDFROM                           0x8000000000005caL
#define SDB__QGMBUILDER__BUILDJOIN                         0x8000000000005cbL
#define SDB__QGMBUILDER__BUILDINCONDITION                  0x8000000000005ccL
#define SDB__QGMBUILDER__BUILDCONDITION                    0x8000000000005cdL
#define SDB__QGMBUILDER__ADDSPLITBY                        0x8000000000005ceL
#define SDB__QGMBUILDER__ADDGROUPBY                        0x8000000000005cfL
#define SDB__QGMBUILDER__ADDORDERBY                        0x8000000000005d0L
#define SDB__QGBUILDER__ADDLIMIT                           0x8000000000005d1L
#define SDB__QGMBUILDER__ADDSKIP                           0x8000000000005d2L
#define SDB__QGMBUILDER__ADDCOLUMNS                        0x8000000000005d3L
#define SDB__QGMBUILDER__ADDVALUES                         0x8000000000005d4L
#define SDB__QGMBUILDER__ADDHINT                           0x8000000000005d5L
#define SDB__QGMMATCHER_MATCH                              0x8000000000005d6L
#define SDB__QGMMATCHER__MATCH                             0x8000000000005d7L
#define SDB__QGMPTRTABLE_GETFIELD                          0x8000000000005d8L
#define SDB__QGMPTRTABLE_GETOWNFIELD                       0x8000000000005d9L
#define SDB__QGMPTRTABLE_GETATTR                           0x8000000000005daL
#define SDB__QGMUTILFIRSTDOT                               0x8000000000005dbL
#define SDB__QGMFINDFIELDFROMFUNC                          0x8000000000005dcL
#define SDB__QGMISFROMONE                                  0x8000000000005ddL
#define SDB__QGMISSAMEFROM                                 0x8000000000005deL
#define SDB__QGMMERGE                                      0x8000000000005dfL
#define SDB__QGMREPLACEFIELDRELE                           0x8000000000005e0L
#define SDB__QGMREPLACEATTRRELE                            0x8000000000005e1L
#define SDB__QGMREPLACEATTRRELE2                           0x8000000000005e2L
#define SDB__QGMREPLACEATTRRELE3                           0x8000000000005e3L
#define SDB__QDMDOWNFIELDSBYFIELDALIAS                     0x8000000000005e4L
#define SDB__QGMDOWNATTRSBYFIELDALIAS                      0x8000000000005e5L
#define SDB__QGMDOWNATTRSBYFIELDALIAS2                     0x8000000000005e6L
#define SDB__QGMDOWNAATTRBYFIELDALIAS                      0x8000000000005e7L
#define SDB__QGMDOWNAGGRSBYFIELDALIAS                      0x8000000000005e8L
#define SDB__QGMUPFIELDSBYFIELDALIAS                       0x8000000000005e9L
#define SDB__QGMUPATTRSBYFIELDALIAS                        0x8000000000005eaL
#define SDB__QGMUPATTRSBYFIELDALIAS2                       0x8000000000005ebL
#define SDB__QGMUPAATTRBYFIELDALIAS                        0x8000000000005ecL
#define SDB__QGMUPATTRSBYFIELDALIAS3                       0x8000000000005edL
#define SDB__QGMPLSORT__EXEC                               0x8000000000005eeL
#define SDB__QGMPLSORT__FETCHNEXT                          0x8000000000005efL
#define SDB__QGMFETCHOUT_ELEMENT                           0x8000000000005f0L
#define SDB__QGMFETCHOUT_ELEMENTS                          0x8000000000005f1L
#define SDB__QGMSELECTOR_SELECT                            0x8000000000005f2L
#define SDB__QGMSELECTOR_SELECT2                           0x8000000000005f3L
#define SDB__QGMPLAN_EXECUTE                               0x8000000000005f4L
#define SDB__QGMPLAN_FETCHNEXT                             0x8000000000005f5L
#define SDB__QGMEXTENDSELECTPLAN__EXTEND                   0x8000000000005f6L
#define SDB__QGMPLINSERT__MERGEOBJ                         0x8000000000005f7L
#define SDB__QGMPLINSERT__NEXTRECORD                       0x8000000000005f8L
#define SDB__QGMPLINSERT__EXEC                             0x8000000000005f9L
#define SDB__QGMPLUPDATE__EXEC                             0x8000000000005faL
#define SDB__QGMOPTISORT_INIT                              0x8000000000005fbL
#define SDB__QGMOPTISORT__PUSHOPRUNIT                      0x8000000000005fcL
#define SDB__QGMOPTISORT__RMOPRUNIT                        0x8000000000005fdL
#define SDB__QGMOPTISORT_APPEND                            0x8000000000005feL
#define SDB__QGMOPSTREAM_FIND                              0x8000000000005ffL
#define SDB__QGMOPRUNIT_ADDOPFIELD                         0x800000000000600L
#define SDB__QGMOPTITREENODE_ADDCHILD                      0x800000000000601L
#define SDB__QGMOPTITREENODE__ONPUSHOPRUNIT                0x800000000000602L
#define SDB__QGMOPTITREENODE_PUSHOPRUNIT                   0x800000000000603L
#define SDB__QGMOPTITREENODE_RMOPRUNIT                     0x800000000000604L
#define SDB__QGMOPTITREENODE_UPCHANGE                      0x800000000000605L
#define SDB__QGMOPTITREENODE_OUTPUTSORT                    0x800000000000606L
#define SDB__QGMOPTITREENODE_EXTEND                        0x800000000000607L
#define SDB__QGMOPTTREE__PREPARE                           0x800000000000608L
#define SDB__QGMOPTTREE_INSERTBETWEEN                      0x800000000000609L
#define SDB__QGMCONDITIONNODEHELPER_MERGE                  0x80000000000060aL
#define SDB__QGMCONDITIONNODEHELPER_SEPARATE               0x80000000000060bL
#define SDB__QGMCONDITIONNODEHELPER_SEPARATE2              0x80000000000060cL
#define SDB__QGMCONDITIONNODEHELPER__CRTBSON               0x80000000000060dL
#define SDB__QGMCONDITIONNODEHELPER__TOBSON                0x80000000000060eL
#define SDB__QGMCONDITIONNODEHELPER__GETALLATTR            0x80000000000060fL
#define SDB__QGMPLNLJOIN__INIT                             0x800000000000610L
#define SDB__QGMPLNLJOIN__EXEC                             0x800000000000611L
#define SDB__QGMPLNLJOIN__FETCHNEXT                        0x800000000000612L
#define SDB__QGMPLNLJOIN__MODIFYINNERCONDITION             0x800000000000613L
#define SDB__QGMPLCOMMAND__EXEC                            0x800000000000614L
#define SDB__QGMPLCOMMAND_EXECONCOORD                      0x800000000000615L
#define SDB__QGMPLCOMMAND__EXECONDATA                      0x800000000000616L
#define SDB__QGMPLCOMMAND__FETCHNEXT                       0x800000000000617L
#define SDB__QGMOPTIAGGREGATION_INIT                       0x800000000000618L
#define SDB__QGMOPTIAGGREGATION_DONE                       0x800000000000619L
#define SDB__QGMOPTIAGGREGATION__UPDATE2UNIT               0x80000000000061aL
#define SDB__QGMOPTIAGGREGATION__ADDFIELDS                 0x80000000000061bL
#define SDB__QGMOPTIAGGREGATION__GETFIELDALIAS             0x80000000000061cL
#define SDB__QGMOPTIAGGREGATION__PUSHOPRUNIT               0x80000000000061dL
#define SDB__QGMOPTIAGGREGATION_OURPUTSORT                 0x80000000000061eL
#define SDB__QGMOPTIAGGREGATION_PARSE                      0x80000000000061fL
#define SDB__QGMPLSPLITBY__FETCHNEXT                       0x800000000000620L
#define SDB__QGMEXTENDPLAN_EXTEND                          0x800000000000621L
#define SDB__QGMEXTENDPLAN_INSERTPLAN                      0x800000000000622L
#define SDB__QGMPLMTHMATCHERSCAN__EXEC                     0x800000000000623L
#endif
