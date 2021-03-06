/*******************************************************************************
 *
 * DDHandler.h - Class Header File
 *
 * Description	:	Moonlight Company
 *			Maze Solver Project
 * 			Direction Decider Handler Class
 *
 * Modified	: 15.05.2016 by Doga Yucalan ( yucalan.doga@metu.edu.tr  )
 * Created	: 24.04.2016 by Utku Norman  ( norman.utku@metu.edu.tr  )
 *
 * People	:	Doga Yucalan ( yucalan.doga@metu.edu.tr )
 *			Utku Norman  ( norman.utku@metu.edu.tr  )
 *
 ******************************************************************************/

#ifndef DDHANDLER_H
#define DDHANDLER_H

#include "Packages.h"

class DDHandler
{
	public:

		/** @brief Constructor.
		 */
		DDHandler( void )		;

		/** @brief Handler.
		 */
		DDPacket handle(
			PSMPacket	platformState	,
			float	 	ballPositionAngle	,
			RPPacket	desiredPathData	,
			bool		debugMode	= false
			) ;

		/** @brief Print and display the current state.
		 */
		void printState(
			bool printMode = false , 
			bool displayMode = false 
			);
	private:
		DDPacket state			;

		bool debugMode			;
		
		float findDifferentialHeight(
			float currentHeight	,
			float levelToGo		,
			std::string whereAmI
			);

};

#endif // DDHANDLER_H
