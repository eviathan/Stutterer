/*
  ==============================================================================

    MainControls.h
    Created: 22 Jul 2017 10:17:41pm
    Author:  Brian Williams

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "ConfigControls.h"

//==============================================================================
/*
*/
class MainControls    : public Component
{
public:
    MainControls();
    ~MainControls();
    
    ConfigControls configControls;

    void paint (Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainControls)
};
