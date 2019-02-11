/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class JuceTestAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    JuceTestAudioProcessorEditor (JuceTestAudioProcessor&);
    ~JuceTestAudioProcessorEditor();

    //==============================================================================
    void MakeControls();
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    JuceTestAudioProcessor& processor;

    enum EControls {
    cInputGain = 0,
    cOutputGain,
    a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w,
    kNumControls
    };

    std::array<Slider, kNumControls> slider;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (JuceTestAudioProcessorEditor)
};
