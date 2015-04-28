#-------------------------------------------------
#
# Project created by QtCreator 2015-03-30T09:55:31
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = SEQ
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    SequoiaDB/engine/bson/base64.cpp \
    SequoiaDB/engine/bson/bsondemo.cpp \
    SequoiaDB/engine/bson/bsonobj.cpp \
    SequoiaDB/engine/bson/nonce.cpp \
    SequoiaDB/engine/bson/oid.cpp \
    SequoiaDB/engine/bson/md5.c \
    pmd/fmpController.cpp \
    pmd/fmpJSVM.cpp \
    pmd/fmpMain.cpp \
    pmd/fmpVM.cpp \
    pmd/pmd.cpp \
    pmd/pmdAgent.cpp \
    pmd/pmdAsyncHandler.cpp \
    pmd/pmdAsyncNetEntryPoint.cpp \
    pmd/pmdAsyncSession.cpp \
    pmd/pmdAsyncSessionAgent.cpp \
    pmd/pmdBackgroundJob.cpp \
    pmd/pmdCBMgrEntryPoint.cpp \
    pmd/pmdCluster.cpp \
    pmd/pmdCMDMNMain.cpp \
    pmd/pmdCMMain.cpp \
    pmd/pmdController.cpp \
    pmd/pmdCoord.cpp \
    pmd/pmdDaemon.cpp \
    pmd/pmdDpsTransRollback.cpp \
    pmd/pmdEDU.cpp \
    pmd/pmdEDUEntryPoint.cpp \
    pmd/pmdEDUMgr.cpp \
    pmd/pmdEnv.cpp \
    pmd/pmdExternClient.cpp \
    pmd/pmdInnerClient.cpp \
    pmd/pmdLoadWorker.cpp \
    pmd/pmdLoggW.cpp \
    pmd/pmdMain.cpp \
    pmd/pmdMemPool.cpp \
    pmd/pmdModuleLoader.cpp \
    pmd/pmdOMAgentEDUEntryPoint.cpp \
    pmd/pmdOptionsMgr.cpp \
    pmd/pmdPreLoader.cpp \
    pmd/pmdProc.cpp \
    pmd/pmdProcessor.cpp \
    pmd/pmdProtocolEntryPoint.cpp \
    pmd/pmdRemoteSession.cpp \
    pmd/pmdRestSession.cpp \
    pmd/pmdRestSvc.cpp \
    pmd/pmdSession.cpp \
    pmd/pmdSessionBase.cpp \
    pmd/pmdSignalHandler.cpp \
    pmd/pmdStartup.cpp \
    pmd/pmdTcpListener.cpp \
    pmd/pmdWindowsListener.cpp \
    pmd/pmdWinService.cpp \
    pmd/sdb.cpp \
    pmd/sdbbp.cpp \
    pmd/sdbexprt.cpp \
    pmd/sdbimprt.cpp \
    pmd/sdbinspt.cpp \
    pmd/sdblist.cpp \
    pmd/sdbLoad.cpp \
    pmd/sdblobtool.cpp \
    pmd/sdbrestore.cpp \
    pmd/sdbstart.cpp \
    pmd/sdbstop.cpp \
    pmd/sdbtop.cpp \
    SequoiaDB/engine/oss/oss.cpp \
    SequoiaDB/engine/oss/ossASIO.cpp \
    SequoiaDB/engine/oss/ossCmdRunner.cpp \
    SequoiaDB/engine/oss/ossDynamicLoad.cpp \
    SequoiaDB/engine/oss/ossEDU.cpp \
    SequoiaDB/engine/oss/ossErr.cpp \
    SequoiaDB/engine/oss/ossEvent.cpp \
    SequoiaDB/engine/oss/ossHdfs.cpp \
    SequoiaDB/engine/oss/ossIO.cpp \
    SequoiaDB/engine/oss/ossLatch.cpp \
    SequoiaDB/engine/oss/ossMem.cpp \
    SequoiaDB/engine/oss/ossMmap.cpp \
    SequoiaDB/engine/oss/ossNPipe.cpp \
    SequoiaDB/engine/oss/ossPath.cpp \
    SequoiaDB/engine/oss/ossPrimitiveFileOp.cpp \
    SequoiaDB/engine/oss/ossProc.cpp \
    SequoiaDB/engine/oss/ossRWMutex.cpp \
    SequoiaDB/engine/oss/ossShMem.cpp \
    SequoiaDB/engine/oss/ossSocket.cpp \
    SequoiaDB/engine/oss/ossStackDump.cpp \
    SequoiaDB/engine/oss/ossUtil.cpp \
    SequoiaDB/engine/oss/ossVer.cpp \
    SequoiaDB/engine/oss/oss.c \
    SequoiaDB/engine/oss/ossMem.c \
    SequoiaDB/engine/oss/ossUtil.c \
    SequoiaDB/engine/oss/ossVer.c

OTHER_FILES += \
    SequoiaDB/engine/bson/GNU-AGPL-3.0.txt

HEADERS += \
    SequoiaDB/engine/bson/bson.h \
    SequoiaDB/engine/bson/bson.hpp \
    SequoiaDB/engine/bson/bsonassert.h \
    SequoiaDB/engine/bson/bson_db.h \
    SequoiaDB/engine/bson/bsonelement.h \
    SequoiaDB/engine/bson/bson-inl.h \
    SequoiaDB/engine/bson/bsonintrusiveptr.h \
    SequoiaDB/engine/bson/bsonmisc.h \
    SequoiaDB/engine/bson/bsonnoncopyable.h \
    SequoiaDB/engine/bson/bsonobj.h \
    SequoiaDB/engine/bson/bsonobjbuilder.h \
    SequoiaDB/engine/bson/bsonobjiterator.h \
    SequoiaDB/engine/bson/bsontypes.h \
    SequoiaDB/engine/bson/inline_decls.h \
    SequoiaDB/engine/bson/oid.h \
    SequoiaDB/engine/bson/ordering.h \
    SequoiaDB/engine/bson/stringdata.h
