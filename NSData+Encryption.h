//
//  NSData+Encryption.h
//
//  Created by Vaibhav Nath on 6/17/16.
//  Copyright © 2016 Vaibhav Nath All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (Encryption)
// AES 256
- (NSData *)AES256EncryptWithKey:(NSString *)key;
- (NSData *)AES256DecryptWithKey:(NSString *)key;
// AES 128
- (NSData *)AES128EncryptedDataWithKey:(NSString *)key;
- (NSData *)AES128DecryptedDataWithKey:(NSString *)key;
// AES 128 with IV(Initialization Vector)
- (NSData *)AES128EncryptedDataWithKey:(NSString *)key iv:(NSString *)iv;
- (NSData *)AES128DecryptedDataWithKey:(NSString *)key iv:(NSString *)iv;
@end
