#include "LINEFOLLOW_90_DATA_READING_capi_host.h"
static LINEFOLLOW_90_DATA_READING_host_DataMapInfo_T root;
static int initialized = 0;
rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        LINEFOLLOW_90_DATA_READING_host_InitializeDataMapInfo(&(root), "LINEFOLLOW_90_DATA_READING");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
