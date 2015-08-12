//
//  STKStickerPackObject.h
//  StickerFactory
//
//  Created by Vadim Degterev on 08.07.15.
//  Copyright (c) 2015 908 Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "STKStickerPackProtocol.h"

@class STKStickerPack;

@interface STKStickerPackObject : NSObject <STKStickerPackProtocol>

@property (nonatomic, strong) NSString *artist;

@property (nonatomic, strong) NSString *packName;

@property (nonatomic, strong) NSString *packTitle;

@property (nonatomic, strong) NSNumber *packID;

@property (nonatomic, strong) NSNumber *price;

@property (nonatomic, strong) NSArray *stickers;

@property (nonatomic, strong) NSNumber *disabled;

@property (nonatomic, strong) NSNumber *order;

@property (nonatomic, strong) NSString *packDescription;

@property (nonatomic, strong) NSNumber *isNew;

- (instancetype)initWithServerResponse:(NSDictionary*)serverResponse;

- (instancetype)initWithStickerPack:(STKStickerPack*)stickerPack;

@end
