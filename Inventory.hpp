class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class i6aa_MIST_TAG:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\i6AA_mist\data\MISTCARD.paa";
		displayName="MIST Tag";
		descriptionShort="Apply this to Casualties to inform the treatment chain of what treatment has been done and what is needed.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=0.1;
		};
	};
}