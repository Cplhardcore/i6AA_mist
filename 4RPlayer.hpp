class Man;
class CAManBase: Man
{
	sensitivityEar = 0.2;	
	class ACE_Actions
	{
		class ACE_MainActions
		{
			class 4R_Tag_MIST
			{
				displayName = "MIST Card";
				condition = "_target getVariable ('4R_MIST_TAG' in (items player))";
				statement = "createDialog '4R_MIST_Tag'; _player removeItem '4R_MIST_TAG'";
				icon="\FourRBG\data\MISTCARD.paa";
			};
		};
	};
};