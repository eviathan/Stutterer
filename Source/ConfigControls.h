/*
  ==============================================================================

    ConfigControls.h
    Created: 22 Jul 2017 10:24:22pm
    Author:  Brian Williams

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class ConfigControls    : public Component
{
public:
    ConfigControls();
    ~ConfigControls();

    ToggleButton invert;
    
    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ConfigControls)
};
