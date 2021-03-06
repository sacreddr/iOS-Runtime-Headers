/* Generated by RuntimeBrowser.
 */

@protocol GEOVenueIdentifier <NSObject>

@required

- (bool)_hasBusinessID;
- (bool)_hasVenueID;
- (unsigned long long)businessID;
- (NSArray *)componentIdentifiers;
- (GEOPDVenueIdentifier *)placeDataVenueIdentifier;
- (GEOPDVenueIdentifier *)placeDataVenueIdentifierForVenue;
- (unsigned long long)venueID;

@end
