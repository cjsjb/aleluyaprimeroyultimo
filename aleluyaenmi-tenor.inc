\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 6/8
		\clef "treble_8"
		\set Staff.printKeyCancellation = ##t
		\key a \minor

		R2.*2  |
		r4. r8 b b  |
		b 4 b 8 b 4 b 8  |
%% 5
		c' 4. r8 c' c'  |
		c' 4 c' 8 c' 4 c' 8  |
		c' 4. r8 c' c'  |
		d' 2.  |
		b 2.  |
%% 10
		R2.  |
		r4. r8 b b  |
		b 4 b 8 b 4 b 8  |
		c' 4. r8 c' c'  |
		c' 4 c' 8 c' 4 c' 8  |
%% 15
		c' 4. r8 c' c'  |
		d' 2.  |
		e' 2.  |
		R2.  |
		\bar "|."
	}

	\lyricsto "voz-tenor" \new Lyrics \lyricmode {
		A -- le -- lu... a -- le -- lu -- ya,
		a -- le -- lu... a -- le -- lu -- ya,
		a -- le -- lu -- ya.

		A -- le -- lu... a -- le -- lu -- ya,
		a -- le -- lu... a -- le -- lu -- ya,
		a -- le -- lu -- ya.
	}
>>
