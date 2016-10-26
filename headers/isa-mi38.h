/*******************************************************************************
 * Copyright (c) 2016 
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *******************************************************************************/
/*
 * isa-mi38.h
 *
 *  Created on: Oct 26, 2016
 *      Author: lhousner
 */

#ifndef ISA_MI38_H_
#define ISA_MI38_H_

enum  ISA_MI_38 {
	NOOP	    =	0x0000	,	/*No Operation                                  */
	SETSPPFP	=	0x0022	,	/*Set Space Pointer From Pointer                */
	DESS	    =	0x0025	,	/*Destroy Space                                 */
	SETSPFP	    =	0x0032	,	/*Set System Pointer From Pointer               */
	MATS	    =	0x0036	,	/*Materialize Space Attributes                  */
	SETDPADR	=	0x0046	,	/*Set Data Pointer Addressability               */
	SETDPAT  	=	0x004A	,	/*Set Data Pointer Attributes                   */
	MODS    	=	0x0062	,	/*Modify Space Attributes                       */
	CRTS	    =	0x0072	,	/*Create Space                                  */
	SETSPP  	=	0x0082	,	/*Set Space Pointer                             */
	ADDSPP  	=	0x0083	,	/*Add Space Pointer                             */
	SUBSPP  	=	0x0087	,	/*Subtract Space Pointer Offset                 */
	SETSPPO  	=	0x0092	,	/*Set Space Pointer Offset                      */
	SETSPPD 	=	0x0093	,	/*Set Space Pointer With Displacement           */
	SETDP   	=	0x0096	,	/*Set Data Pointer                              */
	STSPPO  	=	0x00A2	,	/*Store Space Pointer Offset                    */
	CRTCTX  	=	0x0112	,	/*Create Context                                */
	CRTUP   	=	0x0116	,	/*Create User Profile                           */
	DESCTX  	=	0x0121	,	/*Destroy Context                               */
	DESUP   	=	0x0125	,	/*Destroy User Profile                          */
	CPYBWP  	=	0x0132	,	/*Copy Bytes With Pointers                      */
	MATCTX  	=	0x0133	,	/*Materialize Context                           */
	MATAUOBJ	=	0x013B	,	/*Materialize Authorized Objects                */
	MATUP	    =	0x013E	,	/*Materialize User Profile                      */
	MODUP   	=	0x0142	,	/*Modify User Profile                           */
	MATAUU  	=	0x0143	,	/*Materialize Authorized Users                  */
	MATAU   	=	0x0153	,	/*Materialize Authority                         */
	RENAME  	=	0x0162	,	/*Rename Object                                 */
	RSLVDP  	=	0x0163	,	/*Resolve Data Pointer                          */
	RSLVSP  	=	0x0164	,	/*Resolve System Pointer                        */
	GRANT   	=	0x0173	,	/*Grant Authority                               */
	MODADR  	=	0x0192	,	/*Modify Addressability                         */
	RETRACT  	=	0x0193	,	/*Retract Authority                             */
	XFRO    	=	0x01A2	,	/*Transfer Ownership                            */
	DELPGOBS 	=	0x0211	,	/*Delete Program Observability                  */
	ACTPG	    =	0x0212	,	/*Activate Program                              */
	DESPG   	=	0x0221	,	/*Destroy Program                               */
	DEACTPG  	=	0x0225	,	/*De-activate Program                           */
	MATPG   	=	0x0232	,	/*Materialize Program                           */
	CRTPG   	=	0x023A	,	/*Create Program                                */
	STPLLEN  	=	0x0241	,	/*Store Parameter List Length                   */
	SETALLEN	=	0x0242	,	/*Set Argument List Length                      */
	END	        =	0x0260	,	/*End                                           */
	XCTL    	=	0x0282	,	/*Transfer Control                              */
	CALLX   	=	0x0283	,	/*Call External                                 */
	CALLI   	=	0x0293	,	/*Call Internal                                 */
	RTX	        =	0x02Al	,	/*Return External                               */
	MODASA	    =	0x02F2	,	/*Modify Automatic Storage Allocation           */
	DESPCS	    =	0x0311	,	/*Destroy Process Control Space                 */
	MATPRLK	    =	0x0312	,	/*Materialize Process Locks                     */
	CRTQ     	=	0x0316	,	/*Create Queue                                  */
	CRTPRCS	    =	0x0322	,	/*Create Process Control Space                  */
	INITPR   	=	0x0324	,	/*Initiate Process                              */
	DESQ    	=	0x0325	,	/*Destroy Queue                                 */
	MODRMC   	=	0x0326	,	/*Modify Resource Management Control            */
	CRTDOBJ 	=	0x0327	,	/*Create Duplicate Object                       */
	TERMPR  	=	0x0332	,	/*Terminate Process                             */
	MATPRATR	=	0x0333	,	/*Materialize Process Attributes                */
	MATQAT	    =	0x0336	,	/*Materialize Queue Attributes                  */
	MODPRATR	=	0x0337	,	/*Modify Process Attributes                     */
	MATOBJLK	=	0x033A	,	/*Materialize Object Locks                      */
	MATSELLK	=	0x033E	,	/*Materialize Selected Locks                    */
	SETACST 	=	0x0341	,	/*Set Access State                              */
	WAITEVT 	=	0x0344	,	/*Wait On Event                                 */
	SIGEVT  	=	0x0345	,	/*Signal Event                                  */
	DESAG   	=	0x0351	,	/*Destroy Access Group                          */
	MATRMD  	=	0x0352	,	/*Materialize Resource Management Data          */
	SUSOBJ  	=	0x0361	,	/*Suspend Object                                */
	CRTAG   	=	0x0366	,	/*Create Access Group                           */
	ENQ	        =	0x0368	,	/*Enqueue                                       */
	EBLEVTMN	=	0x0369	,	/*Enable Event Monitor                          */
	MNEVT	    =	0x0371	,	/*Monitor Event                                 */
	MODPEVTM	=	0x0372	,	/*Modify Process Event Mask                     */
	RETEVTD	    =	0x0375	,	/*Retrieve Event Data                           */
	ENSOBJ	    =	0x0381	,	/*Ensure Object                                 */
	XFRLOCK	    =	0x0382	,	/*Transfer Object Lock                          */
	RESPR	    =	0x0386	,	/*Resume Process                                */
	SUSPR   	=	0x0392	,	/*Suspend Process                               */
	DBLEVTMN	=	0x0399	,	/*Disable Event Monitor                         */
	MATAGAT  	=	0x03A2	,	/*Materialize Access Group Attributes           */
	CANEVTMN	=	0x03D1	,	/*Cancel Event Monitor                          */
	MATEXCPD	=	0x03D7	,	/*Materialize Exception Description             */
	RETEXCPD	=	0x03E2	,	/*Retrieve Exception Data                       */
	SNSEXCPD	=	0x03E3	,	/*Sense Exception Description                   */
	MODEXCPD	=	0x03EF	,	/*Modify Exception Description                  */
	RTNEXCP  	=	0x03El	,	/*Return From Exception                         */
	UNLOCK  	=	0x03F1	,	/*Unlock Object                                 */
	UNLOCKSL	=	0x03F2	,	/*Unlock Space Location                         */
	LOCK    	=	0x03F5	,	/*Lock Object                                   */
	LOCKSL  	=	0x03F6	,	/*Lock Space Location                           */
	DEACTCR 	=	0x0401	,	/*De-activate Cursor                            */
	ACTCR   	=	0x0402	,	/*Activate Cursor                               */
	DESDS   	=	0x0421	,	/*Destroy Data Space                            */
	DESDSINX	=	0x0425	,	/*Destroy Data Space Index                      */
	DESCR   	=	0x0429	,	/*Destroy Cursor                                */
	MATDSIAT	=	0x0433	,	/*Materialize Data Space Index Attributes       */
	MATDSAT 	=	0x0437	,	/*Materialize Data Space Attributes             */
	MATCRAT 	=	0x043B	,	/*Materialize Cursor Attributes                 */
	CRTINX  	=	0x0446	,	/*Create Independent Index                      */
	CRTCR   	=	0x044A	,	/*Create Cursor                                 */
	DESINX  	=	0x0451	,	/*Destroy Independent Index                     */
	CRTDS   	=	0x045A	,	/*Create Data Space                             */
	MATINXAT	=	0x0462	,	/*Materialize Independent Index Attributes      */
	CRTDSINX	=	0x046A	,	/*Create Data Space Index                       */
	REQIO   	=	0x0471	,	/*Request I/O                                   */
	DELDSEN	    =	0x0481	,	/*Delete Data Space Entry                       */
	DBMAINT	    =	0x0482	,	/*Data Base Maintenance                         */
	INSDSEN	    =	0x0483	,	/*Insert Data Space Entry                       */
	RMVINXEN	=	0x0484	,	/*Remove Independent Index Entry                */
	INSSDSE  	=	0x0487	,	/*Insert Sequential Data Space Entries          */
	RETDSEN 	=	0x048A	,	/*Retrieve Data Space Entry                     */
	RETSDSE 	=	0x048B	,	/*Retrieve Sequential Data Space Entries        */
	SETCR   	=	0x048C	,	/*Set Cursor                                    */
	RLSDSEN  	=	0x048E	,	/*Release Data Space Entries                    */
	CPYDSE  	=	0x048F	,	/*Copy Data Space Entries                       */
	UPDSEN  	=	0x0492	,	/*Update Data Space Entry                       */
	FNDINXEN	=	0x0494	,	/*Find Independent Index Entry                  */
	CRTCD   	=	0x0496	,	/*Create Controller Description                 */
	ENSDSEN 	=	0x0499	,	/*Ensure Data Space Entries                     */
	CRTLUD  	=	0x049A	,	/*Create Logical Unit Description               */
	CRTND   	=	0x049E	,	/*Create Network Description                    */
	DESCD   	=	0x04A1	,	/*Destroy Controller Description                */
	INSINXEN	=	0x04A3	,	/*Insert Independent Index Entry                */
	DESLUD  	=	0x04A9	,	/*Destroy Logical Unit Description              */
	DESND   	=	0x04AD	,	/*Destroy Network Description                   */
	MATCD   	=	0x04B3	,	/*Materialize Controller Description            */
	MATLUD  	=	0x04BB	,	/*Materialize Logical Unit Description          */
	MATND   	=	0x04BF	,	/*Materialize Network Description               */
	MODCD   	=	0x04C3	,	/*Modify Controller Description                 */
	MODLUD  	=	0x04CB	,	/*Modify Logical Unit Description               */
	MODND   	=	0x04CF	,	/*Modify Network Description                    */
	MATPTR  	=	0x0512	,	/*Materialize Pointer                           */
	MATPTRL 	=	0x0513	,	/*Materialize Pointer Locations                 */
	MATINV  	=	0x0516	,	/*Materialize Invocation                        */
	MATSOBJ 	=	0x053E	,	/*Materialize System Object                     */
	TRINV   	=	0x0551	,	/*Trace Invocations                             */
	TRINS   	=	0x0552	,	/*Trace Instructions                            */
	CANTRINS	=	0x0562	,	/*Cancel Trace Instructions                     */
	CANINVTR	=	0x0581	,	/*Cancel Invocation Trace                       */
	TERMMPR 	=	0x0622	,	/*Terminate Machine Processing                  */
	MATMATR 	=	0x0636	,	/*Materialize Machine Attributes                */
	MODMATR 	=	0x0646	,	/*Modify Machine Attributes                     */
	DIAG    	=	0x0672	,	/*Diagnose                                      */
	RECLAIM 	=	0x0686	,	/*Reclaim Lost Objects                          */
	VERIFY  	=	0x1007	,	/*Verify                                        */
	B	        =	0x1011	,	/*Branch                                        */
	SETIP   	=	0x1022	,	/*Set Instruction Pointer                       */
	ADDLC   	=	0x1023	,	/*Add Logical Character                         */
	SUBLC   	=	0x1027	,	/*Subtract Logical Character                    */
	TSTBUM   	=	0x102A	,	/*Test Bits under Mask                          */
	DEQ	        =	0x1033	,	/*Dequeue                                       */
	CPYNV   	=	0x1042	,	/*Copy Numeric Value                            */
	ADDN    	=	0x1043	,	/*Add Numeric                                   */
	CAI     	=	0x1044	,	/*Compute Array Index                           */
	CMPNV   	=	0x1046	,	/*Compare Numeric Value                         */
	SUBN    	=	0x1047	,	/*Subtract Numeric                              */
	TESTEXCP	=	0x104A	,	/*Test Exception                                */
	MULT    	=	0x104B	,	/*Multiply                                      */
	DIV	        =	0x104F	,	/*Divide                                        */
	EXTRMAG	    =	0x1052	,	/*Extract Magnitude                             */
	NEG	        =	0x1056	,	/*Negate                                        */
	SCALE    	=	0x1063	,	/*Scale                                         */
	REM	        =	0x1073	,	/*Remainder                                     */
	DIVREM   	=	0x1074	,	/*Divide with Remainders                        */
	CVTCH   	=	0x1082	,	/*Convert Character to Hex                      */
	CVTCN   	=	0x1083	,	/*Convert Character to Numeric                  */
	SEARCH   	=	0x1084	,	/*Search                                        */
	CVTHC   	=	0x1086	,	/*Convert Hex to Character                      */
	CVTEFN   	=	0x1087	,	/*Convert External Form to Numeric Value        */
	NOT     	=	0x108A	,	/*Not                                           */
	CPYHEXNN	=	0x1092	,	/*Copy Hex Digit Numeric to Numeric             */
	AND	        =	0x1093	,	/*And                                           */
	XLATE   	=	0x1094	,	/*Translate                                     */
	CPYHEXNZ	=	0x1096	,	/*Copy Hex Digit Numeric to Zone                */
	OR      	=	0x1097	,	/*Or                                            */
	CPYHEXZN	=	0x109A	,	/*Copy Hex Digit Zone to Numeric                */
	XOR	        =	0x109B	,	/*Exclusive Or                                  */
	CPYHEXZZ	=	0x109E	,	/*Copy Hex Digit Zone to Zone                   */
	TSTRPLC  	=	0x10A2	,	/*Test and Replace Characters                   */
	CVTNC   	=	0x10A3	,	/*Convert Numeric to Character                  */
	CPYBLA  	=	0x10B2	,	/*Copy Bytes Left-Adjusted                      */
	CPYBLAP  	=	0x10B3	,	/*Copy Bytes Left-Adjusted With Pad             */
	CPYBRA  	=	0x10B6	,	/*Copy Bytes Right-Adjusted                     */
	CPYBRAP 	=	0x10B7	,	/*Copy Bytes Right-Adjusted With Pad            */
	CPYBOLA 	=	0x10BA	,	/*Copy Bytes Overlap Left-Adjusted              */
	CPYBOLAP	=	0x10BB	,	/*Copy Bytes Overlap Left-Adjusted With Pad     */
	CPYBREP  	=	0x10BE	,	/*Copy Bytes Repeatedly                         */
	CMPBLA  	=	0x10C2	,	/*Compare Bytes Left-Adjusted                   */
	CMPBLAP 	=	0x10C3	,	/*Compare Bytes Left-Adjusted With Pad          */
	CMPBRA  	=	0x10C6	,	/*Compare Bytes Right-Adjusted                  */
	CMPBRAP 	=	0x10C7	,	/*Compare Bytes Right-Adjusted With Pad         */
	SIGEXCP 	=	0x10CA	,	/*Signal Exception                              */
	EXCHBY  	=	0x10CE	,	/*Exchange Bytes                                */
	CMPPTRA 	=	0x10D2	,	/*Compare Pointer for Object Addressability     */
	SCAN    	=	0x10D3	,	/*Scan                                          */
	CMPPTRT 	=	0x10E2	,	/*Compare Pointer Type                          */
	EDIT    	=	0x10E3	,	/*Edit                                          */
	CMPPSPAD	=	0x10E6	,	/*Compare Pointer for Space Addressability      */
	CMPSPAD 	=	0x10F2	,	/*Compare Space Addressability                  */
	CAT     	=	0x10F3	,	/*Concatenate                                   */
	TESTAU  	=	0x10F7	,	/*Test Authority                                */
	TESTEVT 	=	0x10FA		/*Test Event                                    */
};


#endif /* ISA_MI38_H_ */
