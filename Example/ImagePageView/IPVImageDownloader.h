//
//  IPVImageDownloader.h
//  ImagePageView
//
//  Created by Kris Selden on 10/21/14.
//  Copyright (c) 2014 Kris Selden. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IPVImageDownloader : NSObject

-(BOOL)downloadURL:(NSURL *)imageURL
   progressHandler:(void (^)(int64_t bytesReceived, int64_t bytesExpectedToReceive))progressHandler
 completionHandler:(void (^)(UIImage *image, NSError *error))completionHandler;

@end
