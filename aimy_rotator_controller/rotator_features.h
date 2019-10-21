
/* main features */

#define FEATURE_ELEVATION_CONTROL      // uncomment this for AZ/EL rotators
#define FEATURE_YAESU_EMULATION           // uncomment this for Yaesu GS-232 emulation on control port
#define LANGUAGE_ENGLISH         // all languages customized in rotator_language.h

/* position sensors - pick one for azimuth and one for elevation if using an az/el rotator */
#define FEATURE_AZ_POSITION_POTENTIOMETER   //this is used for both a voltage from a rotator control or a homebrew rotator with a potentiometer
#define FEATURE_EL_POSITION_POTENTIOMETER


/* preset rotary encoder features and options */
// #define FEATURE_AZ_PRESET_ENCODER            // Uncomment for Rotary Encoder Azimuth Preset support
// #define FEATURE_EL_PRESET_ENCODER            // Uncomment for Rotary Encoder Elevation Preset support (requires FEATURE_AZ_PRESET_ENCODER above)
#define OPTION_ENCODER_HALF_STEP_MODE
#define OPTION_ENCODER_ENABLE_PULLUPS          // define to enable weak pullups on rotary encoder pins
#define OPTION_INCREMENTAL_ENCODER_PULLUPS  // define to enable weak pullups on 3 phase incremental rotary encoder pins
//#define OPTION_PRESET_ENCODER_RELATIVE_CHANGE   // this makes the encoder(s) change the az or el in a relative fashion rather then store an absolute setting
#define OPTION_PRESET_ENCODER_0_360_DEGREES

/* position sensor options */
#define OPTION_AZ_POSITION_ROTARY_ENCODER_HARD_LIMIT // stop azimuth at lower and upper limit rather than rolling over
#define OPTION_EL_POSITION_ROTARY_ENCODER_HARD_LIMIT // stop elevation at lower and upper limits rather than rolling over
#define OPTION_AZ_POSITION_PULSE_HARD_LIMIT  // stop azimuth at lower and upper limit rather than rolling over
#define OPTION_EL_POSITION_PULSE_HARD_LIMIT  // stop elevation at lower and upper limits rather than rolling over
#define OPTION_POSITION_PULSE_INPUT_PULLUPS  // define to enable weak pullups on position pulse inputs

/* less often used features and options */
#define OPTION_GS_232B_EMULATION          // comment this out to default to Yaesu GS-232A emulation when using FEATURE_YAESU_EMULATION above
// #define FEATURE_ROTATION_INDICATOR_PIN     // activate rotation_indication_pin to indicate rotation
// #define FEATURE_LIMIT_SENSE
// #define FEATURE_TIMED_BUFFER           // Support for Yaesu timed buffer commands
// #define OPTION_SERIAL_HELP_TEXT        // Yaesu help command prints help
// #define FEATURE_PARK
// #define FEATURE_AUTOPARK               // Requires FEATURE_PARK
// #define OPTION_AZ_MANUAL_ROTATE_LIMITS    // this option will automatically stop the L and R commands when hitting a CCW or CW limit (settings are AZ_MANUAL_ROTATE_CCW_LIMIT, AZ_MANUAL_ROTATE_CW_LIMIT) 
// #define OPTION_EL_MANUAL_ROTATE_LIMITS    // (settings are EL_MANUAL_ROTATE_DOWN_LIMIT, EL_MANUAL_ROTATE_UP_LIMIT)
#define OPTION_EASYCOM_AZ_QUERY_COMMAND // Adds non-standard Easycom command: AZ with no parm returns current azimuth
#define OPTION_EASYCOM_EL_QUERY_COMMAND // Adds non-standard Easycom command: EL with no parm returns current elevation
// #define OPTION_C_COMMAND_SENDS_AZ_AND_EL  // uncomment this when using Yaesu emulation with Ham Radio Deluxe
// #define OPTION_DELAY_C_CMD_OUTPUT         // uncomment this when using Yaesu emulation with Ham Radio Deluxe
#define FEATURE_ONE_DECIMAL_PLACE_HEADINGS
#define OPTION_EL_SPEED_FOLLOWS_AZ_SPEED    // changing the azimith speed with Yaesu X commands or an azimuth speed pot will also change elevation speed
// #define OPTION_PULSE_IGNORE_AMBIGUOUS_PULSES // for azimuth and elevation position pulse input feature, ignore pulses that arrive when no rotation is active
// #define OPTION_BUTTON_RELEASE_NO_SLOWDOWN  // disables slowdown when CW or CCW button is released, or stop button is depressed
#define OPTION_SYNC_RTC_TO_GPS // if both realtime clock and GPS are present, synchronize realtime clock to GPS
#define OPTION_DISPLAY_STATUS
#define OPTION_DISPLAY_HEADING
#define OPTION_DISPLAY_HEADING_AZ_ONLY
#define OPTION_DISPLAY_HEADING_EL_ONLY
#define OPTION_DISPLAY_HHMM_CLOCK  // display HH:MM clock  (set position with #define LCD_HHMM_CLOCK_POSITION)
#define DEFAULT_DEBUG_STATE 0 // 1 = activate debug mode at startup; this should be set to zero unless you're debugging something at startup
#define DEBUG_DUMP  // normally compile with this activated unless you're really trying to save memory
