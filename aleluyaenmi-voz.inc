\context Staff = "voz" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Voz"
	\set Staff.shortInstrumentName = "V."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-voz" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 6/8
		\clef "treble"
		\set Staff.printKeyCancellation = ##t
		\key e \major

		R2.*2  |
		b' 8 e' e' e' 4. ~  |
		e' 4. r  |
%% 5
		c'' 8 e' e' e' 4. ~  |
		e' 4. r8 e' e'  |
		g' 2. (
		fis' 2. )  |
		e' 2.  |
%% 10
		R2.  |
		b' 8 e' e' e' 4. ~  |
		e' 4. r  |
		c'' 8 e' e' e' 4. ~  |
		e' 4. r8 e' e'  |
%% 15
		g' 2. (
		a' 2. )  |
		b' 2.  |
		R2.  |
		\bar "|."
	}

	\lyricsto "voz-voz" \new Lyrics \lyricmode {
		A -- le -- lu -- ya,
		a -- le -- lu -- ya,
		a -- le -- lu __ ya.

		A -- le -- lu -- ya,
		a -- le -- lu -- ya,
		a -- le -- lu __ ya.
	}
>>
