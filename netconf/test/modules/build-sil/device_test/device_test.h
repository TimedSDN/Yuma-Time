
#ifndef _H_device_test
#define _H_device_test
/* 

 * Copyright (c) 2009 - 2011, Andy Bierman
 * All Rights Reserved.
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *

*** Generated by yangdump 2.1.1539M

    Combined SIL header
    module device_test
    revision 2011-09-07
    namespace http://netconfcentral.org/ns/device_test

 */

#include <xmlstring.h>

#include "dlq.h"
#include "ncxtypes.h"
#include "op.h"
#include "status.h"
#include "val.h"

#ifdef __cplusplus
extern "C" {
#endif

#define y_device_test_M_device_test (const xmlChar *)"device_test"
#define y_device_test_R_device_test (const xmlChar *)"2011-09-07"

#define y_device_test_N_activeProfile (const xmlChar *)"activeProfile"
#define y_device_test_N_alarmConfig (const xmlChar *)"alarmConfig"
#define y_device_test_N_bitrate (const xmlChar *)"bitrate"
#define y_device_test_N_channelId (const xmlChar *)"channelId"
#define y_device_test_N_configuration (const xmlChar *)"configuration"
#define y_device_test_N_copyResult (const xmlChar *)"copyResult"
#define y_device_test_N_copy_profile (const xmlChar *)"copy-profile"
#define y_device_test_N_destinationId (const xmlChar *)"destinationId"
#define y_device_test_N_destinationPinId (const xmlChar *)"destinationPinId"
#define y_device_test_N_destinationProfileId (const xmlChar *)"destinationProfileId"
#define y_device_test_N_destinationStreamId (const xmlChar *)"destinationStreamId"
#define y_device_test_N_id (const xmlChar *)"id"
#define y_device_test_N_physicalPath (const xmlChar *)"physicalPath"
#define y_device_test_N_profile (const xmlChar *)"profile"
#define y_device_test_N_replaceExisting (const xmlChar *)"replaceExisting"
#define y_device_test_N_resourceConnection (const xmlChar *)"resourceConnection"
#define y_device_test_N_resourceNode (const xmlChar *)"resourceNode"
#define y_device_test_N_resourceType (const xmlChar *)"resourceType"
#define y_device_test_N_sourceId (const xmlChar *)"sourceId"
#define y_device_test_N_sourcePinId (const xmlChar *)"sourcePinId"
#define y_device_test_N_sourceProfileId (const xmlChar *)"sourceProfileId"
#define y_device_test_N_sourceStreamId (const xmlChar *)"sourceStreamId"
#define y_device_test_N_statusConfig (const xmlChar *)"statusConfig"
#define y_device_test_N_stream (const xmlChar *)"stream"
#define y_device_test_N_streamConnection (const xmlChar *)"streamConnection"
#define y_device_test_N_xpo (const xmlChar *)"xpo"

/* list /xpo/profile/stream/resourceNode */
typedef struct y_device_test_T_xpo_profile_stream_resourceNode_ {
    dlq_hdr_t qhdr;
    uint32 id;
    uint32 resourceType;
    uint32 channelId;
    xmlChar *configuration;
    xmlChar *statusConfig;
    xmlChar *alarmConfig;
    xmlChar *physicalPath;
} y_device_test_T_xpo_profile_stream_resourceNode;

/* list /xpo/profile/stream/resourceConnection */
typedef struct y_device_test_T_xpo_profile_stream_resourceConnection_ {
    dlq_hdr_t qhdr;
    uint32 id;
    uint32 sourceId;
    uint32 sourcePinId;
    uint32 destinationId;
    uint32 destinationPinId;
    uint32 bitrate;
} y_device_test_T_xpo_profile_stream_resourceConnection;

/* list /xpo/profile/stream */
typedef struct y_device_test_T_xpo_profile_stream_ {
    dlq_hdr_t qhdr;
    uint32 id;
    dlq_hdr_t resourceNode;
    dlq_hdr_t resourceConnection;
} y_device_test_T_xpo_profile_stream;

/* list /xpo/profile/streamConnection */
typedef struct y_device_test_T_xpo_profile_streamConnection_ {
    dlq_hdr_t qhdr;
    uint32 id;
    uint32 sourceStreamId;
    uint32 destinationStreamId;
    uint32 sourceId;
    uint32 sourcePinId;
    uint32 destinationId;
    uint32 destinationPinId;
    uint32 bitrate;
} y_device_test_T_xpo_profile_streamConnection;

/* list /xpo/profile */
typedef struct y_device_test_T_xpo_profile_ {
    dlq_hdr_t qhdr;
    uint32 id;
    dlq_hdr_t stream;
    dlq_hdr_t streamConnection;
} y_device_test_T_xpo_profile;

/* container /xpo */
typedef struct y_device_test_T_xpo_ {
    dlq_hdr_t profile;
    uint32 activeProfile;
} y_device_test_T_xpo;

/* container /copy-profile/input */
typedef struct y_device_test_T_copy_profile_input_ {
    uint32 sourceProfileId;
    uint32 destinationProfileId;
    boolean replaceExisting;
} y_device_test_T_copy_profile_input;

/* container /copy-profile/output */
typedef struct y_device_test_T_copy_profile_output_ {
    xmlChar *copyResult;
} y_device_test_T_copy_profile_output;

/* rpc /copy-profile */
typedef struct y_device_test_T_copy_profile_ {
    y_device_test_T_copy_profile_input input;
    y_device_test_T_copy_profile_output output;
} y_device_test_T_copy_profile;

/********************************************************************
* FUNCTION y_device_test_init
* 
* initialize the device_test server instrumentation library
* 
* INPUTS:
*    modname == requested module name
*    revision == requested version (NULL for any)
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t y_device_test_init (
    const xmlChar *modname,
    const xmlChar *revision);


/********************************************************************
* FUNCTION y_device_test_init2
* 
* SIL init phase 2: non-config data structures
* Called after running config is loaded
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t y_device_test_init2 (void);


/********************************************************************
* FUNCTION y_device_test_cleanup
*    cleanup the server instrumentation library
* 
********************************************************************/
extern void y_device_test_cleanup (void);

#ifdef __cplusplus
} /* end extern 'C' */
#endif

#endif