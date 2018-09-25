NSData+Encryption
=============

A NSData Category for Encrypting and Decrypting NSData with AES256 & AES 128 alongwith optional IV(Initialization Vector).

## Features

- Category Based for existing compatibility
- Uses native CommonCryptor class, for better efficiency and future support

## Usage

1. Add NSData+Encryption Folder to Project (Preferred to 'Use Groups' and 'Copy Items if Needed').
2. Import Category and Use with NSData Objects.

## Example

**Code:**

```objc
#import "NSData+Encryption"

// Cast the desired object to NSData object for encrypting
NSData *encryptedData = [inputNSDataObj AES256EncryptWithKey:@"!npu+K3y"]:
// Send/Save data to desired location

// Decrypting
NSData *decryptedData = [encryptedData AES256DecryptWithKey:@"!npu+K3y"]:
// Cast and format and show the desired data to user
```
