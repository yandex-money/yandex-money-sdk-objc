//
// Created by Alexander Mertvetsov on 27.05.14.
// Copyright (c) 2020 YooMoney. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YMABaseRequest.h"
#import "YMAIncomingTransferAcceptResponse.h"

@interface YMAIncomingTransferAcceptRequest : YMABaseRequest<YMAParametersPosting>

+ (instancetype)acceptIncomingTransferWithOperationId:(NSString *)operationId protectionCode:(NSString *)protectionCode;

@end
