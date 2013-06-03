#import "AFIncrementalStore.h"
#import "AFRestClient.h"

@interface ShopListAPIClient : AFRESTClient <AFIncrementalStoreHTTPClient>

+ (ShopListAPIClient *)sharedClient;

@end
