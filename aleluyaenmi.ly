% This LilyPond file was generated by Rosegarden 1.7.3
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
	title = "Aleluya"
	subtitle = "Yo soy el primero y el último"
	tagline = "Coro Juvenil San Juan Bosco"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = {
	\time 6/8
	\skip 2.*18
}
globalTempo = {
	\tempo 4 = 90
	\skip 2.*18
}
\score {
	<<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "aleluyaenmi-acordes.inc"
		\new StaffGroup <<
			\include "aleluyaenmi-soprano.inc"
			\include "aleluyaenmi-mezzo.inc"
			\include "aleluyaenmi-tenor.inc"
		>>

	>>

	\layout {
		\context {
			%\RemoveEmptyStaffContext
		}
	}
}
