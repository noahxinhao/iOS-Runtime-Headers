/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSString, NSDictionary;



@interface CKAudioMediaObject : CKAVMediaObject 
{
    NSDictionary *_transcodeOptions;
    NSString *_transcodePath;
}

+ (id)mimeTypesToFileExtensions;

- (unsigned long long)sizeInBytes;
- (void)dealloc;
- (void)prepareForTranscode;
- (id)transcodePath;
- (id)transcodedFilename;
- (id)transcodeMimeType;
- (id)transcodedPathExtension;
- (double)transcodeStartTime;
- (double)transcodeEndTime;
- (double)transcodeDuration;
- (id)effectiveExportedFilename;
- (BOOL)shouldTranscodeForMMS;
- (id)optionsForMedia;
- (id)filenameForMedia;
- (id)previewTitle;
- (NSInteger)mediaType;

@end