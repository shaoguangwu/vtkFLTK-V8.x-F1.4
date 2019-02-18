// generated by Fast Light User Interface Designer (fluid) version 1.0400

#ifndef MorningStarUI_h
#define MorningStarUI_h
#include <FL/Fl.H>
/* -*- Mode: C++; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 2 -*-
 *
 * $Id: MorningStarUI.fl,v 1.13 2004/05/13 18:37:49 xpxqx Exp $
 *
 * Copyright (c) 2002 - 2004 Sean McInerney
 * All rights reserved.
 *
 * See Copyright.txt or http://vtkfltk.sourceforge.net/Copyright.html
 * for details.
 *
 *    This software is distributed WITHOUT ANY WARRANTY; without even 
 *    the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR 
 *    PURPOSE.  See the above copyright notice for more information.
 *
 */
#include "MorningStarBase.h"
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Value_Slider.H>
#include <FL/Fl_Roller.H>
#include <FL/Fl_Slider.H>

class VTK_EXPORT MorningStarUI : public MorningStarBase {
public:
  static MorningStarUI* New(void); 
  vtkTypeMacro(MorningStarUI, MorningStarBase); 
  MorningStarUI();
private:
  Fl_Double_Window *mConeWindow;
  inline void cb_mConeWindow_i(Fl_Double_Window*, void*);
  static void cb_mConeWindow(Fl_Double_Window*, void*);
  Fl_VTK_Window *mConeView;
  Fl_Box *mInstructionsBox;
  inline void cb_show_i(Fl_Button*, void*);
  static void cb_show(Fl_Button*, void*);
  inline void cb_hide_i(Fl_Button*, void*);
  static void cb_hide(Fl_Button*, void*);
  inline void cb_show1_i(Fl_Button*, void*);
  static void cb_show1(Fl_Button*, void*);
  inline void cb_hide1_i(Fl_Button*, void*);
  static void cb_hide1(Fl_Button*, void*);
  inline void cb_quit_i(Fl_Button*, void*);
  static void cb_quit(Fl_Button*, void*);
  Fl_Double_Window *mMaceWindow;
  Fl_VTK_Window *mMaceView;
  Fl_Value_Slider *mThetaSlider;
  inline void cb_mThetaSlider_i(Fl_Value_Slider*, void*);
  static void cb_mThetaSlider(Fl_Value_Slider*, void*);
  Fl_Value_Slider *mPhiSlider;
  inline void cb_mPhiSlider_i(Fl_Value_Slider*, void*);
  static void cb_mPhiSlider(Fl_Value_Slider*, void*);
  Fl_Value_Slider *mResSlider;
  inline void cb_mResSlider_i(Fl_Value_Slider*, void*);
  static void cb_mResSlider(Fl_Value_Slider*, void*);
  Fl_Value_Slider *mRadiusSlider;
  inline void cb_mRadiusSlider_i(Fl_Value_Slider*, void*);
  static void cb_mRadiusSlider(Fl_Value_Slider*, void*);
  Fl_Value_Slider *mHeightSlider;
  inline void cb_mHeightSlider_i(Fl_Value_Slider*, void*);
  static void cb_mHeightSlider(Fl_Value_Slider*, void*);
  Fl_Roller *mScaleRoller;
  inline void cb_mScaleRoller_i(Fl_Roller*, void*);
  static void cb_mScaleRoller(Fl_Roller*, void*);
  Fl_Slider *mRedSphereSlider;
  inline void cb_mRedSphereSlider_i(Fl_Slider*, void*);
  static void cb_mRedSphereSlider(Fl_Slider*, void*);
  Fl_Slider *mGreenSphereSlider;
  inline void cb_mGreenSphereSlider_i(Fl_Slider*, void*);
  static void cb_mGreenSphereSlider(Fl_Slider*, void*);
  Fl_Slider *mBlueSphereSlider;
  inline void cb_mBlueSphereSlider_i(Fl_Slider*, void*);
  static void cb_mBlueSphereSlider(Fl_Slider*, void*);
public:
  Fl_Slider *mSphereOpacitySlider;
private:
  inline void cb_mSphereOpacitySlider_i(Fl_Slider*, void*);
  static void cb_mSphereOpacitySlider(Fl_Slider*, void*);
  Fl_Slider *mRedSpikeSlider;
  inline void cb_mRedSpikeSlider_i(Fl_Slider*, void*);
  static void cb_mRedSpikeSlider(Fl_Slider*, void*);
  Fl_Slider *mGreenSpikeSlider;
  inline void cb_mGreenSpikeSlider_i(Fl_Slider*, void*);
  static void cb_mGreenSpikeSlider(Fl_Slider*, void*);
  Fl_Slider *mBlueSpikeSlider;
  inline void cb_mBlueSpikeSlider_i(Fl_Slider*, void*);
  static void cb_mBlueSpikeSlider(Fl_Slider*, void*);
  Fl_Slider *mSpikeOpacitySlider;
  inline void cb_mSpikeOpacitySlider_i(Fl_Slider*, void*);
  static void cb_mSpikeOpacitySlider(Fl_Slider*, void*);
public:
  void Check(void);
  void ReceiveMaceParam(void);
private:
  MorningStarUI(const MorningStarUI&); // Not Implemented.
  MorningStarUI& operator=(const MorningStarUI&); // Not Implemented.
  friend void MorningStarUIDummy(void); 
};
void MorningStarUIDummy(void);
#endif
