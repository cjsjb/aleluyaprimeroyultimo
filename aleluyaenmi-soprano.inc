\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 6/8
		\clef "treble"
		\set Staff.printKeyCancellation = ##t
		\key e \major

		R2.*2  |
		b'' 8 e'' e'' e'' 4. ~  |
		e'' 4. r  |
%% 5
		a'' 8 e'' e'' e'' 4. ~  |
		e'' 4. r8 e'' e''  |
		g'' 2. (
		% warning: overlong bar truncated here |
		fis'' 2. )  |
		e'' 2.  |
%% 10
		R2.  |
		b'' 8 e'' e'' e'' 4. ~  |
		e'' 4. r  |
		a'' 8 e'' e'' e'' 4. ~  |
		e'' 4. r8 e'' e''  |
%% 15
		g'' 2. (
		% warning: overlong bar truncated here |
		a'' 2. )  |
		b'' 2.  |
		R2.  |
		\bar "|."
	}

	\lyricsto "voz-soprano" \new Lyrics \lyricmode {
		A -- le -- lu -- ya,
		a -- le -- lu -- ya,
		a -- le -- lu __ ya.

		A -- le -- lu -- ya,
		a -- le -- lu -- ya,
		a -- le -- lu __ ya.
	}
>>
