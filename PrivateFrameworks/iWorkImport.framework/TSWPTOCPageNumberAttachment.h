/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface TSWPTOCPageNumberAttachment : TSWPTextualAttachment {
    NSString *_bookmarkName;
    NSString *_pageNumber;
}

@property(copy) NSString * bookmarkName;
@property(copy) NSString * pageNumber;

- (id)bookmarkName;
- (void)dealloc;
- (int)elementKind;
- (id)initFromUnarchiver:(id)arg1;
- (id)pageNumber;
- (void)saveToArchiver:(id)arg1;
- (void)setBookmarkName:(id)arg1;
- (void)setPageNumber:(id)arg1;
- (id)stringEquivalent;
- (id)stringWithPageNumber:(unsigned int)arg1 pageCount:(unsigned int)arg2 charIndex:(unsigned int)arg3;
- (const struct TextualAttachmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; int x6; }*)textualAttachmentArchiveFromUnarchiver:(id)arg1;

@end