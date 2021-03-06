/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (C) 2012-2016 VMware, Inc.  All rights reserved. -- VMware Confidential
 *
 *
 */

#ifndef CManifestCollectionDoc_h_
#define CManifestCollectionDoc_h_


#include "Doc/ResponseDoc/CManifestDoc.h"

namespace Caf {

/// A simple container for objects of type ManifestCollection
class RESPONSEDOC_LINKAGE CManifestCollectionDoc {
public:
	CManifestCollectionDoc();
	virtual ~CManifestCollectionDoc();

public:
	/// Initializes the object with everything required by this
	/// container. Once initialized, this object cannot
	/// be changed (i.e. it is immutable).
	void initialize(
		const std::deque<SmartPtrCManifestDoc> manifest);

public:
	/// Accessor for the Manifest
	std::deque<SmartPtrCManifestDoc> getManifest() const;

private:
	bool _isInitialized;

	std::deque<SmartPtrCManifestDoc> _manifest;

private:
	CAF_CM_DECLARE_NOCOPY(CManifestCollectionDoc);
};

CAF_DECLARE_SMART_POINTER(CManifestCollectionDoc);

}

#endif
