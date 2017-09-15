/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (c) 2012 Vmware, Inc.  All rights reserved.
 *  -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppXml". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#include "stdafx.h"
#include "CmdlUnionXml.h"

using namespace Caf;

void CmdlUnionXml::add(
	const SmartPtrCCmdlUnionDoc cmdlUnionDoc,
	const SmartPtrCXmlElement thisXml) {
	CAF_CM_STATIC_FUNC_VALIDATE("CmdlUnionXml", "add");

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_SMARTPTR(cmdlUnionDoc);
		CAF_CM_VALIDATE_SMARTPTR(thisXml);

		const std::string namespaceValVal = cmdlUnionDoc->getNamespaceVal();
		CAF_CM_VALIDATE_STRING(namespaceValVal);
		thisXml->addAttribute("namespace", namespaceValVal);

		const std::string nameVal = cmdlUnionDoc->getName();
		CAF_CM_VALIDATE_STRING(nameVal);
		thisXml->addAttribute("name", nameVal);

		const std::string versionVal = cmdlUnionDoc->getVersion();
		CAF_CM_VALIDATE_STRING(versionVal);
		thisXml->addAttribute("version", versionVal);
	}
	CAF_CM_EXIT;
}

SmartPtrCCmdlUnionDoc CmdlUnionXml::parse(
	const SmartPtrCXmlElement thisXml) {
	CAF_CM_STATIC_FUNC_VALIDATE("CmdlUnionXml", "parse");

	SmartPtrCCmdlUnionDoc cmdlUnionDoc;

	CAF_CM_ENTER {
		CAF_CM_VALIDATE_SMARTPTR(thisXml);

		const std::string namespaceValStrVal =
			thisXml->findRequiredAttribute("namespace");
		const std::string namespaceValVal = namespaceValStrVal;

		const std::string nameStrVal =
			thisXml->findRequiredAttribute("name");
		const std::string nameVal = nameStrVal;

		const std::string versionStrVal =
			thisXml->findRequiredAttribute("version");
		const std::string versionVal = versionStrVal;

		cmdlUnionDoc.CreateInstance();
		cmdlUnionDoc->initialize(
			namespaceValVal,
			nameVal,
			versionVal);
	}
	CAF_CM_EXIT;

	return cmdlUnionDoc;
}
