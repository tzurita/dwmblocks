#define CMDLENGTH 45
#define DELIMITER "  "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	BLOCK("cat /tmp/recordingicon	2>/dev/null", 0, 9),
	BLOCK("sb-tasks",				10, 26),
	BLOCK("sb-pacpackages",			0, 8),
	BLOCK("sb-doppler",				0, 13),
	BLOCK("sb-forecast",			18000, 5),
	BLOCK("sb-volume",				0, 10),
	BLOCK("sb-battery",				5, 3),
	BLOCK("sb-clock",				60, 1),
	BLOCK("sb-internet",			5, 4),
	BLOCK("sb-help-icon",			0, 15),
};
