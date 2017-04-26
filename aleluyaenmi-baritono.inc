\context Staff = "baritono" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Barítono"
	\set Staff.shortInstrumentName = "B."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-baritono" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 6/8
		\clef "treble_8"
		\set Staff.printKeyCancellation = ##t
		\key e \major

		R2.*2  |
		r4. r8 e e  |
		e 4 e 8 e 4 e 8  |
%% 5
		a, 4. r8 a, a,  |
		a, 4 a, 8 a, 4 a, 8  |
		c 4. r8 c c  |
		d 2.  |
		e 2.  |
%% 10
		R2.  |
		r4. r8 e e  |
		e 4 e 8 e 4 e 8  |
		a, 4. r8 a, a,  |
		a, 4 a, 8 a, 4 a, 8  |
%% 15
		c 4. r8 c c  |
		d 2.  |
		e 2.  |
		R2.  |
		\bar "|."
	}

	\lyricsto "voz-baritono" \new Lyrics \lyricmode {
		A -- le -- lu... a -- le -- lu -- ya,
		a -- le -- lu... a -- le -- lu -- ya,
		a -- le -- lu -- ya.

		A -- le -- lu... a -- le -- lu -- ya,
		a -- le -- lu... a -- le -- lu -- ya,
		a -- le -- lu -- ya.
	}
>>
