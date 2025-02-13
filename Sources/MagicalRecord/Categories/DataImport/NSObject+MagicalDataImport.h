//
//  NSDictionary+MagicalDataImport.h
//  Magical Record
//
//  Created by Saul Mora on 9/4/11.
//  Copyright 2011 Magical Panda Software LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "../../Core/MagicalRecordXcode7CompatibilityMacros.h"

@interface NSObject (MagicalRecord_DataImport)

- (MR_nullable NSString *) MR_lookupKeyForAttribute:(MR_nonnull NSAttributeDescription *)attributeInfo;
- (MR_nullable id) MR_valueForAttribute:(MR_nonnull NSAttributeDescription *)attributeInfo;

- (MR_nullable NSString *) MR_lookupKeyForRelationship:(MR_nonnull NSRelationshipDescription *)relationshipInfo;
- (MR_nullable id) MR_relatedValueForRelationship:(MR_nonnull NSRelationshipDescription *)relationshipInfo;

@end
