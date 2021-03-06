//
//  BTCEntity.h
//  BitBrutter
//
//  Created by Sergey Neikovich on 5/13/20.
//  Copyright © 2020 F Developers. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FMDB.h"

typedef NS_ENUM(NSInteger, CheckerCallBack) {
    CheckerCallBackSuccess,
    CheckerCallBackTXS,
    CheckerCallBackError,
    CheckerCallBackNone
};

@interface WalletEntity : NSObject
@property(assign, nonatomic) NSNumber *_id;
@property(assign, nonatomic) NSNumber *btc;
@property(assign, nonatomic) NSNumber *txs;
@property(strong, nonatomic) NSString *address;
@property(strong, nonatomic) NSString *privateKey;
@property(strong, nonatomic) NSString *publicKey;
@property(assign, nonatomic) CheckerCallBack *status;

- (instancetype)initFromFMResultSet: (FMResultSet *) data;
@end
