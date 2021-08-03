<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
    "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
<meta name="robots" content="noindex,nofollow" />
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
<meta name="generator" content="0.11.1 (2b48ae40ea1b)" />
<meta http-equiv="X-UA-Compatible" content="IE=8" />
<link rel="icon" href="/9.0.0_r3/default/img/icon.png" type="image/png" />
<link rel="stylesheet" type="text/css" media="all"
    title="Default" href="/9.0.0_r3/default/style.css" />
<link rel="alternate stylesheet" type="text/css" media="all"
    title="Paper White" href="/9.0.0_r3/default/print.css" />
<link rel="stylesheet" type="text/css" href="/9.0.0_r3/default/print.css" media="print" />
<link rel="stylesheet" type="text/css" href="/9.0.0_r3/default/jquery.tooltip.css" />

<link rel="search" href="/9.0.0_r3/opensearch"
    type="application/opensearchdescription+xml"
    title="OpenGrok Search for current project(s)" />
<script type="text/javascript" src="/9.0.0_r3/jquery-1.4.4.min.js"></script>
<script type="text/javascript" src="/9.0.0_r3/jquery.tooltip-1.3.pack.js"></script>

<script type="text/javascript" src="/9.0.0_r3/utils.js"></script>
<title>Cross Reference: /art/openjdkjvmti/include/jvmti.h</title>
    <script type="text/javascript">
      var _gaq = _gaq || [];
      var pluginUrl = 
      '//www.google-analytics.com/plugins/ga/inpage_linkid.js';
      _gaq.push(['_require', 'inpage_linkid', pluginUrl]);
      _gaq.push(['_setAccount', 'UA-37941318-1']);
      _gaq.push(['_setDomainName', 'androidxref.com']);
      _gaq.push(['_trackPageview']);
      
      (function() {
      var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
      ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
      var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
      })();      
    </script>
</head><body>
<script type="text/javascript">/* <![CDATA[ */
    document.hash = 'null';document.rev = '';document.link = '/9.0.0_r3/xref/art/openjdkjvmti/include/jvmti.h';document.annotate = false;
    document.domReady.push(function() {domReadyMast();});
    document.pageReady.push(function() { pageReadyMast();});
/* ]]> */</script>
<div id="page">
    <div id="whole_header">
        <form action="/9.0.0_r3/search">
<div id="header">
<a href="/9.0.0_r3/"><span id="MastheadLogo"></span></a>



    <div id="pagetitle"><span id="filename"
                    >Cross Reference: jvmti.h</span></div>
</div>
<div id="Masthead">
    <tt><a href="/9.0.0_r3/xref/">xref</a>: /<a href="/9.0.0_r3/xref/art/">art</a>/<a href="/9.0.0_r3/xref/art/openjdkjvmti/">openjdkjvmti</a>/<a href="/9.0.0_r3/xref/art/openjdkjvmti/include/">include</a>/<a href="/9.0.0_r3/xref/art/openjdkjvmti/include/jvmti.h">jvmti.h</a></tt>
</div>
<div id="bar">
    <ul>
        <li><a href="/9.0.0_r3/"><span id="home"></span>Home</a></li><li><a href="/9.0.0_r3/history/art/openjdkjvmti/include/jvmti.h"><span id="history"></span>History</a></li><li><a href="#" onclick="javascript:get_annotations(); return false;"
            ><span class="annotate"></span>Annotate</a></li><li><a href="#" onclick="javascript:lntoggle();return false;"
            title="Show or hide line numbers (might be slower if file has more than 10 000 lines)."><span id="line"></span>Line#</a></li><li><a
            href="#" onclick="javascript:lsttoggle();return false;"
            title="Show or hide symbol list."><span id="defbox"></span>Navigate</a></li><li><a href="/9.0.0_r3/raw/art/openjdkjvmti/include/jvmti.h"><span id="download"></span>Download</a></li><li><input type="text" id="search" name="q" class="q" />
            <input type="submit" value="Search" class="submit" /></li><li><input type="checkbox" name="path" value="/art/openjdkjvmti/include/" /> only in <b>jvmti.h</b></li>
        
    </ul>
    <input type="hidden" name="project" value="art" />
</div>
        </form>
    </div>
<div id="content">
<script type="text/javascript">/* <![CDATA[ */
document.pageReady.push(function() { pageReadyList();});
/* ]]> */</script>

<div id="src">
    <pre><script type="text/javascript">/* <![CDATA[ */
function get_sym_list(){return [["Macro","xm",[["_JAVA_JVMTI_H_",32]]],["Struct","xs",[["_jvmtiAddrLocationMap",659],["_jvmtiClassDefinition",604],["_jvmtiEnv",1786],["_jvmtiExtensionEventInfo",644],["_jvmtiExtensionFunctionInfo",635],["_jvmtiFrameInfo",535],["_jvmtiHeapCallbacks",586],["_jvmtiHeapReferenceInfoArray",548],["_jvmtiHeapReferenceInfoConstantPool",551],["_jvmtiHeapReferenceInfoField",545],["_jvmtiHeapReferenceInfoJniLocal",562],["_jvmtiHeapReferenceInfoReserved",568],["_jvmtiHeapReferenceInfoStackLocal",554],["_jvmtiLineNumberEntry",617],["_jvmtiLocalVariableEntry",621],["_jvmtiMonitorStackDepthInfo",525],["_jvmtiMonitorUsage",609],["_jvmtiParamInfo",629],["_jvmtiStackInfo",539],["_jvmtiThreadGroupInfo",529],["_jvmtiThreadInfo",518],["_jvmtiTimerInfo",651],["jvmtiInterface_1_",1002]]],["Typedef","xt",[["jlocation",74],["jniNativeInterface",77],["jrawMonitorID",76],["jthread",72],["jthreadGroup",73],["jvmtiAddrLocationMap",473],["jvmtiArrayPrimitiveValueCallback",489],["jvmtiCapabilities",712],["jvmtiClassDefinition",457],["jvmtiEnv",65],["jvmtiEnv",67],["jvmtiError",388],["jvmtiEvent",426],["jvmtiEventBreakpoint",720],["jvmtiEventCallbacks",997],["jvmtiEventClassFileLoadHook",727],["jvmtiEventClassLoad",739],["jvmtiEventClassPrepare",745],["jvmtiEventCompiledMethodLoad",751],["jvmtiEventCompiledMethodUnload",760],["jvmtiEventDataDumpRequest",765],["jvmtiEventDynamicCodeGenerated",768],["jvmtiEventException",774],["jvmtiEventExceptionCatch",784],["jvmtiEventFieldAccess",792],["jvmtiEventFieldModification",802],["jvmtiEventFramePop",814],["jvmtiEventGarbageCollectionFinish",821],["jvmtiEventGarbageCollectionStart",824],["jvmtiEventMethodEntry",827],["jvmtiEventMethodExit",833],["jvmtiEventMode",232],["jvmtiEventMonitorContendedEnter",841],["jvmtiEventMonitorContendedEntered",847],["jvmtiEventMonitorWait",853],["jvmtiEventMonitorWaited",860],["jvmtiEventNativeMethodBind",867],["jvmtiEventObjectFree",875],["jvmtiEventReserved",717],["jvmtiEventResourceExhausted",879],["jvmtiEventSingleStep",886],["jvmtiEventThreadEnd",893],["jvmtiEventThreadStart",898],["jvmtiEventVMDeath",903],["jvmtiEventVMInit",907],["jvmtiEventVMObjectAlloc",912],["jvmtiEventVMStart",920],["jvmtiExtensionEvent",513],["jvmtiExtensionEventInfo",469],["jvmtiExtensionFunction",510],["jvmtiExtensionFunctionInfo",467],["jvmtiFrameInfo",437],["jvmtiHeapCallbacks",455],["jvmtiHeapIterationCallback",480],["jvmtiHeapObjectCallback",498],["jvmtiHeapObjectFilter",180],["jvmtiHeapReferenceCallback",483],["jvmtiHeapReferenceInfo",453],["jvmtiHeapReferenceInfoArray",443],["jvmtiHeapReferenceInfoConstantPool",445],["jvmtiHeapReferenceInfoField",441],["jvmtiHeapReferenceInfoJniLocal",449],["jvmtiHeapReferenceInfoReserved",451],["jvmtiHeapReferenceInfoStackLocal",447],["jvmtiHeapReferenceKind",159],["jvmtiHeapRootCallback",501],["jvmtiHeapRootKind",192],["jvmtiInterface_1",1784],["jvmtiIterationControl",214],["jvmtiJlocationFormat",325],["jvmtiLineNumberEntry",461],["jvmtiLocalVariableEntry",463],["jvmtiMonitorStackDepthInfo",433],["jvmtiMonitorUsage",459],["jvmtiObjectReferenceCallback",507],["jvmtiObjectReferenceKind",206],["jvmtiParamInfo",465],["jvmtiParamKind",266],["jvmtiParamTypes",254],["jvmtiPhase",284],["jvmtiPrimitiveFieldCallback",486],["jvmtiPrimitiveType",172],["jvmtiReservedCallback",495],["jvmtiStackInfo",439],["jvmtiStackReferenceCallback",504],["jvmtiStartFunction",477],["jvmtiStringPrimitiveValueCallback",492],["jvmtiThreadGroupInfo",435],["jvmtiThreadInfo",431],["jvmtiTimerInfo",471],["jvmtiTimerKind",274],["jvmtiVerboseFlag",317]]],["Function","xf",[["AddCapabilities",2427],["AddToBootstrapClassLoaderSearch",2468],["AddToSystemClassLoaderSearch",2472],["Allocate",1791],["ClearBreakpoint",2115],["ClearFieldAccessWatch",2125],["ClearFieldModificationWatch",2135],["CreateRawMonitor",2354],["Deallocate",1796],["DestroyRawMonitor",2359],["DisposeEnvironment",2495],["FollowReferences",1971],["ForceEarlyReturnDouble",1962],["ForceEarlyReturnFloat",1957],["ForceEarlyReturnInt",1947],["ForceEarlyReturnLong",1952],["ForceEarlyReturnObject",1942],["ForceEarlyReturnVoid",1967],["ForceGarbageCollection",2004],["GenerateEvents",2404],["GetAllStackTraces",1908],["GetAllThreads",1809],["GetArgumentsSize",2301],["GetAvailableProcessors",2464],["GetBytecodes",2324],["GetCapabilities",2435],["GetClassFields",2178],["GetClassLoader",2218],["GetClassLoaderClasses",2145],["GetClassMethods",2172],["GetClassModifiers",2167],["GetClassSignature",2151],["GetClassStatus",2157],["GetClassVersionNumbers",2190],["GetConstantPool",2196],["GetCurrentContendedMonitor",1860],["GetCurrentThread",1805],["GetCurrentThreadCpuTime",2443],["GetCurrentThreadCpuTimerInfo",2439],["GetEnvironmentLocalStorage",2503],["GetErrorName",2511],["GetExtensionEvents",2413],["GetExtensionFunctions",2408],["GetFieldDeclaringClass",2261],["GetFieldModifiers",2267],["GetFieldName",2253],["GetFrameCount",1921],["GetFrameLocation",1930],["GetImplementedInterfaces",2184],["GetJLocationFormat",2521],["GetJNIFunctionTable",2388],["GetLineNumberTable",2306],["GetLoadedClasses",2140],["GetLocalDouble",2068],["GetLocalFloat",2061],["GetLocalInstance",2041],["GetLocalInt",2047],["GetLocalLong",2054],["GetLocalObject",2034],["GetLocalVariableTable",2318],["GetMaxLocals",2296],["GetMethodDeclaringClass",2286],["GetMethodLocation",2312],["GetMethodModifiers",2291],["GetMethodName",2279],["GetObjectHashCode",2243],["GetObjectMonitorUsage",2248],["GetObjectSize",2238],["GetObjectsWithTags",1996],["GetOwnedMonitorInfo",1848],["GetOwnedMonitorStackDepthInfo",1854],["GetPhase",2491],["GetPotentialCapabilities",2423],["GetSourceDebugExtension",2223],["GetSourceFileName",2162],["GetStackTrace",1900],["GetSystemProperties",2476],["GetSystemProperty",2481],["GetTag",1986],["GetThreadCpuTime",2451],["GetThreadCpuTimerInfo",2447],["GetThreadGroupChildren",1892],["GetThreadGroupInfo",1887],["GetThreadInfo",1843],["GetThreadListStackTraces",1914],["GetThreadLocalStorage",1877],["GetThreadState",1800],["GetTime",2460],["GetTimerInfo",2456],["GetTopThreadGroups",1882],["GetVersionNumber",2507],["InterruptThread",1839],["IsArrayClass",2208],["IsFieldSynthetic",2273],["IsInterface",2203],["IsMethodNative",2330],["IsMethodObsolete",2340],["IsMethodSynthetic",2335],["IsModifiableClass",2213],["IterateOverHeap",2021],["IterateOverInstancesOfClass",2027],["IterateOverObjectsReachableFromObject",2008],["IterateOverReachableObjects",2014],["IterateThroughHeap",1979],["NotifyFramePop",1937],["PopFrame",1926],["RawMonitorEnter",2363],["RawMonitorExit",2367],["RawMonitorNotify",2376],["RawMonitorNotifyAll",2380],["RawMonitorWait",2371],["RedefineClasses",2233],["RelinquishCapabilities",2431],["ResumeThread",1824],["ResumeThreadList",1828],["RetransformClasses",2228],["RunAgentThread",1865],["SetBreakpoint",2110],["SetEnvironmentLocalStorage",2499],["SetEventCallbacks",2392],["SetEventNotificationMode",2397],["SetExtensionEventCallback",2418],["SetFieldAccessWatch",2120],["SetFieldModificationWatch",2130],["SetJNIFunctionTable",2384],["SetLocalDouble",2103],["SetLocalFloat",2096],["SetLocalInt",2082],["SetLocalLong",2089],["SetLocalObject",2075],["SetNativeMethodPrefix",2345],["SetNativeMethodPrefixes",2349],["SetSystemProperty",2486],["SetTag",1991],["SetThreadLocalStorage",1872],["SetVerboseFlag",2516],["StopThread",1834],["SuspendThread",1814],["SuspendThreadList",1818]]]];} /* ]]> */</script><a class="l" name="1" href="#1">1</a><span class="c">/*
<a class="l" name="2" href="#2">2</a> * Copyright (c) 2003, 2011, Oracle <a href="/9.0.0_r3/s?path=and/">and</a>/<a href="/9.0.0_r3/s?path=and/or">or</a> its affiliates. All rights reserved.
<a class="l" name="3" href="#3">3</a> * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
<a class="l" name="4" href="#4">4</a> *
<a class="l" name="5" href="#5">5</a> * This code is free software; you can redistribute it <a href="/9.0.0_r3/s?path=and/">and</a>/<a href="/9.0.0_r3/s?path=and/or">or</a> modify it
<a class="l" name="6" href="#6">6</a> * under the terms of the GNU General Public License version 2 only, as
<a class="l" name="7" href="#7">7</a> * published by the Free Software Foundation.  Oracle designates this
<a class="l" name="8" href="#8">8</a> * particular file as subject to the "Classpath" exception as provided
<a class="l" name="9" href="#9">9</a> * by Oracle in the LICENSE file that accompanied this code.
<a class="hl" name="10" href="#10">10</a> *
<a class="l" name="11" href="#11">11</a> * This code is distributed in the hope that it will be useful, but WITHOUT
<a class="l" name="12" href="#12">12</a> * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
<a class="l" name="13" href="#13">13</a> * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
<a class="l" name="14" href="#14">14</a> * version 2 for more details (a copy is included in the LICENSE file that
<a class="l" name="15" href="#15">15</a> * accompanied this code).
<a class="l" name="16" href="#16">16</a> *
<a class="l" name="17" href="#17">17</a> * You should have received a copy of the GNU General Public License version
<a class="l" name="18" href="#18">18</a> * 2 along with this work; if not, write to the Free Software Foundation,
<a class="l" name="19" href="#19">19</a> * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
<a class="hl" name="20" href="#20">20</a> *
<a class="l" name="21" href="#21">21</a> * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
<a class="l" name="22" href="#22">22</a> * or visit <a href="/9.0.0_r3/s?path=www.oracle.c&amp;project=art">www.oracle.c</a>om if you need additional information or have any
<a class="l" name="23" href="#23">23</a> * questions.
<a class="l" name="24" href="#24">24</a> */</span>
<a class="l" name="25" href="#25">25</a>
<a class="l" name="26" href="#26">26</a>    <span class="c">/* AUTOMATICALLY GENERATED FILE - DO NOT EDIT */</span>
<a class="l" name="27" href="#27">27</a>
<a class="l" name="28" href="#28">28</a>
<a class="l" name="29" href="#29">29</a>    <span class="c">/* Include file for the Java(tm) Virtual Machine Tool Interface */</span>
<a class="hl" name="30" href="#30">30</a>
<a class="l" name="31" href="#31">31</a>#<b>ifndef</b> <a class="d" href="#_JAVA_JVMTI_H_">_JAVA_JVMTI_H_</a>
<a class="l" name="32" href="#32">32</a>#<b>define</b> <a class="xm" name="_JAVA_JVMTI_H_"/><a href="/9.0.0_r3/s?refs=_JAVA_JVMTI_H_&amp;project=art" class="xm">_JAVA_JVMTI_H_</a>
<a class="l" name="33" href="#33">33</a>
<a class="l" name="34" href="#34">34</a>#<b>include</b> <span class="s">"<a href="/9.0.0_r3/s?path=jni.h&amp;project=art">jni.h</a>"</span>
<a class="l" name="35" href="#35">35</a>
<a class="l" name="36" href="#36">36</a>#<b>ifdef</b> <a href="/9.0.0_r3/s?defs=__cplusplus&amp;project=art">__cplusplus</a>
<a class="l" name="37" href="#37">37</a><b>extern</b> <span class="s">"C"</span> {
<a class="l" name="38" href="#38">38</a>#<b>endif</b>
<a class="l" name="39" href="#39">39</a>
<a class="hl" name="40" href="#40">40</a><b>enum</b> {
<a class="l" name="41" href="#41">41</a>    <a class="xer" name="JVMTI_VERSION_1"/><a href="/9.0.0_r3/s?refs=JVMTI_VERSION_1&amp;project=art" class="xer">JVMTI_VERSION_1</a>   = <span class="n">0x30010000</span>,
<a class="l" name="42" href="#42">42</a>    <a class="xer" name="JVMTI_VERSION_1_0"/><a href="/9.0.0_r3/s?refs=JVMTI_VERSION_1_0&amp;project=art" class="xer">JVMTI_VERSION_1_0</a> = <span class="n">0x30010000</span>,
<a class="l" name="43" href="#43">43</a>    <a class="xer" name="JVMTI_VERSION_1_1"/><a href="/9.0.0_r3/s?refs=JVMTI_VERSION_1_1&amp;project=art" class="xer">JVMTI_VERSION_1_1</a> = <span class="n">0x30010100</span>,
<a class="l" name="44" href="#44">44</a>    <a class="xer" name="JVMTI_VERSION_1_2"/><a href="/9.0.0_r3/s?refs=JVMTI_VERSION_1_2&amp;project=art" class="xer">JVMTI_VERSION_1_2</a> = <span class="n">0x30010200</span>,
<a class="l" name="45" href="#45">45</a>
<a class="l" name="46" href="#46">46</a>    <a class="xer" name="JVMTI_VERSION"/><a href="/9.0.0_r3/s?refs=JVMTI_VERSION&amp;project=art" class="xer">JVMTI_VERSION</a> = <span class="n">0x30000000</span> + (<span class="n">1</span> * <span class="n">0x10000</span>) + (<span class="n">2</span> * <span class="n">0x100</span>) + <span class="n">1</span>  <span class="c">/* version: 1.2.1 */</span>
<a class="l" name="47" href="#47">47</a>};
<a class="l" name="48" href="#48">48</a>
<a class="l" name="49" href="#49">49</a><a href="/9.0.0_r3/s?defs=JNIEXPORT&amp;project=art">JNIEXPORT</a> <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a>
<a class="hl" name="50" href="#50">50</a><a href="/9.0.0_r3/s?defs=Agent_OnLoad&amp;project=art">Agent_OnLoad</a>(<a href="/9.0.0_r3/s?defs=JavaVM&amp;project=art">JavaVM</a> *<a href="/9.0.0_r3/s?defs=vm&amp;project=art">vm</a>, <b>char</b> *<a href="/9.0.0_r3/s?defs=options&amp;project=art">options</a>, <b>void</b> *<a href="/9.0.0_r3/s?defs=reserved&amp;project=art">reserved</a>);
<a class="l" name="51" href="#51">51</a>
<a class="l" name="52" href="#52">52</a><a href="/9.0.0_r3/s?defs=JNIEXPORT&amp;project=art">JNIEXPORT</a> <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a>
<a class="l" name="53" href="#53">53</a><a href="/9.0.0_r3/s?defs=Agent_OnAttach&amp;project=art">Agent_OnAttach</a>(<a href="/9.0.0_r3/s?defs=JavaVM&amp;project=art">JavaVM</a>* <a href="/9.0.0_r3/s?defs=vm&amp;project=art">vm</a>, <b>char</b>* <a href="/9.0.0_r3/s?defs=options&amp;project=art">options</a>, <b>void</b>* <a href="/9.0.0_r3/s?defs=reserved&amp;project=art">reserved</a>);
<a class="l" name="54" href="#54">54</a>
<a class="l" name="55" href="#55">55</a><a href="/9.0.0_r3/s?defs=JNIEXPORT&amp;project=art">JNIEXPORT</a> <b>void</b> <a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a>
<a class="l" name="56" href="#56">56</a><a href="/9.0.0_r3/s?defs=Agent_OnUnload&amp;project=art">Agent_OnUnload</a>(<a href="/9.0.0_r3/s?defs=JavaVM&amp;project=art">JavaVM</a> *<a href="/9.0.0_r3/s?defs=vm&amp;project=art">vm</a>);
<a class="l" name="57" href="#57">57</a>
<a class="l" name="58" href="#58">58</a>    <span class="c">/* Forward declaration of the environment */</span>
<a class="l" name="59" href="#59">59</a>
<a class="hl" name="60" href="#60">60</a><b>struct</b> <a class="d" href="#_jvmtiEnv">_jvmtiEnv</a>;
<a class="l" name="61" href="#61">61</a>
<a class="l" name="62" href="#62">62</a><b>struct</b> <a class="d" href="#jvmtiInterface_1_">jvmtiInterface_1_</a>;
<a class="l" name="63" href="#63">63</a>
<a class="l" name="64" href="#64">64</a>#<b>ifdef</b> <a href="/9.0.0_r3/s?defs=__cplusplus&amp;project=art">__cplusplus</a>
<a class="l" name="65" href="#65">65</a><b>typedef</b> <a class="d" href="#_jvmtiEnv">_jvmtiEnv</a> <a class="xt" name="jvmtiEnv"/><a href="/9.0.0_r3/s?refs=jvmtiEnv&amp;project=art" class="xt">jvmtiEnv</a>;
<a class="l" name="66" href="#66">66</a>#<b>else</b>
<a class="l" name="67" href="#67">67</a><b>typedef</b> <b>const</b> <b>struct</b> <a class="d" href="#jvmtiInterface_1_">jvmtiInterface_1_</a> *<a class="xt" name="jvmtiEnv"/><a href="/9.0.0_r3/s?refs=jvmtiEnv&amp;project=art" class="xt">jvmtiEnv</a>;
<a class="l" name="68" href="#68">68</a>#<b>endif</b> <span class="c">/* __cplusplus */</span>
<a class="l" name="69" href="#69">69</a>
<a class="hl" name="70" href="#70">70</a><span class="c">/* Derived Base Types */</span>
<a class="l" name="71" href="#71">71</a>
<a class="l" name="72" href="#72">72</a><b>typedef</b> <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a class="xt" name="jthread"/><a href="/9.0.0_r3/s?refs=jthread&amp;project=art" class="xt">jthread</a>;
<a class="l" name="73" href="#73">73</a><b>typedef</b> <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a class="xt" name="jthreadGroup"/><a href="/9.0.0_r3/s?refs=jthreadGroup&amp;project=art" class="xt">jthreadGroup</a>;
<a class="l" name="74" href="#74">74</a><b>typedef</b> <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="xt" name="jlocation"/><a href="/9.0.0_r3/s?refs=jlocation&amp;project=art" class="xt">jlocation</a>;
<a class="l" name="75" href="#75">75</a><b>struct</b> <a href="/9.0.0_r3/s?defs=_jrawMonitorID&amp;project=art">_jrawMonitorID</a>;
<a class="l" name="76" href="#76">76</a><b>typedef</b> <b>struct</b> <a href="/9.0.0_r3/s?defs=_jrawMonitorID&amp;project=art">_jrawMonitorID</a> *<a class="xt" name="jrawMonitorID"/><a href="/9.0.0_r3/s?refs=jrawMonitorID&amp;project=art" class="xt">jrawMonitorID</a>;
<a class="l" name="77" href="#77">77</a><b>typedef</b> <b>struct</b> <a href="/9.0.0_r3/s?defs=JNINativeInterface&amp;project=art">JNINativeInterface</a> <a class="xt" name="jniNativeInterface"/><a href="/9.0.0_r3/s?refs=jniNativeInterface&amp;project=art" class="xt">jniNativeInterface</a>;
<a class="l" name="78" href="#78">78</a>
<a class="l" name="79" href="#79">79</a>    <span class="c">/* Constants */</span>
<a class="hl" name="80" href="#80">80</a>
<a class="l" name="81" href="#81">81</a>
<a class="l" name="82" href="#82">82</a>    <span class="c">/* Thread State Flags */</span>
<a class="l" name="83" href="#83">83</a>
<a class="l" name="84" href="#84">84</a><b>enum</b> {
<a class="l" name="85" href="#85">85</a>    <a class="xer" name="JVMTI_THREAD_STATE_ALIVE"/><a href="/9.0.0_r3/s?refs=JVMTI_THREAD_STATE_ALIVE&amp;project=art" class="xer">JVMTI_THREAD_STATE_ALIVE</a> = <span class="n">0x0001</span>,
<a class="l" name="86" href="#86">86</a>    <a class="xer" name="JVMTI_THREAD_STATE_TERMINATED"/><a href="/9.0.0_r3/s?refs=JVMTI_THREAD_STATE_TERMINATED&amp;project=art" class="xer">JVMTI_THREAD_STATE_TERMINATED</a> = <span class="n">0x0002</span>,
<a class="l" name="87" href="#87">87</a>    <a class="xer" name="JVMTI_THREAD_STATE_RUNNABLE"/><a href="/9.0.0_r3/s?refs=JVMTI_THREAD_STATE_RUNNABLE&amp;project=art" class="xer">JVMTI_THREAD_STATE_RUNNABLE</a> = <span class="n">0x0004</span>,
<a class="l" name="88" href="#88">88</a>    <a class="xer" name="JVMTI_THREAD_STATE_BLOCKED_ON_MONITOR_ENTER"/><a href="/9.0.0_r3/s?refs=JVMTI_THREAD_STATE_BLOCKED_ON_MONITOR_ENTER&amp;project=art" class="xer">JVMTI_THREAD_STATE_BLOCKED_ON_MONITOR_ENTER</a> = <span class="n">0x0400</span>,
<a class="l" name="89" href="#89">89</a>    <a class="xer" name="JVMTI_THREAD_STATE_WAITING"/><a href="/9.0.0_r3/s?refs=JVMTI_THREAD_STATE_WAITING&amp;project=art" class="xer">JVMTI_THREAD_STATE_WAITING</a> = <span class="n">0x0080</span>,
<a class="hl" name="90" href="#90">90</a>    <a class="xer" name="JVMTI_THREAD_STATE_WAITING_INDEFINITELY"/><a href="/9.0.0_r3/s?refs=JVMTI_THREAD_STATE_WAITING_INDEFINITELY&amp;project=art" class="xer">JVMTI_THREAD_STATE_WAITING_INDEFINITELY</a> = <span class="n">0x0010</span>,
<a class="l" name="91" href="#91">91</a>    <a class="xer" name="JVMTI_THREAD_STATE_WAITING_WITH_TIMEOUT"/><a href="/9.0.0_r3/s?refs=JVMTI_THREAD_STATE_WAITING_WITH_TIMEOUT&amp;project=art" class="xer">JVMTI_THREAD_STATE_WAITING_WITH_TIMEOUT</a> = <span class="n">0x0020</span>,
<a class="l" name="92" href="#92">92</a>    <a class="xer" name="JVMTI_THREAD_STATE_SLEEPING"/><a href="/9.0.0_r3/s?refs=JVMTI_THREAD_STATE_SLEEPING&amp;project=art" class="xer">JVMTI_THREAD_STATE_SLEEPING</a> = <span class="n">0x0040</span>,
<a class="l" name="93" href="#93">93</a>    <a class="xer" name="JVMTI_THREAD_STATE_IN_OBJECT_WAIT"/><a href="/9.0.0_r3/s?refs=JVMTI_THREAD_STATE_IN_OBJECT_WAIT&amp;project=art" class="xer">JVMTI_THREAD_STATE_IN_OBJECT_WAIT</a> = <span class="n">0x0100</span>,
<a class="l" name="94" href="#94">94</a>    <a class="xer" name="JVMTI_THREAD_STATE_PARKED"/><a href="/9.0.0_r3/s?refs=JVMTI_THREAD_STATE_PARKED&amp;project=art" class="xer">JVMTI_THREAD_STATE_PARKED</a> = <span class="n">0x0200</span>,
<a class="l" name="95" href="#95">95</a>    <a class="xer" name="JVMTI_THREAD_STATE_SUSPENDED"/><a href="/9.0.0_r3/s?refs=JVMTI_THREAD_STATE_SUSPENDED&amp;project=art" class="xer">JVMTI_THREAD_STATE_SUSPENDED</a> = <span class="n">0x100000</span>,
<a class="l" name="96" href="#96">96</a>    <a class="xer" name="JVMTI_THREAD_STATE_INTERRUPTED"/><a href="/9.0.0_r3/s?refs=JVMTI_THREAD_STATE_INTERRUPTED&amp;project=art" class="xer">JVMTI_THREAD_STATE_INTERRUPTED</a> = <span class="n">0x200000</span>,
<a class="l" name="97" href="#97">97</a>    <a class="xer" name="JVMTI_THREAD_STATE_IN_NATIVE"/><a href="/9.0.0_r3/s?refs=JVMTI_THREAD_STATE_IN_NATIVE&amp;project=art" class="xer">JVMTI_THREAD_STATE_IN_NATIVE</a> = <span class="n">0x400000</span>,
<a class="l" name="98" href="#98">98</a>    <a class="xer" name="JVMTI_THREAD_STATE_VENDOR_1"/><a href="/9.0.0_r3/s?refs=JVMTI_THREAD_STATE_VENDOR_1&amp;project=art" class="xer">JVMTI_THREAD_STATE_VENDOR_1</a> = <span class="n">0x10000000</span>,
<a class="l" name="99" href="#99">99</a>    <a class="xer" name="JVMTI_THREAD_STATE_VENDOR_2"/><a href="/9.0.0_r3/s?refs=JVMTI_THREAD_STATE_VENDOR_2&amp;project=art" class="xer">JVMTI_THREAD_STATE_VENDOR_2</a> = <span class="n">0x20000000</span>,
<a class="hl" name="100" href="#100">100</a>    <a class="xer" name="JVMTI_THREAD_STATE_VENDOR_3"/><a href="/9.0.0_r3/s?refs=JVMTI_THREAD_STATE_VENDOR_3&amp;project=art" class="xer">JVMTI_THREAD_STATE_VENDOR_3</a> = <span class="n">0x40000000</span>
<a class="l" name="101" href="#101">101</a>};
<a class="l" name="102" href="#102">102</a>
<a class="l" name="103" href="#103">103</a>    <span class="c">/* java.lang.Thread.State Conversion Masks */</span>
<a class="l" name="104" href="#104">104</a>
<a class="l" name="105" href="#105">105</a><b>enum</b> {
<a class="l" name="106" href="#106">106</a>    <a class="xer" name="JVMTI_JAVA_LANG_THREAD_STATE_MASK"/><a href="/9.0.0_r3/s?refs=JVMTI_JAVA_LANG_THREAD_STATE_MASK&amp;project=art" class="xer">JVMTI_JAVA_LANG_THREAD_STATE_MASK</a> = <a class="d" href="#JVMTI_THREAD_STATE_TERMINATED">JVMTI_THREAD_STATE_TERMINATED</a> | <a class="d" href="#JVMTI_THREAD_STATE_ALIVE">JVMTI_THREAD_STATE_ALIVE</a> | <a class="d" href="#JVMTI_THREAD_STATE_RUNNABLE">JVMTI_THREAD_STATE_RUNNABLE</a> | <a class="d" href="#JVMTI_THREAD_STATE_BLOCKED_ON_MONITOR_ENTER">JVMTI_THREAD_STATE_BLOCKED_ON_MONITOR_ENTER</a> | <a class="d" href="#JVMTI_THREAD_STATE_WAITING">JVMTI_THREAD_STATE_WAITING</a> | <a class="d" href="#JVMTI_THREAD_STATE_WAITING_INDEFINITELY">JVMTI_THREAD_STATE_WAITING_INDEFINITELY</a> | <a class="d" href="#JVMTI_THREAD_STATE_WAITING_WITH_TIMEOUT">JVMTI_THREAD_STATE_WAITING_WITH_TIMEOUT</a>,
<a class="l" name="107" href="#107">107</a>    <a class="xer" name="JVMTI_JAVA_LANG_THREAD_STATE_NEW"/><a href="/9.0.0_r3/s?refs=JVMTI_JAVA_LANG_THREAD_STATE_NEW&amp;project=art" class="xer">JVMTI_JAVA_LANG_THREAD_STATE_NEW</a> = 0,
<a class="l" name="108" href="#108">108</a>    <a class="xer" name="JVMTI_JAVA_LANG_THREAD_STATE_TERMINATED"/><a href="/9.0.0_r3/s?refs=JVMTI_JAVA_LANG_THREAD_STATE_TERMINATED&amp;project=art" class="xer">JVMTI_JAVA_LANG_THREAD_STATE_TERMINATED</a> = <a class="d" href="#JVMTI_THREAD_STATE_TERMINATED">JVMTI_THREAD_STATE_TERMINATED</a>,
<a class="l" name="109" href="#109">109</a>    <a class="xer" name="JVMTI_JAVA_LANG_THREAD_STATE_RUNNABLE"/><a href="/9.0.0_r3/s?refs=JVMTI_JAVA_LANG_THREAD_STATE_RUNNABLE&amp;project=art" class="xer">JVMTI_JAVA_LANG_THREAD_STATE_RUNNABLE</a> = <a class="d" href="#JVMTI_THREAD_STATE_ALIVE">JVMTI_THREAD_STATE_ALIVE</a> | <a class="d" href="#JVMTI_THREAD_STATE_RUNNABLE">JVMTI_THREAD_STATE_RUNNABLE</a>,
<a class="hl" name="110" href="#110">110</a>    <a class="xer" name="JVMTI_JAVA_LANG_THREAD_STATE_BLOCKED"/><a href="/9.0.0_r3/s?refs=JVMTI_JAVA_LANG_THREAD_STATE_BLOCKED&amp;project=art" class="xer">JVMTI_JAVA_LANG_THREAD_STATE_BLOCKED</a> = <a class="d" href="#JVMTI_THREAD_STATE_ALIVE">JVMTI_THREAD_STATE_ALIVE</a> | <a class="d" href="#JVMTI_THREAD_STATE_BLOCKED_ON_MONITOR_ENTER">JVMTI_THREAD_STATE_BLOCKED_ON_MONITOR_ENTER</a>,
<a class="l" name="111" href="#111">111</a>    <a class="xer" name="JVMTI_JAVA_LANG_THREAD_STATE_WAITING"/><a href="/9.0.0_r3/s?refs=JVMTI_JAVA_LANG_THREAD_STATE_WAITING&amp;project=art" class="xer">JVMTI_JAVA_LANG_THREAD_STATE_WAITING</a> = <a class="d" href="#JVMTI_THREAD_STATE_ALIVE">JVMTI_THREAD_STATE_ALIVE</a> | <a class="d" href="#JVMTI_THREAD_STATE_WAITING">JVMTI_THREAD_STATE_WAITING</a> | <a class="d" href="#JVMTI_THREAD_STATE_WAITING_INDEFINITELY">JVMTI_THREAD_STATE_WAITING_INDEFINITELY</a>,
<a class="l" name="112" href="#112">112</a>    <a class="xer" name="JVMTI_JAVA_LANG_THREAD_STATE_TIMED_WAITING"/><a href="/9.0.0_r3/s?refs=JVMTI_JAVA_LANG_THREAD_STATE_TIMED_WAITING&amp;project=art" class="xer">JVMTI_JAVA_LANG_THREAD_STATE_TIMED_WAITING</a> = <a class="d" href="#JVMTI_THREAD_STATE_ALIVE">JVMTI_THREAD_STATE_ALIVE</a> | <a class="d" href="#JVMTI_THREAD_STATE_WAITING">JVMTI_THREAD_STATE_WAITING</a> | <a class="d" href="#JVMTI_THREAD_STATE_WAITING_WITH_TIMEOUT">JVMTI_THREAD_STATE_WAITING_WITH_TIMEOUT</a>
<a class="l" name="113" href="#113">113</a>};
<a class="l" name="114" href="#114">114</a>
<a class="l" name="115" href="#115">115</a>    <span class="c">/* Thread Priority Constants */</span>
<a class="l" name="116" href="#116">116</a>
<a class="l" name="117" href="#117">117</a><b>enum</b> {
<a class="l" name="118" href="#118">118</a>    <a class="xer" name="JVMTI_THREAD_MIN_PRIORITY"/><a href="/9.0.0_r3/s?refs=JVMTI_THREAD_MIN_PRIORITY&amp;project=art" class="xer">JVMTI_THREAD_MIN_PRIORITY</a> = <span class="n">1</span>,
<a class="l" name="119" href="#119">119</a>    <a class="xer" name="JVMTI_THREAD_NORM_PRIORITY"/><a href="/9.0.0_r3/s?refs=JVMTI_THREAD_NORM_PRIORITY&amp;project=art" class="xer">JVMTI_THREAD_NORM_PRIORITY</a> = <span class="n">5</span>,
<a class="hl" name="120" href="#120">120</a>    <a class="xer" name="JVMTI_THREAD_MAX_PRIORITY"/><a href="/9.0.0_r3/s?refs=JVMTI_THREAD_MAX_PRIORITY&amp;project=art" class="xer">JVMTI_THREAD_MAX_PRIORITY</a> = <span class="n">10</span>
<a class="l" name="121" href="#121">121</a>};
<a class="l" name="122" href="#122">122</a>
<a class="l" name="123" href="#123">123</a>    <span class="c">/* Heap Filter Flags */</span>
<a class="l" name="124" href="#124">124</a>
<a class="l" name="125" href="#125">125</a><b>enum</b> {
<a class="l" name="126" href="#126">126</a>    <a class="xer" name="JVMTI_HEAP_FILTER_TAGGED"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_FILTER_TAGGED&amp;project=art" class="xer">JVMTI_HEAP_FILTER_TAGGED</a> = <span class="n">0x4</span>,
<a class="l" name="127" href="#127">127</a>    <a class="xer" name="JVMTI_HEAP_FILTER_UNTAGGED"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_FILTER_UNTAGGED&amp;project=art" class="xer">JVMTI_HEAP_FILTER_UNTAGGED</a> = <span class="n">0x8</span>,
<a class="l" name="128" href="#128">128</a>    <a class="xer" name="JVMTI_HEAP_FILTER_CLASS_TAGGED"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_FILTER_CLASS_TAGGED&amp;project=art" class="xer">JVMTI_HEAP_FILTER_CLASS_TAGGED</a> = <span class="n">0x10</span>,
<a class="l" name="129" href="#129">129</a>    <a class="xer" name="JVMTI_HEAP_FILTER_CLASS_UNTAGGED"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_FILTER_CLASS_UNTAGGED&amp;project=art" class="xer">JVMTI_HEAP_FILTER_CLASS_UNTAGGED</a> = <span class="n">0x20</span>
<a class="hl" name="130" href="#130">130</a>};
<a class="l" name="131" href="#131">131</a>
<a class="l" name="132" href="#132">132</a>    <span class="c">/* Heap Visit Control Flags */</span>
<a class="l" name="133" href="#133">133</a>
<a class="l" name="134" href="#134">134</a><b>enum</b> {
<a class="l" name="135" href="#135">135</a>    <a class="xer" name="JVMTI_VISIT_OBJECTS"/><a href="/9.0.0_r3/s?refs=JVMTI_VISIT_OBJECTS&amp;project=art" class="xer">JVMTI_VISIT_OBJECTS</a> = <span class="n">0x100</span>,
<a class="l" name="136" href="#136">136</a>    <a class="xer" name="JVMTI_VISIT_ABORT"/><a href="/9.0.0_r3/s?refs=JVMTI_VISIT_ABORT&amp;project=art" class="xer">JVMTI_VISIT_ABORT</a> = <span class="n">0x8000</span>
<a class="l" name="137" href="#137">137</a>};
<a class="l" name="138" href="#138">138</a>
<a class="l" name="139" href="#139">139</a>    <span class="c">/* Heap Reference Enumeration */</span>
<a class="hl" name="140" href="#140">140</a>
<a class="l" name="141" href="#141">141</a><b>typedef</b> <b>enum</b> {
<a class="l" name="142" href="#142">142</a>    <a class="xer" name="JVMTI_HEAP_REFERENCE_CLASS"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_REFERENCE_CLASS&amp;project=art" class="xer">JVMTI_HEAP_REFERENCE_CLASS</a> = <span class="n">1</span>,
<a class="l" name="143" href="#143">143</a>    <a class="xer" name="JVMTI_HEAP_REFERENCE_FIELD"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_REFERENCE_FIELD&amp;project=art" class="xer">JVMTI_HEAP_REFERENCE_FIELD</a> = <span class="n">2</span>,
<a class="l" name="144" href="#144">144</a>    <a class="xer" name="JVMTI_HEAP_REFERENCE_ARRAY_ELEMENT"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_REFERENCE_ARRAY_ELEMENT&amp;project=art" class="xer">JVMTI_HEAP_REFERENCE_ARRAY_ELEMENT</a> = <span class="n">3</span>,
<a class="l" name="145" href="#145">145</a>    <a class="xer" name="JVMTI_HEAP_REFERENCE_CLASS_LOADER"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_REFERENCE_CLASS_LOADER&amp;project=art" class="xer">JVMTI_HEAP_REFERENCE_CLASS_LOADER</a> = <span class="n">4</span>,
<a class="l" name="146" href="#146">146</a>    <a class="xer" name="JVMTI_HEAP_REFERENCE_SIGNERS"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_REFERENCE_SIGNERS&amp;project=art" class="xer">JVMTI_HEAP_REFERENCE_SIGNERS</a> = <span class="n">5</span>,
<a class="l" name="147" href="#147">147</a>    <a class="xer" name="JVMTI_HEAP_REFERENCE_PROTECTION_DOMAIN"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_REFERENCE_PROTECTION_DOMAIN&amp;project=art" class="xer">JVMTI_HEAP_REFERENCE_PROTECTION_DOMAIN</a> = <span class="n">6</span>,
<a class="l" name="148" href="#148">148</a>    <a class="xer" name="JVMTI_HEAP_REFERENCE_INTERFACE"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_REFERENCE_INTERFACE&amp;project=art" class="xer">JVMTI_HEAP_REFERENCE_INTERFACE</a> = <span class="n">7</span>,
<a class="l" name="149" href="#149">149</a>    <a class="xer" name="JVMTI_HEAP_REFERENCE_STATIC_FIELD"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_REFERENCE_STATIC_FIELD&amp;project=art" class="xer">JVMTI_HEAP_REFERENCE_STATIC_FIELD</a> = <span class="n">8</span>,
<a class="hl" name="150" href="#150">150</a>    <a class="xer" name="JVMTI_HEAP_REFERENCE_CONSTANT_POOL"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_REFERENCE_CONSTANT_POOL&amp;project=art" class="xer">JVMTI_HEAP_REFERENCE_CONSTANT_POOL</a> = <span class="n">9</span>,
<a class="l" name="151" href="#151">151</a>    <a class="xer" name="JVMTI_HEAP_REFERENCE_SUPERCLASS"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_REFERENCE_SUPERCLASS&amp;project=art" class="xer">JVMTI_HEAP_REFERENCE_SUPERCLASS</a> = <span class="n">10</span>,
<a class="l" name="152" href="#152">152</a>    <a class="xer" name="JVMTI_HEAP_REFERENCE_JNI_GLOBAL"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_REFERENCE_JNI_GLOBAL&amp;project=art" class="xer">JVMTI_HEAP_REFERENCE_JNI_GLOBAL</a> = <span class="n">21</span>,
<a class="l" name="153" href="#153">153</a>    <a class="xer" name="JVMTI_HEAP_REFERENCE_SYSTEM_CLASS"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_REFERENCE_SYSTEM_CLASS&amp;project=art" class="xer">JVMTI_HEAP_REFERENCE_SYSTEM_CLASS</a> = <span class="n">22</span>,
<a class="l" name="154" href="#154">154</a>    <a class="xer" name="JVMTI_HEAP_REFERENCE_MONITOR"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_REFERENCE_MONITOR&amp;project=art" class="xer">JVMTI_HEAP_REFERENCE_MONITOR</a> = <span class="n">23</span>,
<a class="l" name="155" href="#155">155</a>    <a class="xer" name="JVMTI_HEAP_REFERENCE_STACK_LOCAL"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_REFERENCE_STACK_LOCAL&amp;project=art" class="xer">JVMTI_HEAP_REFERENCE_STACK_LOCAL</a> = <span class="n">24</span>,
<a class="l" name="156" href="#156">156</a>    <a class="xer" name="JVMTI_HEAP_REFERENCE_JNI_LOCAL"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_REFERENCE_JNI_LOCAL&amp;project=art" class="xer">JVMTI_HEAP_REFERENCE_JNI_LOCAL</a> = <span class="n">25</span>,
<a class="l" name="157" href="#157">157</a>    <a class="xer" name="JVMTI_HEAP_REFERENCE_THREAD"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_REFERENCE_THREAD&amp;project=art" class="xer">JVMTI_HEAP_REFERENCE_THREAD</a> = <span class="n">26</span>,
<a class="l" name="158" href="#158">158</a>    <a class="xer" name="JVMTI_HEAP_REFERENCE_OTHER"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_REFERENCE_OTHER&amp;project=art" class="xer">JVMTI_HEAP_REFERENCE_OTHER</a> = <span class="n">27</span>
<a class="l" name="159" href="#159">159</a>} <a class="xt" name="jvmtiHeapReferenceKind"/><a href="/9.0.0_r3/s?refs=jvmtiHeapReferenceKind&amp;project=art" class="xt">jvmtiHeapReferenceKind</a>;
<a class="hl" name="160" href="#160">160</a>
<a class="l" name="161" href="#161">161</a>    <span class="c">/* Primitive Type Enumeration */</span>
<a class="l" name="162" href="#162">162</a>
<a class="l" name="163" href="#163">163</a><b>typedef</b> <b>enum</b> {
<a class="l" name="164" href="#164">164</a>    <a class="xer" name="JVMTI_PRIMITIVE_TYPE_BOOLEAN"/><a href="/9.0.0_r3/s?refs=JVMTI_PRIMITIVE_TYPE_BOOLEAN&amp;project=art" class="xer">JVMTI_PRIMITIVE_TYPE_BOOLEAN</a> = <span class="n">90</span>,
<a class="l" name="165" href="#165">165</a>    <a class="xer" name="JVMTI_PRIMITIVE_TYPE_BYTE"/><a href="/9.0.0_r3/s?refs=JVMTI_PRIMITIVE_TYPE_BYTE&amp;project=art" class="xer">JVMTI_PRIMITIVE_TYPE_BYTE</a> = <span class="n">66</span>,
<a class="l" name="166" href="#166">166</a>    <a class="xer" name="JVMTI_PRIMITIVE_TYPE_CHAR"/><a href="/9.0.0_r3/s?refs=JVMTI_PRIMITIVE_TYPE_CHAR&amp;project=art" class="xer">JVMTI_PRIMITIVE_TYPE_CHAR</a> = <span class="n">67</span>,
<a class="l" name="167" href="#167">167</a>    <a class="xer" name="JVMTI_PRIMITIVE_TYPE_SHORT"/><a href="/9.0.0_r3/s?refs=JVMTI_PRIMITIVE_TYPE_SHORT&amp;project=art" class="xer">JVMTI_PRIMITIVE_TYPE_SHORT</a> = <span class="n">83</span>,
<a class="l" name="168" href="#168">168</a>    <a class="xer" name="JVMTI_PRIMITIVE_TYPE_INT"/><a href="/9.0.0_r3/s?refs=JVMTI_PRIMITIVE_TYPE_INT&amp;project=art" class="xer">JVMTI_PRIMITIVE_TYPE_INT</a> = <span class="n">73</span>,
<a class="l" name="169" href="#169">169</a>    <a class="xer" name="JVMTI_PRIMITIVE_TYPE_LONG"/><a href="/9.0.0_r3/s?refs=JVMTI_PRIMITIVE_TYPE_LONG&amp;project=art" class="xer">JVMTI_PRIMITIVE_TYPE_LONG</a> = <span class="n">74</span>,
<a class="hl" name="170" href="#170">170</a>    <a class="xer" name="JVMTI_PRIMITIVE_TYPE_FLOAT"/><a href="/9.0.0_r3/s?refs=JVMTI_PRIMITIVE_TYPE_FLOAT&amp;project=art" class="xer">JVMTI_PRIMITIVE_TYPE_FLOAT</a> = <span class="n">70</span>,
<a class="l" name="171" href="#171">171</a>    <a class="xer" name="JVMTI_PRIMITIVE_TYPE_DOUBLE"/><a href="/9.0.0_r3/s?refs=JVMTI_PRIMITIVE_TYPE_DOUBLE&amp;project=art" class="xer">JVMTI_PRIMITIVE_TYPE_DOUBLE</a> = <span class="n">68</span>
<a class="l" name="172" href="#172">172</a>} <a class="xt" name="jvmtiPrimitiveType"/><a href="/9.0.0_r3/s?refs=jvmtiPrimitiveType&amp;project=art" class="xt">jvmtiPrimitiveType</a>;
<a class="l" name="173" href="#173">173</a>
<a class="l" name="174" href="#174">174</a>    <span class="c">/* Heap Object Filter Enumeration */</span>
<a class="l" name="175" href="#175">175</a>
<a class="l" name="176" href="#176">176</a><b>typedef</b> <b>enum</b> {
<a class="l" name="177" href="#177">177</a>    <a class="xer" name="JVMTI_HEAP_OBJECT_TAGGED"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_OBJECT_TAGGED&amp;project=art" class="xer">JVMTI_HEAP_OBJECT_TAGGED</a> = <span class="n">1</span>,
<a class="l" name="178" href="#178">178</a>    <a class="xer" name="JVMTI_HEAP_OBJECT_UNTAGGED"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_OBJECT_UNTAGGED&amp;project=art" class="xer">JVMTI_HEAP_OBJECT_UNTAGGED</a> = <span class="n">2</span>,
<a class="l" name="179" href="#179">179</a>    <a class="xer" name="JVMTI_HEAP_OBJECT_EITHER"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_OBJECT_EITHER&amp;project=art" class="xer">JVMTI_HEAP_OBJECT_EITHER</a> = <span class="n">3</span>
<a class="hl" name="180" href="#180">180</a>} <a class="xt" name="jvmtiHeapObjectFilter"/><a href="/9.0.0_r3/s?refs=jvmtiHeapObjectFilter&amp;project=art" class="xt">jvmtiHeapObjectFilter</a>;
<a class="l" name="181" href="#181">181</a>
<a class="l" name="182" href="#182">182</a>    <span class="c">/* Heap Root Kind Enumeration */</span>
<a class="l" name="183" href="#183">183</a>
<a class="l" name="184" href="#184">184</a><b>typedef</b> <b>enum</b> {
<a class="l" name="185" href="#185">185</a>    <a class="xer" name="JVMTI_HEAP_ROOT_JNI_GLOBAL"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_ROOT_JNI_GLOBAL&amp;project=art" class="xer">JVMTI_HEAP_ROOT_JNI_GLOBAL</a> = <span class="n">1</span>,
<a class="l" name="186" href="#186">186</a>    <a class="xer" name="JVMTI_HEAP_ROOT_SYSTEM_CLASS"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_ROOT_SYSTEM_CLASS&amp;project=art" class="xer">JVMTI_HEAP_ROOT_SYSTEM_CLASS</a> = <span class="n">2</span>,
<a class="l" name="187" href="#187">187</a>    <a class="xer" name="JVMTI_HEAP_ROOT_MONITOR"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_ROOT_MONITOR&amp;project=art" class="xer">JVMTI_HEAP_ROOT_MONITOR</a> = <span class="n">3</span>,
<a class="l" name="188" href="#188">188</a>    <a class="xer" name="JVMTI_HEAP_ROOT_STACK_LOCAL"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_ROOT_STACK_LOCAL&amp;project=art" class="xer">JVMTI_HEAP_ROOT_STACK_LOCAL</a> = <span class="n">4</span>,
<a class="l" name="189" href="#189">189</a>    <a class="xer" name="JVMTI_HEAP_ROOT_JNI_LOCAL"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_ROOT_JNI_LOCAL&amp;project=art" class="xer">JVMTI_HEAP_ROOT_JNI_LOCAL</a> = <span class="n">5</span>,
<a class="hl" name="190" href="#190">190</a>    <a class="xer" name="JVMTI_HEAP_ROOT_THREAD"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_ROOT_THREAD&amp;project=art" class="xer">JVMTI_HEAP_ROOT_THREAD</a> = <span class="n">6</span>,
<a class="l" name="191" href="#191">191</a>    <a class="xer" name="JVMTI_HEAP_ROOT_OTHER"/><a href="/9.0.0_r3/s?refs=JVMTI_HEAP_ROOT_OTHER&amp;project=art" class="xer">JVMTI_HEAP_ROOT_OTHER</a> = <span class="n">7</span>
<a class="l" name="192" href="#192">192</a>} <a class="xt" name="jvmtiHeapRootKind"/><a href="/9.0.0_r3/s?refs=jvmtiHeapRootKind&amp;project=art" class="xt">jvmtiHeapRootKind</a>;
<a class="l" name="193" href="#193">193</a>
<a class="l" name="194" href="#194">194</a>    <span class="c">/* Object Reference Enumeration */</span>
<a class="l" name="195" href="#195">195</a>
<a class="l" name="196" href="#196">196</a><b>typedef</b> <b>enum</b> {
<a class="l" name="197" href="#197">197</a>    <a class="xer" name="JVMTI_REFERENCE_CLASS"/><a href="/9.0.0_r3/s?refs=JVMTI_REFERENCE_CLASS&amp;project=art" class="xer">JVMTI_REFERENCE_CLASS</a> = <span class="n">1</span>,
<a class="l" name="198" href="#198">198</a>    <a class="xer" name="JVMTI_REFERENCE_FIELD"/><a href="/9.0.0_r3/s?refs=JVMTI_REFERENCE_FIELD&amp;project=art" class="xer">JVMTI_REFERENCE_FIELD</a> = <span class="n">2</span>,
<a class="l" name="199" href="#199">199</a>    <a class="xer" name="JVMTI_REFERENCE_ARRAY_ELEMENT"/><a href="/9.0.0_r3/s?refs=JVMTI_REFERENCE_ARRAY_ELEMENT&amp;project=art" class="xer">JVMTI_REFERENCE_ARRAY_ELEMENT</a> = <span class="n">3</span>,
<a class="hl" name="200" href="#200">200</a>    <a class="xer" name="JVMTI_REFERENCE_CLASS_LOADER"/><a href="/9.0.0_r3/s?refs=JVMTI_REFERENCE_CLASS_LOADER&amp;project=art" class="xer">JVMTI_REFERENCE_CLASS_LOADER</a> = <span class="n">4</span>,
<a class="l" name="201" href="#201">201</a>    <a class="xer" name="JVMTI_REFERENCE_SIGNERS"/><a href="/9.0.0_r3/s?refs=JVMTI_REFERENCE_SIGNERS&amp;project=art" class="xer">JVMTI_REFERENCE_SIGNERS</a> = <span class="n">5</span>,
<a class="l" name="202" href="#202">202</a>    <a class="xer" name="JVMTI_REFERENCE_PROTECTION_DOMAIN"/><a href="/9.0.0_r3/s?refs=JVMTI_REFERENCE_PROTECTION_DOMAIN&amp;project=art" class="xer">JVMTI_REFERENCE_PROTECTION_DOMAIN</a> = <span class="n">6</span>,
<a class="l" name="203" href="#203">203</a>    <a class="xer" name="JVMTI_REFERENCE_INTERFACE"/><a href="/9.0.0_r3/s?refs=JVMTI_REFERENCE_INTERFACE&amp;project=art" class="xer">JVMTI_REFERENCE_INTERFACE</a> = <span class="n">7</span>,
<a class="l" name="204" href="#204">204</a>    <a class="xer" name="JVMTI_REFERENCE_STATIC_FIELD"/><a href="/9.0.0_r3/s?refs=JVMTI_REFERENCE_STATIC_FIELD&amp;project=art" class="xer">JVMTI_REFERENCE_STATIC_FIELD</a> = <span class="n">8</span>,
<a class="l" name="205" href="#205">205</a>    <a class="xer" name="JVMTI_REFERENCE_CONSTANT_POOL"/><a href="/9.0.0_r3/s?refs=JVMTI_REFERENCE_CONSTANT_POOL&amp;project=art" class="xer">JVMTI_REFERENCE_CONSTANT_POOL</a> = <span class="n">9</span>
<a class="l" name="206" href="#206">206</a>} <a class="xt" name="jvmtiObjectReferenceKind"/><a href="/9.0.0_r3/s?refs=jvmtiObjectReferenceKind&amp;project=art" class="xt">jvmtiObjectReferenceKind</a>;
<a class="l" name="207" href="#207">207</a>
<a class="l" name="208" href="#208">208</a>    <span class="c">/* Iteration Control Enumeration */</span>
<a class="l" name="209" href="#209">209</a>
<a class="hl" name="210" href="#210">210</a><b>typedef</b> <b>enum</b> {
<a class="l" name="211" href="#211">211</a>    <a class="xer" name="JVMTI_ITERATION_CONTINUE"/><a href="/9.0.0_r3/s?refs=JVMTI_ITERATION_CONTINUE&amp;project=art" class="xer">JVMTI_ITERATION_CONTINUE</a> = <span class="n">1</span>,
<a class="l" name="212" href="#212">212</a>    <a class="xer" name="JVMTI_ITERATION_IGNORE"/><a href="/9.0.0_r3/s?refs=JVMTI_ITERATION_IGNORE&amp;project=art" class="xer">JVMTI_ITERATION_IGNORE</a> = <span class="n">2</span>,
<a class="l" name="213" href="#213">213</a>    <a class="xer" name="JVMTI_ITERATION_ABORT"/><a href="/9.0.0_r3/s?refs=JVMTI_ITERATION_ABORT&amp;project=art" class="xer">JVMTI_ITERATION_ABORT</a> = 0
<a class="l" name="214" href="#214">214</a>} <a class="xt" name="jvmtiIterationControl"/><a href="/9.0.0_r3/s?refs=jvmtiIterationControl&amp;project=art" class="xt">jvmtiIterationControl</a>;
<a class="l" name="215" href="#215">215</a>
<a class="l" name="216" href="#216">216</a>    <span class="c">/* Class Status Flags */</span>
<a class="l" name="217" href="#217">217</a>
<a class="l" name="218" href="#218">218</a><b>enum</b> {
<a class="l" name="219" href="#219">219</a>    <a class="xer" name="JVMTI_CLASS_STATUS_VERIFIED"/><a href="/9.0.0_r3/s?refs=JVMTI_CLASS_STATUS_VERIFIED&amp;project=art" class="xer">JVMTI_CLASS_STATUS_VERIFIED</a> = <span class="n">1</span>,
<a class="hl" name="220" href="#220">220</a>    <a class="xer" name="JVMTI_CLASS_STATUS_PREPARED"/><a href="/9.0.0_r3/s?refs=JVMTI_CLASS_STATUS_PREPARED&amp;project=art" class="xer">JVMTI_CLASS_STATUS_PREPARED</a> = <span class="n">2</span>,
<a class="l" name="221" href="#221">221</a>    <a class="xer" name="JVMTI_CLASS_STATUS_INITIALIZED"/><a href="/9.0.0_r3/s?refs=JVMTI_CLASS_STATUS_INITIALIZED&amp;project=art" class="xer">JVMTI_CLASS_STATUS_INITIALIZED</a> = <span class="n">4</span>,
<a class="l" name="222" href="#222">222</a>    <a class="xer" name="JVMTI_CLASS_STATUS_ERROR"/><a href="/9.0.0_r3/s?refs=JVMTI_CLASS_STATUS_ERROR&amp;project=art" class="xer">JVMTI_CLASS_STATUS_ERROR</a> = <span class="n">8</span>,
<a class="l" name="223" href="#223">223</a>    <a class="xer" name="JVMTI_CLASS_STATUS_ARRAY"/><a href="/9.0.0_r3/s?refs=JVMTI_CLASS_STATUS_ARRAY&amp;project=art" class="xer">JVMTI_CLASS_STATUS_ARRAY</a> = <span class="n">16</span>,
<a class="l" name="224" href="#224">224</a>    <a class="xer" name="JVMTI_CLASS_STATUS_PRIMITIVE"/><a href="/9.0.0_r3/s?refs=JVMTI_CLASS_STATUS_PRIMITIVE&amp;project=art" class="xer">JVMTI_CLASS_STATUS_PRIMITIVE</a> = <span class="n">32</span>
<a class="l" name="225" href="#225">225</a>};
<a class="l" name="226" href="#226">226</a>
<a class="l" name="227" href="#227">227</a>    <span class="c">/* Event <a href="/9.0.0_r3/s?path=Enable/">Enable</a>/<a href="/9.0.0_r3/s?path=Enable/Disable">Disable</a> */</span>
<a class="l" name="228" href="#228">228</a>
<a class="l" name="229" href="#229">229</a><b>typedef</b> <b>enum</b> {
<a class="hl" name="230" href="#230">230</a>    <a class="xer" name="JVMTI_ENABLE"/><a href="/9.0.0_r3/s?refs=JVMTI_ENABLE&amp;project=art" class="xer">JVMTI_ENABLE</a> = <span class="n">1</span>,
<a class="l" name="231" href="#231">231</a>    <a class="xer" name="JVMTI_DISABLE"/><a href="/9.0.0_r3/s?refs=JVMTI_DISABLE&amp;project=art" class="xer">JVMTI_DISABLE</a> = 0
<a class="l" name="232" href="#232">232</a>} <a class="xt" name="jvmtiEventMode"/><a href="/9.0.0_r3/s?refs=jvmtiEventMode&amp;project=art" class="xt">jvmtiEventMode</a>;
<a class="l" name="233" href="#233">233</a>
<a class="l" name="234" href="#234">234</a>    <span class="c">/* Extension <a href="/9.0.0_r3/s?path=Function/">Function</a>/<a href="/9.0.0_r3/s?path=Function/Event">Event</a> Parameter Types */</span>
<a class="l" name="235" href="#235">235</a>
<a class="l" name="236" href="#236">236</a><b>typedef</b> <b>enum</b> {
<a class="l" name="237" href="#237">237</a>    <a class="xer" name="JVMTI_TYPE_JBYTE"/><a href="/9.0.0_r3/s?refs=JVMTI_TYPE_JBYTE&amp;project=art" class="xer">JVMTI_TYPE_JBYTE</a> = <span class="n">101</span>,
<a class="l" name="238" href="#238">238</a>    <a class="xer" name="JVMTI_TYPE_JCHAR"/><a href="/9.0.0_r3/s?refs=JVMTI_TYPE_JCHAR&amp;project=art" class="xer">JVMTI_TYPE_JCHAR</a> = <span class="n">102</span>,
<a class="l" name="239" href="#239">239</a>    <a class="xer" name="JVMTI_TYPE_JSHORT"/><a href="/9.0.0_r3/s?refs=JVMTI_TYPE_JSHORT&amp;project=art" class="xer">JVMTI_TYPE_JSHORT</a> = <span class="n">103</span>,
<a class="hl" name="240" href="#240">240</a>    <a class="xer" name="JVMTI_TYPE_JINT"/><a href="/9.0.0_r3/s?refs=JVMTI_TYPE_JINT&amp;project=art" class="xer">JVMTI_TYPE_JINT</a> = <span class="n">104</span>,
<a class="l" name="241" href="#241">241</a>    <a class="xer" name="JVMTI_TYPE_JLONG"/><a href="/9.0.0_r3/s?refs=JVMTI_TYPE_JLONG&amp;project=art" class="xer">JVMTI_TYPE_JLONG</a> = <span class="n">105</span>,
<a class="l" name="242" href="#242">242</a>    <a class="xer" name="JVMTI_TYPE_JFLOAT"/><a href="/9.0.0_r3/s?refs=JVMTI_TYPE_JFLOAT&amp;project=art" class="xer">JVMTI_TYPE_JFLOAT</a> = <span class="n">106</span>,
<a class="l" name="243" href="#243">243</a>    <a class="xer" name="JVMTI_TYPE_JDOUBLE"/><a href="/9.0.0_r3/s?refs=JVMTI_TYPE_JDOUBLE&amp;project=art" class="xer">JVMTI_TYPE_JDOUBLE</a> = <span class="n">107</span>,
<a class="l" name="244" href="#244">244</a>    <a class="xer" name="JVMTI_TYPE_JBOOLEAN"/><a href="/9.0.0_r3/s?refs=JVMTI_TYPE_JBOOLEAN&amp;project=art" class="xer">JVMTI_TYPE_JBOOLEAN</a> = <span class="n">108</span>,
<a class="l" name="245" href="#245">245</a>    <a class="xer" name="JVMTI_TYPE_JOBJECT"/><a href="/9.0.0_r3/s?refs=JVMTI_TYPE_JOBJECT&amp;project=art" class="xer">JVMTI_TYPE_JOBJECT</a> = <span class="n">109</span>,
<a class="l" name="246" href="#246">246</a>    <a class="xer" name="JVMTI_TYPE_JTHREAD"/><a href="/9.0.0_r3/s?refs=JVMTI_TYPE_JTHREAD&amp;project=art" class="xer">JVMTI_TYPE_JTHREAD</a> = <span class="n">110</span>,
<a class="l" name="247" href="#247">247</a>    <a class="xer" name="JVMTI_TYPE_JCLASS"/><a href="/9.0.0_r3/s?refs=JVMTI_TYPE_JCLASS&amp;project=art" class="xer">JVMTI_TYPE_JCLASS</a> = <span class="n">111</span>,
<a class="l" name="248" href="#248">248</a>    <a class="xer" name="JVMTI_TYPE_JVALUE"/><a href="/9.0.0_r3/s?refs=JVMTI_TYPE_JVALUE&amp;project=art" class="xer">JVMTI_TYPE_JVALUE</a> = <span class="n">112</span>,
<a class="l" name="249" href="#249">249</a>    <a class="xer" name="JVMTI_TYPE_JFIELDID"/><a href="/9.0.0_r3/s?refs=JVMTI_TYPE_JFIELDID&amp;project=art" class="xer">JVMTI_TYPE_JFIELDID</a> = <span class="n">113</span>,
<a class="hl" name="250" href="#250">250</a>    <a class="xer" name="JVMTI_TYPE_JMETHODID"/><a href="/9.0.0_r3/s?refs=JVMTI_TYPE_JMETHODID&amp;project=art" class="xer">JVMTI_TYPE_JMETHODID</a> = <span class="n">114</span>,
<a class="l" name="251" href="#251">251</a>    <a class="xer" name="JVMTI_TYPE_CCHAR"/><a href="/9.0.0_r3/s?refs=JVMTI_TYPE_CCHAR&amp;project=art" class="xer">JVMTI_TYPE_CCHAR</a> = <span class="n">115</span>,
<a class="l" name="252" href="#252">252</a>    <a class="xer" name="JVMTI_TYPE_CVOID"/><a href="/9.0.0_r3/s?refs=JVMTI_TYPE_CVOID&amp;project=art" class="xer">JVMTI_TYPE_CVOID</a> = <span class="n">116</span>,
<a class="l" name="253" href="#253">253</a>    <a class="xer" name="JVMTI_TYPE_JNIENV"/><a href="/9.0.0_r3/s?refs=JVMTI_TYPE_JNIENV&amp;project=art" class="xer">JVMTI_TYPE_JNIENV</a> = <span class="n">117</span>
<a class="l" name="254" href="#254">254</a>} <a class="xt" name="jvmtiParamTypes"/><a href="/9.0.0_r3/s?refs=jvmtiParamTypes&amp;project=art" class="xt">jvmtiParamTypes</a>;
<a class="l" name="255" href="#255">255</a>
<a class="l" name="256" href="#256">256</a>    <span class="c">/* Extension <a href="/9.0.0_r3/s?path=Function/">Function</a>/<a href="/9.0.0_r3/s?path=Function/Event">Event</a> Parameter Kinds */</span>
<a class="l" name="257" href="#257">257</a>
<a class="l" name="258" href="#258">258</a><b>typedef</b> <b>enum</b> {
<a class="l" name="259" href="#259">259</a>    <a class="xer" name="JVMTI_KIND_IN"/><a href="/9.0.0_r3/s?refs=JVMTI_KIND_IN&amp;project=art" class="xer">JVMTI_KIND_IN</a> = <span class="n">91</span>,
<a class="hl" name="260" href="#260">260</a>    <a class="xer" name="JVMTI_KIND_IN_PTR"/><a href="/9.0.0_r3/s?refs=JVMTI_KIND_IN_PTR&amp;project=art" class="xer">JVMTI_KIND_IN_PTR</a> = <span class="n">92</span>,
<a class="l" name="261" href="#261">261</a>    <a class="xer" name="JVMTI_KIND_IN_BUF"/><a href="/9.0.0_r3/s?refs=JVMTI_KIND_IN_BUF&amp;project=art" class="xer">JVMTI_KIND_IN_BUF</a> = <span class="n">93</span>,
<a class="l" name="262" href="#262">262</a>    <a class="xer" name="JVMTI_KIND_ALLOC_BUF"/><a href="/9.0.0_r3/s?refs=JVMTI_KIND_ALLOC_BUF&amp;project=art" class="xer">JVMTI_KIND_ALLOC_BUF</a> = <span class="n">94</span>,
<a class="l" name="263" href="#263">263</a>    <a class="xer" name="JVMTI_KIND_ALLOC_ALLOC_BUF"/><a href="/9.0.0_r3/s?refs=JVMTI_KIND_ALLOC_ALLOC_BUF&amp;project=art" class="xer">JVMTI_KIND_ALLOC_ALLOC_BUF</a> = <span class="n">95</span>,
<a class="l" name="264" href="#264">264</a>    <a class="xer" name="JVMTI_KIND_OUT"/><a href="/9.0.0_r3/s?refs=JVMTI_KIND_OUT&amp;project=art" class="xer">JVMTI_KIND_OUT</a> = <span class="n">96</span>,
<a class="l" name="265" href="#265">265</a>    <a class="xer" name="JVMTI_KIND_OUT_BUF"/><a href="/9.0.0_r3/s?refs=JVMTI_KIND_OUT_BUF&amp;project=art" class="xer">JVMTI_KIND_OUT_BUF</a> = <span class="n">97</span>
<a class="l" name="266" href="#266">266</a>} <a class="xt" name="jvmtiParamKind"/><a href="/9.0.0_r3/s?refs=jvmtiParamKind&amp;project=art" class="xt">jvmtiParamKind</a>;
<a class="l" name="267" href="#267">267</a>
<a class="l" name="268" href="#268">268</a>    <span class="c">/* Timer Kinds */</span>
<a class="l" name="269" href="#269">269</a>
<a class="hl" name="270" href="#270">270</a><b>typedef</b> <b>enum</b> {
<a class="l" name="271" href="#271">271</a>    <a class="xer" name="JVMTI_TIMER_USER_CPU"/><a href="/9.0.0_r3/s?refs=JVMTI_TIMER_USER_CPU&amp;project=art" class="xer">JVMTI_TIMER_USER_CPU</a> = <span class="n">30</span>,
<a class="l" name="272" href="#272">272</a>    <a class="xer" name="JVMTI_TIMER_TOTAL_CPU"/><a href="/9.0.0_r3/s?refs=JVMTI_TIMER_TOTAL_CPU&amp;project=art" class="xer">JVMTI_TIMER_TOTAL_CPU</a> = <span class="n">31</span>,
<a class="l" name="273" href="#273">273</a>    <a class="xer" name="JVMTI_TIMER_ELAPSED"/><a href="/9.0.0_r3/s?refs=JVMTI_TIMER_ELAPSED&amp;project=art" class="xer">JVMTI_TIMER_ELAPSED</a> = <span class="n">32</span>
<a class="l" name="274" href="#274">274</a>} <a class="xt" name="jvmtiTimerKind"/><a href="/9.0.0_r3/s?refs=jvmtiTimerKind&amp;project=art" class="xt">jvmtiTimerKind</a>;
<a class="l" name="275" href="#275">275</a>
<a class="l" name="276" href="#276">276</a>    <span class="c">/* Phases of execution */</span>
<a class="l" name="277" href="#277">277</a>
<a class="l" name="278" href="#278">278</a><b>typedef</b> <b>enum</b> {
<a class="l" name="279" href="#279">279</a>    <a class="xer" name="JVMTI_PHASE_ONLOAD"/><a href="/9.0.0_r3/s?refs=JVMTI_PHASE_ONLOAD&amp;project=art" class="xer">JVMTI_PHASE_ONLOAD</a> = <span class="n">1</span>,
<a class="hl" name="280" href="#280">280</a>    <a class="xer" name="JVMTI_PHASE_PRIMORDIAL"/><a href="/9.0.0_r3/s?refs=JVMTI_PHASE_PRIMORDIAL&amp;project=art" class="xer">JVMTI_PHASE_PRIMORDIAL</a> = <span class="n">2</span>,
<a class="l" name="281" href="#281">281</a>    <a class="xer" name="JVMTI_PHASE_START"/><a href="/9.0.0_r3/s?refs=JVMTI_PHASE_START&amp;project=art" class="xer">JVMTI_PHASE_START</a> = <span class="n">6</span>,
<a class="l" name="282" href="#282">282</a>    <a class="xer" name="JVMTI_PHASE_LIVE"/><a href="/9.0.0_r3/s?refs=JVMTI_PHASE_LIVE&amp;project=art" class="xer">JVMTI_PHASE_LIVE</a> = <span class="n">4</span>,
<a class="l" name="283" href="#283">283</a>    <a class="xer" name="JVMTI_PHASE_DEAD"/><a href="/9.0.0_r3/s?refs=JVMTI_PHASE_DEAD&amp;project=art" class="xer">JVMTI_PHASE_DEAD</a> = <span class="n">8</span>
<a class="l" name="284" href="#284">284</a>} <a class="xt" name="jvmtiPhase"/><a href="/9.0.0_r3/s?refs=jvmtiPhase&amp;project=art" class="xt">jvmtiPhase</a>;
<a class="l" name="285" href="#285">285</a>
<a class="l" name="286" href="#286">286</a>    <span class="c">/* Version Interface Types */</span>
<a class="l" name="287" href="#287">287</a>
<a class="l" name="288" href="#288">288</a><b>enum</b> {
<a class="l" name="289" href="#289">289</a>    <a class="xer" name="JVMTI_VERSION_INTERFACE_JNI"/><a href="/9.0.0_r3/s?refs=JVMTI_VERSION_INTERFACE_JNI&amp;project=art" class="xer">JVMTI_VERSION_INTERFACE_JNI</a> = <span class="n">0x00000000</span>,
<a class="hl" name="290" href="#290">290</a>    <a class="xer" name="JVMTI_VERSION_INTERFACE_JVMTI"/><a href="/9.0.0_r3/s?refs=JVMTI_VERSION_INTERFACE_JVMTI&amp;project=art" class="xer">JVMTI_VERSION_INTERFACE_JVMTI</a> = <span class="n">0x30000000</span>
<a class="l" name="291" href="#291">291</a>};
<a class="l" name="292" href="#292">292</a>
<a class="l" name="293" href="#293">293</a>    <span class="c">/* Version Masks */</span>
<a class="l" name="294" href="#294">294</a>
<a class="l" name="295" href="#295">295</a><b>enum</b> {
<a class="l" name="296" href="#296">296</a>    <a class="xer" name="JVMTI_VERSION_MASK_INTERFACE_TYPE"/><a href="/9.0.0_r3/s?refs=JVMTI_VERSION_MASK_INTERFACE_TYPE&amp;project=art" class="xer">JVMTI_VERSION_MASK_INTERFACE_TYPE</a> = <span class="n">0x70000000</span>,
<a class="l" name="297" href="#297">297</a>    <a class="xer" name="JVMTI_VERSION_MASK_MAJOR"/><a href="/9.0.0_r3/s?refs=JVMTI_VERSION_MASK_MAJOR&amp;project=art" class="xer">JVMTI_VERSION_MASK_MAJOR</a> = <span class="n">0x0FFF0000</span>,
<a class="l" name="298" href="#298">298</a>    <a class="xer" name="JVMTI_VERSION_MASK_MINOR"/><a href="/9.0.0_r3/s?refs=JVMTI_VERSION_MASK_MINOR&amp;project=art" class="xer">JVMTI_VERSION_MASK_MINOR</a> = <span class="n">0x0000FF00</span>,
<a class="l" name="299" href="#299">299</a>    <a class="xer" name="JVMTI_VERSION_MASK_MICRO"/><a href="/9.0.0_r3/s?refs=JVMTI_VERSION_MASK_MICRO&amp;project=art" class="xer">JVMTI_VERSION_MASK_MICRO</a> = <span class="n">0x000000FF</span>
<a class="hl" name="300" href="#300">300</a>};
<a class="l" name="301" href="#301">301</a>
<a class="l" name="302" href="#302">302</a>    <span class="c">/* Version Shifts */</span>
<a class="l" name="303" href="#303">303</a>
<a class="l" name="304" href="#304">304</a><b>enum</b> {
<a class="l" name="305" href="#305">305</a>    <a class="xer" name="JVMTI_VERSION_SHIFT_MAJOR"/><a href="/9.0.0_r3/s?refs=JVMTI_VERSION_SHIFT_MAJOR&amp;project=art" class="xer">JVMTI_VERSION_SHIFT_MAJOR</a> = <span class="n">16</span>,
<a class="l" name="306" href="#306">306</a>    <a class="xer" name="JVMTI_VERSION_SHIFT_MINOR"/><a href="/9.0.0_r3/s?refs=JVMTI_VERSION_SHIFT_MINOR&amp;project=art" class="xer">JVMTI_VERSION_SHIFT_MINOR</a> = <span class="n">8</span>,
<a class="l" name="307" href="#307">307</a>    <a class="xer" name="JVMTI_VERSION_SHIFT_MICRO"/><a href="/9.0.0_r3/s?refs=JVMTI_VERSION_SHIFT_MICRO&amp;project=art" class="xer">JVMTI_VERSION_SHIFT_MICRO</a> = 0
<a class="l" name="308" href="#308">308</a>};
<a class="l" name="309" href="#309">309</a>
<a class="hl" name="310" href="#310">310</a>    <span class="c">/* Verbose Flag Enumeration */</span>
<a class="l" name="311" href="#311">311</a>
<a class="l" name="312" href="#312">312</a><b>typedef</b> <b>enum</b> {
<a class="l" name="313" href="#313">313</a>    <a class="xer" name="JVMTI_VERBOSE_OTHER"/><a href="/9.0.0_r3/s?refs=JVMTI_VERBOSE_OTHER&amp;project=art" class="xer">JVMTI_VERBOSE_OTHER</a> = 0,
<a class="l" name="314" href="#314">314</a>    <a class="xer" name="JVMTI_VERBOSE_GC"/><a href="/9.0.0_r3/s?refs=JVMTI_VERBOSE_GC&amp;project=art" class="xer">JVMTI_VERBOSE_GC</a> = <span class="n">1</span>,
<a class="l" name="315" href="#315">315</a>    <a class="xer" name="JVMTI_VERBOSE_CLASS"/><a href="/9.0.0_r3/s?refs=JVMTI_VERBOSE_CLASS&amp;project=art" class="xer">JVMTI_VERBOSE_CLASS</a> = <span class="n">2</span>,
<a class="l" name="316" href="#316">316</a>    <a class="xer" name="JVMTI_VERBOSE_JNI"/><a href="/9.0.0_r3/s?refs=JVMTI_VERBOSE_JNI&amp;project=art" class="xer">JVMTI_VERBOSE_JNI</a> = <span class="n">4</span>
<a class="l" name="317" href="#317">317</a>} <a class="xt" name="jvmtiVerboseFlag"/><a href="/9.0.0_r3/s?refs=jvmtiVerboseFlag&amp;project=art" class="xt">jvmtiVerboseFlag</a>;
<a class="l" name="318" href="#318">318</a>
<a class="l" name="319" href="#319">319</a>    <span class="c">/* JLocation Format Enumeration */</span>
<a class="hl" name="320" href="#320">320</a>
<a class="l" name="321" href="#321">321</a><b>typedef</b> <b>enum</b> {
<a class="l" name="322" href="#322">322</a>    <a class="xer" name="JVMTI_JLOCATION_JVMBCI"/><a href="/9.0.0_r3/s?refs=JVMTI_JLOCATION_JVMBCI&amp;project=art" class="xer">JVMTI_JLOCATION_JVMBCI</a> = <span class="n">1</span>,
<a class="l" name="323" href="#323">323</a>    <a class="xer" name="JVMTI_JLOCATION_MACHINEPC"/><a href="/9.0.0_r3/s?refs=JVMTI_JLOCATION_MACHINEPC&amp;project=art" class="xer">JVMTI_JLOCATION_MACHINEPC</a> = <span class="n">2</span>,
<a class="l" name="324" href="#324">324</a>    <a class="xer" name="JVMTI_JLOCATION_OTHER"/><a href="/9.0.0_r3/s?refs=JVMTI_JLOCATION_OTHER&amp;project=art" class="xer">JVMTI_JLOCATION_OTHER</a> = 0
<a class="l" name="325" href="#325">325</a>} <a class="xt" name="jvmtiJlocationFormat"/><a href="/9.0.0_r3/s?refs=jvmtiJlocationFormat&amp;project=art" class="xt">jvmtiJlocationFormat</a>;
<a class="l" name="326" href="#326">326</a>
<a class="l" name="327" href="#327">327</a>    <span class="c">/* Resource Exhaustion Flags */</span>
<a class="l" name="328" href="#328">328</a>
<a class="l" name="329" href="#329">329</a><b>enum</b> {
<a class="hl" name="330" href="#330">330</a>    <a class="xer" name="JVMTI_RESOURCE_EXHAUSTED_OOM_ERROR"/><a href="/9.0.0_r3/s?refs=JVMTI_RESOURCE_EXHAUSTED_OOM_ERROR&amp;project=art" class="xer">JVMTI_RESOURCE_EXHAUSTED_OOM_ERROR</a> = <span class="n">0x0001</span>,
<a class="l" name="331" href="#331">331</a>    <a class="xer" name="JVMTI_RESOURCE_EXHAUSTED_JAVA_HEAP"/><a href="/9.0.0_r3/s?refs=JVMTI_RESOURCE_EXHAUSTED_JAVA_HEAP&amp;project=art" class="xer">JVMTI_RESOURCE_EXHAUSTED_JAVA_HEAP</a> = <span class="n">0x0002</span>,
<a class="l" name="332" href="#332">332</a>    <a class="xer" name="JVMTI_RESOURCE_EXHAUSTED_THREADS"/><a href="/9.0.0_r3/s?refs=JVMTI_RESOURCE_EXHAUSTED_THREADS&amp;project=art" class="xer">JVMTI_RESOURCE_EXHAUSTED_THREADS</a> = <span class="n">0x0004</span>
<a class="l" name="333" href="#333">333</a>};
<a class="l" name="334" href="#334">334</a>
<a class="l" name="335" href="#335">335</a>    <span class="c">/* Errors */</span>
<a class="l" name="336" href="#336">336</a>
<a class="l" name="337" href="#337">337</a><b>typedef</b> <b>enum</b> {
<a class="l" name="338" href="#338">338</a>    <a class="xer" name="JVMTI_ERROR_NONE"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_NONE&amp;project=art" class="xer">JVMTI_ERROR_NONE</a> = 0,
<a class="l" name="339" href="#339">339</a>    <a class="xer" name="JVMTI_ERROR_INVALID_THREAD"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_INVALID_THREAD&amp;project=art" class="xer">JVMTI_ERROR_INVALID_THREAD</a> = <span class="n">10</span>,
<a class="hl" name="340" href="#340">340</a>    <a class="xer" name="JVMTI_ERROR_INVALID_THREAD_GROUP"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_INVALID_THREAD_GROUP&amp;project=art" class="xer">JVMTI_ERROR_INVALID_THREAD_GROUP</a> = <span class="n">11</span>,
<a class="l" name="341" href="#341">341</a>    <a class="xer" name="JVMTI_ERROR_INVALID_PRIORITY"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_INVALID_PRIORITY&amp;project=art" class="xer">JVMTI_ERROR_INVALID_PRIORITY</a> = <span class="n">12</span>,
<a class="l" name="342" href="#342">342</a>    <a class="xer" name="JVMTI_ERROR_THREAD_NOT_SUSPENDED"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_THREAD_NOT_SUSPENDED&amp;project=art" class="xer">JVMTI_ERROR_THREAD_NOT_SUSPENDED</a> = <span class="n">13</span>,
<a class="l" name="343" href="#343">343</a>    <a class="xer" name="JVMTI_ERROR_THREAD_SUSPENDED"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_THREAD_SUSPENDED&amp;project=art" class="xer">JVMTI_ERROR_THREAD_SUSPENDED</a> = <span class="n">14</span>,
<a class="l" name="344" href="#344">344</a>    <a class="xer" name="JVMTI_ERROR_THREAD_NOT_ALIVE"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_THREAD_NOT_ALIVE&amp;project=art" class="xer">JVMTI_ERROR_THREAD_NOT_ALIVE</a> = <span class="n">15</span>,
<a class="l" name="345" href="#345">345</a>    <a class="xer" name="JVMTI_ERROR_INVALID_OBJECT"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_INVALID_OBJECT&amp;project=art" class="xer">JVMTI_ERROR_INVALID_OBJECT</a> = <span class="n">20</span>,
<a class="l" name="346" href="#346">346</a>    <a class="xer" name="JVMTI_ERROR_INVALID_CLASS"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_INVALID_CLASS&amp;project=art" class="xer">JVMTI_ERROR_INVALID_CLASS</a> = <span class="n">21</span>,
<a class="l" name="347" href="#347">347</a>    <a class="xer" name="JVMTI_ERROR_CLASS_NOT_PREPARED"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_CLASS_NOT_PREPARED&amp;project=art" class="xer">JVMTI_ERROR_CLASS_NOT_PREPARED</a> = <span class="n">22</span>,
<a class="l" name="348" href="#348">348</a>    <a class="xer" name="JVMTI_ERROR_INVALID_METHODID"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_INVALID_METHODID&amp;project=art" class="xer">JVMTI_ERROR_INVALID_METHODID</a> = <span class="n">23</span>,
<a class="l" name="349" href="#349">349</a>    <a class="xer" name="JVMTI_ERROR_INVALID_LOCATION"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_INVALID_LOCATION&amp;project=art" class="xer">JVMTI_ERROR_INVALID_LOCATION</a> = <span class="n">24</span>,
<a class="hl" name="350" href="#350">350</a>    <a class="xer" name="JVMTI_ERROR_INVALID_FIELDID"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_INVALID_FIELDID&amp;project=art" class="xer">JVMTI_ERROR_INVALID_FIELDID</a> = <span class="n">25</span>,
<a class="l" name="351" href="#351">351</a>    <a class="xer" name="JVMTI_ERROR_NO_MORE_FRAMES"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_NO_MORE_FRAMES&amp;project=art" class="xer">JVMTI_ERROR_NO_MORE_FRAMES</a> = <span class="n">31</span>,
<a class="l" name="352" href="#352">352</a>    <a class="xer" name="JVMTI_ERROR_OPAQUE_FRAME"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_OPAQUE_FRAME&amp;project=art" class="xer">JVMTI_ERROR_OPAQUE_FRAME</a> = <span class="n">32</span>,
<a class="l" name="353" href="#353">353</a>    <a class="xer" name="JVMTI_ERROR_TYPE_MISMATCH"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_TYPE_MISMATCH&amp;project=art" class="xer">JVMTI_ERROR_TYPE_MISMATCH</a> = <span class="n">34</span>,
<a class="l" name="354" href="#354">354</a>    <a class="xer" name="JVMTI_ERROR_INVALID_SLOT"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_INVALID_SLOT&amp;project=art" class="xer">JVMTI_ERROR_INVALID_SLOT</a> = <span class="n">35</span>,
<a class="l" name="355" href="#355">355</a>    <a class="xer" name="JVMTI_ERROR_DUPLICATE"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_DUPLICATE&amp;project=art" class="xer">JVMTI_ERROR_DUPLICATE</a> = <span class="n">40</span>,
<a class="l" name="356" href="#356">356</a>    <a class="xer" name="JVMTI_ERROR_NOT_FOUND"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_NOT_FOUND&amp;project=art" class="xer">JVMTI_ERROR_NOT_FOUND</a> = <span class="n">41</span>,
<a class="l" name="357" href="#357">357</a>    <a class="xer" name="JVMTI_ERROR_INVALID_MONITOR"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_INVALID_MONITOR&amp;project=art" class="xer">JVMTI_ERROR_INVALID_MONITOR</a> = <span class="n">50</span>,
<a class="l" name="358" href="#358">358</a>    <a class="xer" name="JVMTI_ERROR_NOT_MONITOR_OWNER"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_NOT_MONITOR_OWNER&amp;project=art" class="xer">JVMTI_ERROR_NOT_MONITOR_OWNER</a> = <span class="n">51</span>,
<a class="l" name="359" href="#359">359</a>    <a class="xer" name="JVMTI_ERROR_INTERRUPT"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_INTERRUPT&amp;project=art" class="xer">JVMTI_ERROR_INTERRUPT</a> = <span class="n">52</span>,
<a class="hl" name="360" href="#360">360</a>    <a class="xer" name="JVMTI_ERROR_INVALID_CLASS_FORMAT"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_INVALID_CLASS_FORMAT&amp;project=art" class="xer">JVMTI_ERROR_INVALID_CLASS_FORMAT</a> = <span class="n">60</span>,
<a class="l" name="361" href="#361">361</a>    <a class="xer" name="JVMTI_ERROR_CIRCULAR_CLASS_DEFINITION"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_CIRCULAR_CLASS_DEFINITION&amp;project=art" class="xer">JVMTI_ERROR_CIRCULAR_CLASS_DEFINITION</a> = <span class="n">61</span>,
<a class="l" name="362" href="#362">362</a>    <a class="xer" name="JVMTI_ERROR_FAILS_VERIFICATION"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_FAILS_VERIFICATION&amp;project=art" class="xer">JVMTI_ERROR_FAILS_VERIFICATION</a> = <span class="n">62</span>,
<a class="l" name="363" href="#363">363</a>    <a class="xer" name="JVMTI_ERROR_UNSUPPORTED_REDEFINITION_METHOD_ADDED"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_UNSUPPORTED_REDEFINITION_METHOD_ADDED&amp;project=art" class="xer">JVMTI_ERROR_UNSUPPORTED_REDEFINITION_METHOD_ADDED</a> = <span class="n">63</span>,
<a class="l" name="364" href="#364">364</a>    <a class="xer" name="JVMTI_ERROR_UNSUPPORTED_REDEFINITION_SCHEMA_CHANGED"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_UNSUPPORTED_REDEFINITION_SCHEMA_CHANGED&amp;project=art" class="xer">JVMTI_ERROR_UNSUPPORTED_REDEFINITION_SCHEMA_CHANGED</a> = <span class="n">64</span>,
<a class="l" name="365" href="#365">365</a>    <a class="xer" name="JVMTI_ERROR_INVALID_TYPESTATE"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_INVALID_TYPESTATE&amp;project=art" class="xer">JVMTI_ERROR_INVALID_TYPESTATE</a> = <span class="n">65</span>,
<a class="l" name="366" href="#366">366</a>    <a class="xer" name="JVMTI_ERROR_UNSUPPORTED_REDEFINITION_HIERARCHY_CHANGED"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_UNSUPPORTED_REDEFINITION_HIERARCHY_CHANGED&amp;project=art" class="xer">JVMTI_ERROR_UNSUPPORTED_REDEFINITION_HIERARCHY_CHANGED</a> = <span class="n">66</span>,
<a class="l" name="367" href="#367">367</a>    <a class="xer" name="JVMTI_ERROR_UNSUPPORTED_REDEFINITION_METHOD_DELETED"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_UNSUPPORTED_REDEFINITION_METHOD_DELETED&amp;project=art" class="xer">JVMTI_ERROR_UNSUPPORTED_REDEFINITION_METHOD_DELETED</a> = <span class="n">67</span>,
<a class="l" name="368" href="#368">368</a>    <a class="xer" name="JVMTI_ERROR_UNSUPPORTED_VERSION"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_UNSUPPORTED_VERSION&amp;project=art" class="xer">JVMTI_ERROR_UNSUPPORTED_VERSION</a> = <span class="n">68</span>,
<a class="l" name="369" href="#369">369</a>    <a class="xer" name="JVMTI_ERROR_NAMES_DONT_MATCH"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_NAMES_DONT_MATCH&amp;project=art" class="xer">JVMTI_ERROR_NAMES_DONT_MATCH</a> = <span class="n">69</span>,
<a class="hl" name="370" href="#370">370</a>    <a class="xer" name="JVMTI_ERROR_UNSUPPORTED_REDEFINITION_CLASS_MODIFIERS_CHANGED"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_UNSUPPORTED_REDEFINITION_CLASS_MODIFIERS_CHANGED&amp;project=art" class="xer">JVMTI_ERROR_UNSUPPORTED_REDEFINITION_CLASS_MODIFIERS_CHANGED</a> = <span class="n">70</span>,
<a class="l" name="371" href="#371">371</a>    <a class="xer" name="JVMTI_ERROR_UNSUPPORTED_REDEFINITION_METHOD_MODIFIERS_CHANGED"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_UNSUPPORTED_REDEFINITION_METHOD_MODIFIERS_CHANGED&amp;project=art" class="xer">JVMTI_ERROR_UNSUPPORTED_REDEFINITION_METHOD_MODIFIERS_CHANGED</a> = <span class="n">71</span>,
<a class="l" name="372" href="#372">372</a>    <a class="xer" name="JVMTI_ERROR_UNMODIFIABLE_CLASS"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_UNMODIFIABLE_CLASS&amp;project=art" class="xer">JVMTI_ERROR_UNMODIFIABLE_CLASS</a> = <span class="n">79</span>,
<a class="l" name="373" href="#373">373</a>    <a class="xer" name="JVMTI_ERROR_NOT_AVAILABLE"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_NOT_AVAILABLE&amp;project=art" class="xer">JVMTI_ERROR_NOT_AVAILABLE</a> = <span class="n">98</span>,
<a class="l" name="374" href="#374">374</a>    <a class="xer" name="JVMTI_ERROR_MUST_POSSESS_CAPABILITY"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_MUST_POSSESS_CAPABILITY&amp;project=art" class="xer">JVMTI_ERROR_MUST_POSSESS_CAPABILITY</a> = <span class="n">99</span>,
<a class="l" name="375" href="#375">375</a>    <a class="xer" name="JVMTI_ERROR_NULL_POINTER"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_NULL_POINTER&amp;project=art" class="xer">JVMTI_ERROR_NULL_POINTER</a> = <span class="n">100</span>,
<a class="l" name="376" href="#376">376</a>    <a class="xer" name="JVMTI_ERROR_ABSENT_INFORMATION"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_ABSENT_INFORMATION&amp;project=art" class="xer">JVMTI_ERROR_ABSENT_INFORMATION</a> = <span class="n">101</span>,
<a class="l" name="377" href="#377">377</a>    <a class="xer" name="JVMTI_ERROR_INVALID_EVENT_TYPE"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_INVALID_EVENT_TYPE&amp;project=art" class="xer">JVMTI_ERROR_INVALID_EVENT_TYPE</a> = <span class="n">102</span>,
<a class="l" name="378" href="#378">378</a>    <a class="xer" name="JVMTI_ERROR_ILLEGAL_ARGUMENT"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_ILLEGAL_ARGUMENT&amp;project=art" class="xer">JVMTI_ERROR_ILLEGAL_ARGUMENT</a> = <span class="n">103</span>,
<a class="l" name="379" href="#379">379</a>    <a class="xer" name="JVMTI_ERROR_NATIVE_METHOD"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_NATIVE_METHOD&amp;project=art" class="xer">JVMTI_ERROR_NATIVE_METHOD</a> = <span class="n">104</span>,
<a class="hl" name="380" href="#380">380</a>    <a class="xer" name="JVMTI_ERROR_CLASS_LOADER_UNSUPPORTED"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_CLASS_LOADER_UNSUPPORTED&amp;project=art" class="xer">JVMTI_ERROR_CLASS_LOADER_UNSUPPORTED</a> = <span class="n">106</span>,
<a class="l" name="381" href="#381">381</a>    <a class="xer" name="JVMTI_ERROR_OUT_OF_MEMORY"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_OUT_OF_MEMORY&amp;project=art" class="xer">JVMTI_ERROR_OUT_OF_MEMORY</a> = <span class="n">110</span>,
<a class="l" name="382" href="#382">382</a>    <a class="xer" name="JVMTI_ERROR_ACCESS_DENIED"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_ACCESS_DENIED&amp;project=art" class="xer">JVMTI_ERROR_ACCESS_DENIED</a> = <span class="n">111</span>,
<a class="l" name="383" href="#383">383</a>    <a class="xer" name="JVMTI_ERROR_WRONG_PHASE"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_WRONG_PHASE&amp;project=art" class="xer">JVMTI_ERROR_WRONG_PHASE</a> = <span class="n">112</span>,
<a class="l" name="384" href="#384">384</a>    <a class="xer" name="JVMTI_ERROR_INTERNAL"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_INTERNAL&amp;project=art" class="xer">JVMTI_ERROR_INTERNAL</a> = <span class="n">113</span>,
<a class="l" name="385" href="#385">385</a>    <a class="xer" name="JVMTI_ERROR_UNATTACHED_THREAD"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_UNATTACHED_THREAD&amp;project=art" class="xer">JVMTI_ERROR_UNATTACHED_THREAD</a> = <span class="n">115</span>,
<a class="l" name="386" href="#386">386</a>    <a class="xer" name="JVMTI_ERROR_INVALID_ENVIRONMENT"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_INVALID_ENVIRONMENT&amp;project=art" class="xer">JVMTI_ERROR_INVALID_ENVIRONMENT</a> = <span class="n">116</span>,
<a class="l" name="387" href="#387">387</a>    <a class="xer" name="JVMTI_ERROR_MAX"/><a href="/9.0.0_r3/s?refs=JVMTI_ERROR_MAX&amp;project=art" class="xer">JVMTI_ERROR_MAX</a> = <span class="n">116</span>
<a class="l" name="388" href="#388">388</a>} <a class="xt" name="jvmtiError"/><a href="/9.0.0_r3/s?refs=jvmtiError&amp;project=art" class="xt">jvmtiError</a>;
<a class="l" name="389" href="#389">389</a>
<a class="hl" name="390" href="#390">390</a>    <span class="c">/* Event IDs */</span>
<a class="l" name="391" href="#391">391</a>
<a class="l" name="392" href="#392">392</a><b>typedef</b> <b>enum</b> {
<a class="l" name="393" href="#393">393</a>    <a class="xer" name="JVMTI_MIN_EVENT_TYPE_VAL"/><a href="/9.0.0_r3/s?refs=JVMTI_MIN_EVENT_TYPE_VAL&amp;project=art" class="xer">JVMTI_MIN_EVENT_TYPE_VAL</a> = <span class="n">50</span>,
<a class="l" name="394" href="#394">394</a>    <a class="xer" name="JVMTI_EVENT_VM_INIT"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_VM_INIT&amp;project=art" class="xer">JVMTI_EVENT_VM_INIT</a> = <span class="n">50</span>,
<a class="l" name="395" href="#395">395</a>    <a class="xer" name="JVMTI_EVENT_VM_DEATH"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_VM_DEATH&amp;project=art" class="xer">JVMTI_EVENT_VM_DEATH</a> = <span class="n">51</span>,
<a class="l" name="396" href="#396">396</a>    <a class="xer" name="JVMTI_EVENT_THREAD_START"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_THREAD_START&amp;project=art" class="xer">JVMTI_EVENT_THREAD_START</a> = <span class="n">52</span>,
<a class="l" name="397" href="#397">397</a>    <a class="xer" name="JVMTI_EVENT_THREAD_END"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_THREAD_END&amp;project=art" class="xer">JVMTI_EVENT_THREAD_END</a> = <span class="n">53</span>,
<a class="l" name="398" href="#398">398</a>    <a class="xer" name="JVMTI_EVENT_CLASS_FILE_LOAD_HOOK"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_CLASS_FILE_LOAD_HOOK&amp;project=art" class="xer">JVMTI_EVENT_CLASS_FILE_LOAD_HOOK</a> = <span class="n">54</span>,
<a class="l" name="399" href="#399">399</a>    <a class="xer" name="JVMTI_EVENT_CLASS_LOAD"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_CLASS_LOAD&amp;project=art" class="xer">JVMTI_EVENT_CLASS_LOAD</a> = <span class="n">55</span>,
<a class="hl" name="400" href="#400">400</a>    <a class="xer" name="JVMTI_EVENT_CLASS_PREPARE"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_CLASS_PREPARE&amp;project=art" class="xer">JVMTI_EVENT_CLASS_PREPARE</a> = <span class="n">56</span>,
<a class="l" name="401" href="#401">401</a>    <a class="xer" name="JVMTI_EVENT_VM_START"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_VM_START&amp;project=art" class="xer">JVMTI_EVENT_VM_START</a> = <span class="n">57</span>,
<a class="l" name="402" href="#402">402</a>    <a class="xer" name="JVMTI_EVENT_EXCEPTION"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_EXCEPTION&amp;project=art" class="xer">JVMTI_EVENT_EXCEPTION</a> = <span class="n">58</span>,
<a class="l" name="403" href="#403">403</a>    <a class="xer" name="JVMTI_EVENT_EXCEPTION_CATCH"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_EXCEPTION_CATCH&amp;project=art" class="xer">JVMTI_EVENT_EXCEPTION_CATCH</a> = <span class="n">59</span>,
<a class="l" name="404" href="#404">404</a>    <a class="xer" name="JVMTI_EVENT_SINGLE_STEP"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_SINGLE_STEP&amp;project=art" class="xer">JVMTI_EVENT_SINGLE_STEP</a> = <span class="n">60</span>,
<a class="l" name="405" href="#405">405</a>    <a class="xer" name="JVMTI_EVENT_FRAME_POP"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_FRAME_POP&amp;project=art" class="xer">JVMTI_EVENT_FRAME_POP</a> = <span class="n">61</span>,
<a class="l" name="406" href="#406">406</a>    <a class="xer" name="JVMTI_EVENT_BREAKPOINT"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_BREAKPOINT&amp;project=art" class="xer">JVMTI_EVENT_BREAKPOINT</a> = <span class="n">62</span>,
<a class="l" name="407" href="#407">407</a>    <a class="xer" name="JVMTI_EVENT_FIELD_ACCESS"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_FIELD_ACCESS&amp;project=art" class="xer">JVMTI_EVENT_FIELD_ACCESS</a> = <span class="n">63</span>,
<a class="l" name="408" href="#408">408</a>    <a class="xer" name="JVMTI_EVENT_FIELD_MODIFICATION"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_FIELD_MODIFICATION&amp;project=art" class="xer">JVMTI_EVENT_FIELD_MODIFICATION</a> = <span class="n">64</span>,
<a class="l" name="409" href="#409">409</a>    <a class="xer" name="JVMTI_EVENT_METHOD_ENTRY"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_METHOD_ENTRY&amp;project=art" class="xer">JVMTI_EVENT_METHOD_ENTRY</a> = <span class="n">65</span>,
<a class="hl" name="410" href="#410">410</a>    <a class="xer" name="JVMTI_EVENT_METHOD_EXIT"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_METHOD_EXIT&amp;project=art" class="xer">JVMTI_EVENT_METHOD_EXIT</a> = <span class="n">66</span>,
<a class="l" name="411" href="#411">411</a>    <a class="xer" name="JVMTI_EVENT_NATIVE_METHOD_BIND"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_NATIVE_METHOD_BIND&amp;project=art" class="xer">JVMTI_EVENT_NATIVE_METHOD_BIND</a> = <span class="n">67</span>,
<a class="l" name="412" href="#412">412</a>    <a class="xer" name="JVMTI_EVENT_COMPILED_METHOD_LOAD"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_COMPILED_METHOD_LOAD&amp;project=art" class="xer">JVMTI_EVENT_COMPILED_METHOD_LOAD</a> = <span class="n">68</span>,
<a class="l" name="413" href="#413">413</a>    <a class="xer" name="JVMTI_EVENT_COMPILED_METHOD_UNLOAD"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_COMPILED_METHOD_UNLOAD&amp;project=art" class="xer">JVMTI_EVENT_COMPILED_METHOD_UNLOAD</a> = <span class="n">69</span>,
<a class="l" name="414" href="#414">414</a>    <a class="xer" name="JVMTI_EVENT_DYNAMIC_CODE_GENERATED"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_DYNAMIC_CODE_GENERATED&amp;project=art" class="xer">JVMTI_EVENT_DYNAMIC_CODE_GENERATED</a> = <span class="n">70</span>,
<a class="l" name="415" href="#415">415</a>    <a class="xer" name="JVMTI_EVENT_DATA_DUMP_REQUEST"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_DATA_DUMP_REQUEST&amp;project=art" class="xer">JVMTI_EVENT_DATA_DUMP_REQUEST</a> = <span class="n">71</span>,
<a class="l" name="416" href="#416">416</a>    <a class="xer" name="JVMTI_EVENT_MONITOR_WAIT"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_MONITOR_WAIT&amp;project=art" class="xer">JVMTI_EVENT_MONITOR_WAIT</a> = <span class="n">73</span>,
<a class="l" name="417" href="#417">417</a>    <a class="xer" name="JVMTI_EVENT_MONITOR_WAITED"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_MONITOR_WAITED&amp;project=art" class="xer">JVMTI_EVENT_MONITOR_WAITED</a> = <span class="n">74</span>,
<a class="l" name="418" href="#418">418</a>    <a class="xer" name="JVMTI_EVENT_MONITOR_CONTENDED_ENTER"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_MONITOR_CONTENDED_ENTER&amp;project=art" class="xer">JVMTI_EVENT_MONITOR_CONTENDED_ENTER</a> = <span class="n">75</span>,
<a class="l" name="419" href="#419">419</a>    <a class="xer" name="JVMTI_EVENT_MONITOR_CONTENDED_ENTERED"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_MONITOR_CONTENDED_ENTERED&amp;project=art" class="xer">JVMTI_EVENT_MONITOR_CONTENDED_ENTERED</a> = <span class="n">76</span>,
<a class="hl" name="420" href="#420">420</a>    <a class="xer" name="JVMTI_EVENT_RESOURCE_EXHAUSTED"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_RESOURCE_EXHAUSTED&amp;project=art" class="xer">JVMTI_EVENT_RESOURCE_EXHAUSTED</a> = <span class="n">80</span>,
<a class="l" name="421" href="#421">421</a>    <a class="xer" name="JVMTI_EVENT_GARBAGE_COLLECTION_START"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_GARBAGE_COLLECTION_START&amp;project=art" class="xer">JVMTI_EVENT_GARBAGE_COLLECTION_START</a> = <span class="n">81</span>,
<a class="l" name="422" href="#422">422</a>    <a class="xer" name="JVMTI_EVENT_GARBAGE_COLLECTION_FINISH"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_GARBAGE_COLLECTION_FINISH&amp;project=art" class="xer">JVMTI_EVENT_GARBAGE_COLLECTION_FINISH</a> = <span class="n">82</span>,
<a class="l" name="423" href="#423">423</a>    <a class="xer" name="JVMTI_EVENT_OBJECT_FREE"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_OBJECT_FREE&amp;project=art" class="xer">JVMTI_EVENT_OBJECT_FREE</a> = <span class="n">83</span>,
<a class="l" name="424" href="#424">424</a>    <a class="xer" name="JVMTI_EVENT_VM_OBJECT_ALLOC"/><a href="/9.0.0_r3/s?refs=JVMTI_EVENT_VM_OBJECT_ALLOC&amp;project=art" class="xer">JVMTI_EVENT_VM_OBJECT_ALLOC</a> = <span class="n">84</span>,
<a class="l" name="425" href="#425">425</a>    <a class="xer" name="JVMTI_MAX_EVENT_TYPE_VAL"/><a href="/9.0.0_r3/s?refs=JVMTI_MAX_EVENT_TYPE_VAL&amp;project=art" class="xer">JVMTI_MAX_EVENT_TYPE_VAL</a> = <span class="n">84</span>
<a class="l" name="426" href="#426">426</a>} <a class="xt" name="jvmtiEvent"/><a href="/9.0.0_r3/s?refs=jvmtiEvent&amp;project=art" class="xt">jvmtiEvent</a>;
<a class="l" name="427" href="#427">427</a>
<a class="l" name="428" href="#428">428</a>
<a class="l" name="429" href="#429">429</a>    <span class="c">/* Pre-Declarations */</span>
<a class="hl" name="430" href="#430">430</a><b>struct</b> <a class="d" href="#_jvmtiThreadInfo">_jvmtiThreadInfo</a>;
<a class="l" name="431" href="#431">431</a><b>typedef</b> <b>struct</b> <a class="d" href="#_jvmtiThreadInfo">_jvmtiThreadInfo</a> <a class="xt" name="jvmtiThreadInfo"/><a href="/9.0.0_r3/s?refs=jvmtiThreadInfo&amp;project=art" class="xt">jvmtiThreadInfo</a>;
<a class="l" name="432" href="#432">432</a><b>struct</b> <a class="d" href="#_jvmtiMonitorStackDepthInfo">_jvmtiMonitorStackDepthInfo</a>;
<a class="l" name="433" href="#433">433</a><b>typedef</b> <b>struct</b> <a class="d" href="#_jvmtiMonitorStackDepthInfo">_jvmtiMonitorStackDepthInfo</a> <a class="xt" name="jvmtiMonitorStackDepthInfo"/><a href="/9.0.0_r3/s?refs=jvmtiMonitorStackDepthInfo&amp;project=art" class="xt">jvmtiMonitorStackDepthInfo</a>;
<a class="l" name="434" href="#434">434</a><b>struct</b> <a class="d" href="#_jvmtiThreadGroupInfo">_jvmtiThreadGroupInfo</a>;
<a class="l" name="435" href="#435">435</a><b>typedef</b> <b>struct</b> <a class="d" href="#_jvmtiThreadGroupInfo">_jvmtiThreadGroupInfo</a> <a class="xt" name="jvmtiThreadGroupInfo"/><a href="/9.0.0_r3/s?refs=jvmtiThreadGroupInfo&amp;project=art" class="xt">jvmtiThreadGroupInfo</a>;
<a class="l" name="436" href="#436">436</a><b>struct</b> <a class="d" href="#_jvmtiFrameInfo">_jvmtiFrameInfo</a>;
<a class="l" name="437" href="#437">437</a><b>typedef</b> <b>struct</b> <a class="d" href="#_jvmtiFrameInfo">_jvmtiFrameInfo</a> <a class="xt" name="jvmtiFrameInfo"/><a href="/9.0.0_r3/s?refs=jvmtiFrameInfo&amp;project=art" class="xt">jvmtiFrameInfo</a>;
<a class="l" name="438" href="#438">438</a><b>struct</b> <a class="d" href="#_jvmtiStackInfo">_jvmtiStackInfo</a>;
<a class="l" name="439" href="#439">439</a><b>typedef</b> <b>struct</b> <a class="d" href="#_jvmtiStackInfo">_jvmtiStackInfo</a> <a class="xt" name="jvmtiStackInfo"/><a href="/9.0.0_r3/s?refs=jvmtiStackInfo&amp;project=art" class="xt">jvmtiStackInfo</a>;
<a class="hl" name="440" href="#440">440</a><b>struct</b> <a class="d" href="#_jvmtiHeapReferenceInfoField">_jvmtiHeapReferenceInfoField</a>;
<a class="l" name="441" href="#441">441</a><b>typedef</b> <b>struct</b> <a class="d" href="#_jvmtiHeapReferenceInfoField">_jvmtiHeapReferenceInfoField</a> <a class="xt" name="jvmtiHeapReferenceInfoField"/><a href="/9.0.0_r3/s?refs=jvmtiHeapReferenceInfoField&amp;project=art" class="xt">jvmtiHeapReferenceInfoField</a>;
<a class="l" name="442" href="#442">442</a><b>struct</b> <a class="d" href="#_jvmtiHeapReferenceInfoArray">_jvmtiHeapReferenceInfoArray</a>;
<a class="l" name="443" href="#443">443</a><b>typedef</b> <b>struct</b> <a class="d" href="#_jvmtiHeapReferenceInfoArray">_jvmtiHeapReferenceInfoArray</a> <a class="xt" name="jvmtiHeapReferenceInfoArray"/><a href="/9.0.0_r3/s?refs=jvmtiHeapReferenceInfoArray&amp;project=art" class="xt">jvmtiHeapReferenceInfoArray</a>;
<a class="l" name="444" href="#444">444</a><b>struct</b> <a class="d" href="#_jvmtiHeapReferenceInfoConstantPool">_jvmtiHeapReferenceInfoConstantPool</a>;
<a class="l" name="445" href="#445">445</a><b>typedef</b> <b>struct</b> <a class="d" href="#_jvmtiHeapReferenceInfoConstantPool">_jvmtiHeapReferenceInfoConstantPool</a> <a class="xt" name="jvmtiHeapReferenceInfoConstantPool"/><a href="/9.0.0_r3/s?refs=jvmtiHeapReferenceInfoConstantPool&amp;project=art" class="xt">jvmtiHeapReferenceInfoConstantPool</a>;
<a class="l" name="446" href="#446">446</a><b>struct</b> <a class="d" href="#_jvmtiHeapReferenceInfoStackLocal">_jvmtiHeapReferenceInfoStackLocal</a>;
<a class="l" name="447" href="#447">447</a><b>typedef</b> <b>struct</b> <a class="d" href="#_jvmtiHeapReferenceInfoStackLocal">_jvmtiHeapReferenceInfoStackLocal</a> <a class="xt" name="jvmtiHeapReferenceInfoStackLocal"/><a href="/9.0.0_r3/s?refs=jvmtiHeapReferenceInfoStackLocal&amp;project=art" class="xt">jvmtiHeapReferenceInfoStackLocal</a>;
<a class="l" name="448" href="#448">448</a><b>struct</b> <a class="d" href="#_jvmtiHeapReferenceInfoJniLocal">_jvmtiHeapReferenceInfoJniLocal</a>;
<a class="l" name="449" href="#449">449</a><b>typedef</b> <b>struct</b> <a class="d" href="#_jvmtiHeapReferenceInfoJniLocal">_jvmtiHeapReferenceInfoJniLocal</a> <a class="xt" name="jvmtiHeapReferenceInfoJniLocal"/><a href="/9.0.0_r3/s?refs=jvmtiHeapReferenceInfoJniLocal&amp;project=art" class="xt">jvmtiHeapReferenceInfoJniLocal</a>;
<a class="hl" name="450" href="#450">450</a><b>struct</b> <a class="d" href="#_jvmtiHeapReferenceInfoReserved">_jvmtiHeapReferenceInfoReserved</a>;
<a class="l" name="451" href="#451">451</a><b>typedef</b> <b>struct</b> <a class="d" href="#_jvmtiHeapReferenceInfoReserved">_jvmtiHeapReferenceInfoReserved</a> <a class="xt" name="jvmtiHeapReferenceInfoReserved"/><a href="/9.0.0_r3/s?refs=jvmtiHeapReferenceInfoReserved&amp;project=art" class="xt">jvmtiHeapReferenceInfoReserved</a>;
<a class="l" name="452" href="#452">452</a><b>union</b> <a class="d" href="#_jvmtiHeapReferenceInfo">_jvmtiHeapReferenceInfo</a>;
<a class="l" name="453" href="#453">453</a><b>typedef</b> <b>union</b> <a class="d" href="#_jvmtiHeapReferenceInfo">_jvmtiHeapReferenceInfo</a> <a class="xt" name="jvmtiHeapReferenceInfo"/><a href="/9.0.0_r3/s?refs=jvmtiHeapReferenceInfo&amp;project=art" class="xt">jvmtiHeapReferenceInfo</a>;
<a class="l" name="454" href="#454">454</a><b>struct</b> <a class="d" href="#_jvmtiHeapCallbacks">_jvmtiHeapCallbacks</a>;
<a class="l" name="455" href="#455">455</a><b>typedef</b> <b>struct</b> <a class="d" href="#_jvmtiHeapCallbacks">_jvmtiHeapCallbacks</a> <a class="xt" name="jvmtiHeapCallbacks"/><a href="/9.0.0_r3/s?refs=jvmtiHeapCallbacks&amp;project=art" class="xt">jvmtiHeapCallbacks</a>;
<a class="l" name="456" href="#456">456</a><b>struct</b> <a class="d" href="#_jvmtiClassDefinition">_jvmtiClassDefinition</a>;
<a class="l" name="457" href="#457">457</a><b>typedef</b> <b>struct</b> <a class="d" href="#_jvmtiClassDefinition">_jvmtiClassDefinition</a> <a class="xt" name="jvmtiClassDefinition"/><a href="/9.0.0_r3/s?refs=jvmtiClassDefinition&amp;project=art" class="xt">jvmtiClassDefinition</a>;
<a class="l" name="458" href="#458">458</a><b>struct</b> <a class="d" href="#_jvmtiMonitorUsage">_jvmtiMonitorUsage</a>;
<a class="l" name="459" href="#459">459</a><b>typedef</b> <b>struct</b> <a class="d" href="#_jvmtiMonitorUsage">_jvmtiMonitorUsage</a> <a class="xt" name="jvmtiMonitorUsage"/><a href="/9.0.0_r3/s?refs=jvmtiMonitorUsage&amp;project=art" class="xt">jvmtiMonitorUsage</a>;
<a class="hl" name="460" href="#460">460</a><b>struct</b> <a class="d" href="#_jvmtiLineNumberEntry">_jvmtiLineNumberEntry</a>;
<a class="l" name="461" href="#461">461</a><b>typedef</b> <b>struct</b> <a class="d" href="#_jvmtiLineNumberEntry">_jvmtiLineNumberEntry</a> <a class="xt" name="jvmtiLineNumberEntry"/><a href="/9.0.0_r3/s?refs=jvmtiLineNumberEntry&amp;project=art" class="xt">jvmtiLineNumberEntry</a>;
<a class="l" name="462" href="#462">462</a><b>struct</b> <a class="d" href="#_jvmtiLocalVariableEntry">_jvmtiLocalVariableEntry</a>;
<a class="l" name="463" href="#463">463</a><b>typedef</b> <b>struct</b> <a class="d" href="#_jvmtiLocalVariableEntry">_jvmtiLocalVariableEntry</a> <a class="xt" name="jvmtiLocalVariableEntry"/><a href="/9.0.0_r3/s?refs=jvmtiLocalVariableEntry&amp;project=art" class="xt">jvmtiLocalVariableEntry</a>;
<a class="l" name="464" href="#464">464</a><b>struct</b> <a class="d" href="#_jvmtiParamInfo">_jvmtiParamInfo</a>;
<a class="l" name="465" href="#465">465</a><b>typedef</b> <b>struct</b> <a class="d" href="#_jvmtiParamInfo">_jvmtiParamInfo</a> <a class="xt" name="jvmtiParamInfo"/><a href="/9.0.0_r3/s?refs=jvmtiParamInfo&amp;project=art" class="xt">jvmtiParamInfo</a>;
<a class="l" name="466" href="#466">466</a><b>struct</b> <a class="d" href="#_jvmtiExtensionFunctionInfo">_jvmtiExtensionFunctionInfo</a>;
<a class="l" name="467" href="#467">467</a><b>typedef</b> <b>struct</b> <a class="d" href="#_jvmtiExtensionFunctionInfo">_jvmtiExtensionFunctionInfo</a> <a class="xt" name="jvmtiExtensionFunctionInfo"/><a href="/9.0.0_r3/s?refs=jvmtiExtensionFunctionInfo&amp;project=art" class="xt">jvmtiExtensionFunctionInfo</a>;
<a class="l" name="468" href="#468">468</a><b>struct</b> <a class="d" href="#_jvmtiExtensionEventInfo">_jvmtiExtensionEventInfo</a>;
<a class="l" name="469" href="#469">469</a><b>typedef</b> <b>struct</b> <a class="d" href="#_jvmtiExtensionEventInfo">_jvmtiExtensionEventInfo</a> <a class="xt" name="jvmtiExtensionEventInfo"/><a href="/9.0.0_r3/s?refs=jvmtiExtensionEventInfo&amp;project=art" class="xt">jvmtiExtensionEventInfo</a>;
<a class="hl" name="470" href="#470">470</a><b>struct</b> <a class="d" href="#_jvmtiTimerInfo">_jvmtiTimerInfo</a>;
<a class="l" name="471" href="#471">471</a><b>typedef</b> <b>struct</b> <a class="d" href="#_jvmtiTimerInfo">_jvmtiTimerInfo</a> <a class="xt" name="jvmtiTimerInfo"/><a href="/9.0.0_r3/s?refs=jvmtiTimerInfo&amp;project=art" class="xt">jvmtiTimerInfo</a>;
<a class="l" name="472" href="#472">472</a><b>struct</b> <a class="d" href="#_jvmtiAddrLocationMap">_jvmtiAddrLocationMap</a>;
<a class="l" name="473" href="#473">473</a><b>typedef</b> <b>struct</b> <a class="d" href="#_jvmtiAddrLocationMap">_jvmtiAddrLocationMap</a> <a class="xt" name="jvmtiAddrLocationMap"/><a href="/9.0.0_r3/s?refs=jvmtiAddrLocationMap&amp;project=art" class="xt">jvmtiAddrLocationMap</a>;
<a class="l" name="474" href="#474">474</a>
<a class="l" name="475" href="#475">475</a>    <span class="c">/* Function Types */</span>
<a class="l" name="476" href="#476">476</a>
<a class="l" name="477" href="#477">477</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiStartFunction"/><a href="/9.0.0_r3/s?refs=jvmtiStartFunction&amp;project=art" class="xt">jvmtiStartFunction</a>)
<a class="l" name="478" href="#478">478</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>, <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>, <b>void</b>* <a class="d" href="#arg">arg</a>);
<a class="l" name="479" href="#479">479</a>
<a class="hl" name="480" href="#480">480</a><b>typedef</b> <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiHeapIterationCallback"/><a href="/9.0.0_r3/s?refs=jvmtiHeapIterationCallback&amp;project=art" class="xt">jvmtiHeapIterationCallback</a>)
<a class="l" name="481" href="#481">481</a>    (<a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a href="/9.0.0_r3/s?defs=class_tag&amp;project=art">class_tag</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="d" href="#size">size</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>* <a class="d" href="#tag_ptr">tag_ptr</a>, <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="d" href="#length">length</a>, <b>void</b>* <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>);
<a class="l" name="482" href="#482">482</a>
<a class="l" name="483" href="#483">483</a><b>typedef</b> <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiHeapReferenceCallback"/><a href="/9.0.0_r3/s?refs=jvmtiHeapReferenceCallback&amp;project=art" class="xt">jvmtiHeapReferenceCallback</a>)
<a class="l" name="484" href="#484">484</a>    (<a class="d" href="#jvmtiHeapReferenceKind">jvmtiHeapReferenceKind</a> <a href="/9.0.0_r3/s?defs=reference_kind&amp;project=art">reference_kind</a>, <b>const</b> <a class="d" href="#jvmtiHeapReferenceInfo">jvmtiHeapReferenceInfo</a>* <a href="/9.0.0_r3/s?defs=reference_info&amp;project=art">reference_info</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a href="/9.0.0_r3/s?defs=class_tag&amp;project=art">class_tag</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a href="/9.0.0_r3/s?defs=referrer_class_tag&amp;project=art">referrer_class_tag</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="d" href="#size">size</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>* <a class="d" href="#tag_ptr">tag_ptr</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>* <a href="/9.0.0_r3/s?defs=referrer_tag_ptr&amp;project=art">referrer_tag_ptr</a>, <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="d" href="#length">length</a>, <b>void</b>* <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>);
<a class="l" name="485" href="#485">485</a>
<a class="l" name="486" href="#486">486</a><b>typedef</b> <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiPrimitiveFieldCallback"/><a href="/9.0.0_r3/s?refs=jvmtiPrimitiveFieldCallback&amp;project=art" class="xt">jvmtiPrimitiveFieldCallback</a>)
<a class="l" name="487" href="#487">487</a>    (<a class="d" href="#jvmtiHeapReferenceKind">jvmtiHeapReferenceKind</a> <a href="/9.0.0_r3/s?defs=kind&amp;project=art">kind</a>, <b>const</b> <a class="d" href="#jvmtiHeapReferenceInfo">jvmtiHeapReferenceInfo</a>* <a href="/9.0.0_r3/s?defs=info&amp;project=art">info</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a href="/9.0.0_r3/s?defs=object_class_tag&amp;project=art">object_class_tag</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>* <a href="/9.0.0_r3/s?defs=object_tag_ptr&amp;project=art">object_tag_ptr</a>, <a href="/9.0.0_r3/s?defs=jvalue&amp;project=art">jvalue</a> <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>, <a class="d" href="#jvmtiPrimitiveType">jvmtiPrimitiveType</a> <a href="/9.0.0_r3/s?defs=value_type&amp;project=art">value_type</a>, <b>void</b>* <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>);
<a class="l" name="488" href="#488">488</a>
<a class="l" name="489" href="#489">489</a><b>typedef</b> <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiArrayPrimitiveValueCallback"/><a href="/9.0.0_r3/s?refs=jvmtiArrayPrimitiveValueCallback&amp;project=art" class="xt">jvmtiArrayPrimitiveValueCallback</a>)
<a class="hl" name="490" href="#490">490</a>    (<a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a href="/9.0.0_r3/s?defs=class_tag&amp;project=art">class_tag</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="d" href="#size">size</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>* <a class="d" href="#tag_ptr">tag_ptr</a>, <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=element_count&amp;project=art">element_count</a>, <a class="d" href="#jvmtiPrimitiveType">jvmtiPrimitiveType</a> <a href="/9.0.0_r3/s?defs=element_type&amp;project=art">element_type</a>, <b>const</b> <b>void</b>* <a href="/9.0.0_r3/s?defs=elements&amp;project=art">elements</a>, <b>void</b>* <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>);
<a class="l" name="491" href="#491">491</a>
<a class="l" name="492" href="#492">492</a><b>typedef</b> <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiStringPrimitiveValueCallback"/><a href="/9.0.0_r3/s?refs=jvmtiStringPrimitiveValueCallback&amp;project=art" class="xt">jvmtiStringPrimitiveValueCallback</a>)
<a class="l" name="493" href="#493">493</a>    (<a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a href="/9.0.0_r3/s?defs=class_tag&amp;project=art">class_tag</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="d" href="#size">size</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>* <a class="d" href="#tag_ptr">tag_ptr</a>, <b>const</b> <a href="/9.0.0_r3/s?defs=jchar&amp;project=art">jchar</a>* <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>, <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=value_length&amp;project=art">value_length</a>, <b>void</b>* <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>);
<a class="l" name="494" href="#494">494</a>
<a class="l" name="495" href="#495">495</a><b>typedef</b> <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiReservedCallback"/><a href="/9.0.0_r3/s?refs=jvmtiReservedCallback&amp;project=art" class="xt">jvmtiReservedCallback</a>)
<a class="l" name="496" href="#496">496</a>    ();
<a class="l" name="497" href="#497">497</a>
<a class="l" name="498" href="#498">498</a><b>typedef</b> <a class="d" href="#jvmtiIterationControl">jvmtiIterationControl</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiHeapObjectCallback"/><a href="/9.0.0_r3/s?refs=jvmtiHeapObjectCallback&amp;project=art" class="xt">jvmtiHeapObjectCallback</a>)
<a class="l" name="499" href="#499">499</a>    (<a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a href="/9.0.0_r3/s?defs=class_tag&amp;project=art">class_tag</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="d" href="#size">size</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>* <a class="d" href="#tag_ptr">tag_ptr</a>, <b>void</b>* <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>);
<a class="hl" name="500" href="#500">500</a>
<a class="l" name="501" href="#501">501</a><b>typedef</b> <a class="d" href="#jvmtiIterationControl">jvmtiIterationControl</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiHeapRootCallback"/><a href="/9.0.0_r3/s?refs=jvmtiHeapRootCallback&amp;project=art" class="xt">jvmtiHeapRootCallback</a>)
<a class="l" name="502" href="#502">502</a>    (<a class="d" href="#jvmtiHeapRootKind">jvmtiHeapRootKind</a> <a href="/9.0.0_r3/s?defs=root_kind&amp;project=art">root_kind</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a href="/9.0.0_r3/s?defs=class_tag&amp;project=art">class_tag</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="d" href="#size">size</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>* <a class="d" href="#tag_ptr">tag_ptr</a>, <b>void</b>* <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>);
<a class="l" name="503" href="#503">503</a>
<a class="l" name="504" href="#504">504</a><b>typedef</b> <a class="d" href="#jvmtiIterationControl">jvmtiIterationControl</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiStackReferenceCallback"/><a href="/9.0.0_r3/s?refs=jvmtiStackReferenceCallback&amp;project=art" class="xt">jvmtiStackReferenceCallback</a>)
<a class="l" name="505" href="#505">505</a>    (<a class="d" href="#jvmtiHeapRootKind">jvmtiHeapRootKind</a> <a href="/9.0.0_r3/s?defs=root_kind&amp;project=art">root_kind</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a href="/9.0.0_r3/s?defs=class_tag&amp;project=art">class_tag</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="d" href="#size">size</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>* <a class="d" href="#tag_ptr">tag_ptr</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a href="/9.0.0_r3/s?defs=thread_tag&amp;project=art">thread_tag</a>, <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>, <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>, <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>, <b>void</b>* <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>);
<a class="l" name="506" href="#506">506</a>
<a class="l" name="507" href="#507">507</a><b>typedef</b> <a class="d" href="#jvmtiIterationControl">jvmtiIterationControl</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiObjectReferenceCallback"/><a href="/9.0.0_r3/s?refs=jvmtiObjectReferenceCallback&amp;project=art" class="xt">jvmtiObjectReferenceCallback</a>)
<a class="l" name="508" href="#508">508</a>    (<a class="d" href="#jvmtiObjectReferenceKind">jvmtiObjectReferenceKind</a> <a href="/9.0.0_r3/s?defs=reference_kind&amp;project=art">reference_kind</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a href="/9.0.0_r3/s?defs=class_tag&amp;project=art">class_tag</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="d" href="#size">size</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>* <a class="d" href="#tag_ptr">tag_ptr</a>, <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a href="/9.0.0_r3/s?defs=referrer_tag&amp;project=art">referrer_tag</a>, <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=referrer_index&amp;project=art">referrer_index</a>, <b>void</b>* <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>);
<a class="l" name="509" href="#509">509</a>
<a class="hl" name="510" href="#510">510</a><b>typedef</b> <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiExtensionFunction"/><a href="/9.0.0_r3/s?refs=jvmtiExtensionFunction&amp;project=art" class="xt">jvmtiExtensionFunction</a>)
<a class="l" name="511" href="#511">511</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,  ...);
<a class="l" name="512" href="#512">512</a>
<a class="l" name="513" href="#513">513</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiExtensionEvent"/><a href="/9.0.0_r3/s?refs=jvmtiExtensionEvent&amp;project=art" class="xt">jvmtiExtensionEvent</a>)
<a class="l" name="514" href="#514">514</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,  ...);
<a class="l" name="515" href="#515">515</a>
<a class="l" name="516" href="#516">516</a>
<a class="l" name="517" href="#517">517</a>    <span class="c">/* Structure Types */</span>
<a class="l" name="518" href="#518">518</a><b>struct</b> <a class="xs" name="_jvmtiThreadInfo"/><a href="/9.0.0_r3/s?refs=_jvmtiThreadInfo&amp;project=art" class="xs">_jvmtiThreadInfo</a> {
<a class="l" name="519" href="#519">519</a>    <b>char</b>* <a class="xmb" name="name"/><a href="/9.0.0_r3/s?refs=name&amp;project=art" class="xmb">name</a>;
<a class="hl" name="520" href="#520">520</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xmb" name="priority"/><a href="/9.0.0_r3/s?refs=priority&amp;project=art" class="xmb">priority</a>;
<a class="l" name="521" href="#521">521</a>    <a href="/9.0.0_r3/s?defs=jboolean&amp;project=art">jboolean</a> <a class="xmb" name="is_daemon"/><a href="/9.0.0_r3/s?refs=is_daemon&amp;project=art" class="xmb">is_daemon</a>;
<a class="l" name="522" href="#522">522</a>    <a class="d" href="#jthreadGroup">jthreadGroup</a> <a class="xmb" name="thread_group"/><a href="/9.0.0_r3/s?refs=thread_group&amp;project=art" class="xmb">thread_group</a>;
<a class="l" name="523" href="#523">523</a>    <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a class="xmb" name="context_class_loader"/><a href="/9.0.0_r3/s?refs=context_class_loader&amp;project=art" class="xmb">context_class_loader</a>;
<a class="l" name="524" href="#524">524</a>};
<a class="l" name="525" href="#525">525</a><b>struct</b> <a class="xs" name="_jvmtiMonitorStackDepthInfo"/><a href="/9.0.0_r3/s?refs=_jvmtiMonitorStackDepthInfo&amp;project=art" class="xs">_jvmtiMonitorStackDepthInfo</a> {
<a class="l" name="526" href="#526">526</a>    <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a class="xmb" name="monitor"/><a href="/9.0.0_r3/s?refs=monitor&amp;project=art" class="xmb">monitor</a>;
<a class="l" name="527" href="#527">527</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xmb" name="stack_depth"/><a href="/9.0.0_r3/s?refs=stack_depth&amp;project=art" class="xmb">stack_depth</a>;
<a class="l" name="528" href="#528">528</a>};
<a class="l" name="529" href="#529">529</a><b>struct</b> <a class="xs" name="_jvmtiThreadGroupInfo"/><a href="/9.0.0_r3/s?refs=_jvmtiThreadGroupInfo&amp;project=art" class="xs">_jvmtiThreadGroupInfo</a> {
<a class="hl" name="530" href="#530">530</a>    <a class="d" href="#jthreadGroup">jthreadGroup</a> <a class="xmb" name="parent"/><a href="/9.0.0_r3/s?refs=parent&amp;project=art" class="xmb">parent</a>;
<a class="l" name="531" href="#531">531</a>    <b>char</b>* <a class="xmb" name="name"/><a href="/9.0.0_r3/s?refs=name&amp;project=art" class="xmb">name</a>;
<a class="l" name="532" href="#532">532</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xmb" name="max_priority"/><a href="/9.0.0_r3/s?refs=max_priority&amp;project=art" class="xmb">max_priority</a>;
<a class="l" name="533" href="#533">533</a>    <a href="/9.0.0_r3/s?defs=jboolean&amp;project=art">jboolean</a> <a class="xmb" name="is_daemon"/><a href="/9.0.0_r3/s?refs=is_daemon&amp;project=art" class="xmb">is_daemon</a>;
<a class="l" name="534" href="#534">534</a>};
<a class="l" name="535" href="#535">535</a><b>struct</b> <a class="xs" name="_jvmtiFrameInfo"/><a href="/9.0.0_r3/s?refs=_jvmtiFrameInfo&amp;project=art" class="xs">_jvmtiFrameInfo</a> {
<a class="l" name="536" href="#536">536</a>    <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a class="xmb" name="method"/><a href="/9.0.0_r3/s?refs=method&amp;project=art" class="xmb">method</a>;
<a class="l" name="537" href="#537">537</a>    <a class="d" href="#jlocation">jlocation</a> <a class="xmb" name="location"/><a href="/9.0.0_r3/s?refs=location&amp;project=art" class="xmb">location</a>;
<a class="l" name="538" href="#538">538</a>};
<a class="l" name="539" href="#539">539</a><b>struct</b> <a class="xs" name="_jvmtiStackInfo"/><a href="/9.0.0_r3/s?refs=_jvmtiStackInfo&amp;project=art" class="xs">_jvmtiStackInfo</a> {
<a class="hl" name="540" href="#540">540</a>    <a class="d" href="#jthread">jthread</a> <a class="xmb" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xmb">thread</a>;
<a class="l" name="541" href="#541">541</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xmb" name="state"/><a href="/9.0.0_r3/s?refs=state&amp;project=art" class="xmb">state</a>;
<a class="l" name="542" href="#542">542</a>    <a class="d" href="#jvmtiFrameInfo">jvmtiFrameInfo</a>* <a class="xmb" name="frame_buffer"/><a href="/9.0.0_r3/s?refs=frame_buffer&amp;project=art" class="xmb">frame_buffer</a>;
<a class="l" name="543" href="#543">543</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xmb" name="frame_count"/><a href="/9.0.0_r3/s?refs=frame_count&amp;project=art" class="xmb">frame_count</a>;
<a class="l" name="544" href="#544">544</a>};
<a class="l" name="545" href="#545">545</a><b>struct</b> <a class="xs" name="_jvmtiHeapReferenceInfoField"/><a href="/9.0.0_r3/s?refs=_jvmtiHeapReferenceInfoField&amp;project=art" class="xs">_jvmtiHeapReferenceInfoField</a> {
<a class="l" name="546" href="#546">546</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xmb" name="index"/><a href="/9.0.0_r3/s?refs=index&amp;project=art" class="xmb">index</a>;
<a class="l" name="547" href="#547">547</a>};
<a class="l" name="548" href="#548">548</a><b>struct</b> <a class="xs" name="_jvmtiHeapReferenceInfoArray"/><a href="/9.0.0_r3/s?refs=_jvmtiHeapReferenceInfoArray&amp;project=art" class="xs">_jvmtiHeapReferenceInfoArray</a> {
<a class="l" name="549" href="#549">549</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xmb" name="index"/><a href="/9.0.0_r3/s?refs=index&amp;project=art" class="xmb">index</a>;
<a class="hl" name="550" href="#550">550</a>};
<a class="l" name="551" href="#551">551</a><b>struct</b> <a class="xs" name="_jvmtiHeapReferenceInfoConstantPool"/><a href="/9.0.0_r3/s?refs=_jvmtiHeapReferenceInfoConstantPool&amp;project=art" class="xs">_jvmtiHeapReferenceInfoConstantPool</a> {
<a class="l" name="552" href="#552">552</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xmb" name="index"/><a href="/9.0.0_r3/s?refs=index&amp;project=art" class="xmb">index</a>;
<a class="l" name="553" href="#553">553</a>};
<a class="l" name="554" href="#554">554</a><b>struct</b> <a class="xs" name="_jvmtiHeapReferenceInfoStackLocal"/><a href="/9.0.0_r3/s?refs=_jvmtiHeapReferenceInfoStackLocal&amp;project=art" class="xs">_jvmtiHeapReferenceInfoStackLocal</a> {
<a class="l" name="555" href="#555">555</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="xmb" name="thread_tag"/><a href="/9.0.0_r3/s?refs=thread_tag&amp;project=art" class="xmb">thread_tag</a>;
<a class="l" name="556" href="#556">556</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="xmb" name="thread_id"/><a href="/9.0.0_r3/s?refs=thread_id&amp;project=art" class="xmb">thread_id</a>;
<a class="l" name="557" href="#557">557</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xmb" name="depth"/><a href="/9.0.0_r3/s?refs=depth&amp;project=art" class="xmb">depth</a>;
<a class="l" name="558" href="#558">558</a>    <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a class="xmb" name="method"/><a href="/9.0.0_r3/s?refs=method&amp;project=art" class="xmb">method</a>;
<a class="l" name="559" href="#559">559</a>    <a class="d" href="#jlocation">jlocation</a> <a class="xmb" name="location"/><a href="/9.0.0_r3/s?refs=location&amp;project=art" class="xmb">location</a>;
<a class="hl" name="560" href="#560">560</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xmb" name="slot"/><a href="/9.0.0_r3/s?refs=slot&amp;project=art" class="xmb">slot</a>;
<a class="l" name="561" href="#561">561</a>};
<a class="l" name="562" href="#562">562</a><b>struct</b> <a class="xs" name="_jvmtiHeapReferenceInfoJniLocal"/><a href="/9.0.0_r3/s?refs=_jvmtiHeapReferenceInfoJniLocal&amp;project=art" class="xs">_jvmtiHeapReferenceInfoJniLocal</a> {
<a class="l" name="563" href="#563">563</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="xmb" name="thread_tag"/><a href="/9.0.0_r3/s?refs=thread_tag&amp;project=art" class="xmb">thread_tag</a>;
<a class="l" name="564" href="#564">564</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="xmb" name="thread_id"/><a href="/9.0.0_r3/s?refs=thread_id&amp;project=art" class="xmb">thread_id</a>;
<a class="l" name="565" href="#565">565</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xmb" name="depth"/><a href="/9.0.0_r3/s?refs=depth&amp;project=art" class="xmb">depth</a>;
<a class="l" name="566" href="#566">566</a>    <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a class="xmb" name="method"/><a href="/9.0.0_r3/s?refs=method&amp;project=art" class="xmb">method</a>;
<a class="l" name="567" href="#567">567</a>};
<a class="l" name="568" href="#568">568</a><b>struct</b> <a class="xs" name="_jvmtiHeapReferenceInfoReserved"/><a href="/9.0.0_r3/s?refs=_jvmtiHeapReferenceInfoReserved&amp;project=art" class="xs">_jvmtiHeapReferenceInfoReserved</a> {
<a class="l" name="569" href="#569">569</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="xmb" name="reserved1"/><a href="/9.0.0_r3/s?refs=reserved1&amp;project=art" class="xmb">reserved1</a>;
<a class="hl" name="570" href="#570">570</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="xmb" name="reserved2"/><a href="/9.0.0_r3/s?refs=reserved2&amp;project=art" class="xmb">reserved2</a>;
<a class="l" name="571" href="#571">571</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="xmb" name="reserved3"/><a href="/9.0.0_r3/s?refs=reserved3&amp;project=art" class="xmb">reserved3</a>;
<a class="l" name="572" href="#572">572</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="xmb" name="reserved4"/><a href="/9.0.0_r3/s?refs=reserved4&amp;project=art" class="xmb">reserved4</a>;
<a class="l" name="573" href="#573">573</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="xmb" name="reserved5"/><a href="/9.0.0_r3/s?refs=reserved5&amp;project=art" class="xmb">reserved5</a>;
<a class="l" name="574" href="#574">574</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="xmb" name="reserved6"/><a href="/9.0.0_r3/s?refs=reserved6&amp;project=art" class="xmb">reserved6</a>;
<a class="l" name="575" href="#575">575</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="xmb" name="reserved7"/><a href="/9.0.0_r3/s?refs=reserved7&amp;project=art" class="xmb">reserved7</a>;
<a class="l" name="576" href="#576">576</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="xmb" name="reserved8"/><a href="/9.0.0_r3/s?refs=reserved8&amp;project=art" class="xmb">reserved8</a>;
<a class="l" name="577" href="#577">577</a>};
<a class="l" name="578" href="#578">578</a><b>union</b> <a class="xu" name="_jvmtiHeapReferenceInfo"/><a href="/9.0.0_r3/s?refs=_jvmtiHeapReferenceInfo&amp;project=art" class="xu">_jvmtiHeapReferenceInfo</a> {
<a class="l" name="579" href="#579">579</a>    <a class="d" href="#jvmtiHeapReferenceInfoField">jvmtiHeapReferenceInfoField</a> <a class="xmb" name="field"/><a href="/9.0.0_r3/s?refs=field&amp;project=art" class="xmb">field</a>;
<a class="hl" name="580" href="#580">580</a>    <a class="d" href="#jvmtiHeapReferenceInfoArray">jvmtiHeapReferenceInfoArray</a> <a class="xmb" name="array"/><a href="/9.0.0_r3/s?refs=array&amp;project=art" class="xmb">array</a>;
<a class="l" name="581" href="#581">581</a>    <a class="d" href="#jvmtiHeapReferenceInfoConstantPool">jvmtiHeapReferenceInfoConstantPool</a> <a class="xmb" name="constant_pool"/><a href="/9.0.0_r3/s?refs=constant_pool&amp;project=art" class="xmb">constant_pool</a>;
<a class="l" name="582" href="#582">582</a>    <a class="d" href="#jvmtiHeapReferenceInfoStackLocal">jvmtiHeapReferenceInfoStackLocal</a> <a class="xmb" name="stack_local"/><a href="/9.0.0_r3/s?refs=stack_local&amp;project=art" class="xmb">stack_local</a>;
<a class="l" name="583" href="#583">583</a>    <a class="d" href="#jvmtiHeapReferenceInfoJniLocal">jvmtiHeapReferenceInfoJniLocal</a> <a class="xmb" name="jni_local"/><a href="/9.0.0_r3/s?refs=jni_local&amp;project=art" class="xmb">jni_local</a>;
<a class="l" name="584" href="#584">584</a>    <a class="d" href="#jvmtiHeapReferenceInfoReserved">jvmtiHeapReferenceInfoReserved</a> <a class="xmb" name="other"/><a href="/9.0.0_r3/s?refs=other&amp;project=art" class="xmb">other</a>;
<a class="l" name="585" href="#585">585</a>};
<a class="l" name="586" href="#586">586</a><b>struct</b> <a class="xs" name="_jvmtiHeapCallbacks"/><a href="/9.0.0_r3/s?refs=_jvmtiHeapCallbacks&amp;project=art" class="xs">_jvmtiHeapCallbacks</a> {
<a class="l" name="587" href="#587">587</a>    <a class="d" href="#jvmtiHeapIterationCallback">jvmtiHeapIterationCallback</a> <a class="xmb" name="heap_iteration_callback"/><a href="/9.0.0_r3/s?refs=heap_iteration_callback&amp;project=art" class="xmb">heap_iteration_callback</a>;
<a class="l" name="588" href="#588">588</a>    <a class="d" href="#jvmtiHeapReferenceCallback">jvmtiHeapReferenceCallback</a> <a class="xmb" name="heap_reference_callback"/><a href="/9.0.0_r3/s?refs=heap_reference_callback&amp;project=art" class="xmb">heap_reference_callback</a>;
<a class="l" name="589" href="#589">589</a>    <a class="d" href="#jvmtiPrimitiveFieldCallback">jvmtiPrimitiveFieldCallback</a> <a class="xmb" name="primitive_field_callback"/><a href="/9.0.0_r3/s?refs=primitive_field_callback&amp;project=art" class="xmb">primitive_field_callback</a>;
<a class="hl" name="590" href="#590">590</a>    <a class="d" href="#jvmtiArrayPrimitiveValueCallback">jvmtiArrayPrimitiveValueCallback</a> <a class="xmb" name="array_primitive_value_callback"/><a href="/9.0.0_r3/s?refs=array_primitive_value_callback&amp;project=art" class="xmb">array_primitive_value_callback</a>;
<a class="l" name="591" href="#591">591</a>    <a class="d" href="#jvmtiStringPrimitiveValueCallback">jvmtiStringPrimitiveValueCallback</a> <a class="xmb" name="string_primitive_value_callback"/><a href="/9.0.0_r3/s?refs=string_primitive_value_callback&amp;project=art" class="xmb">string_primitive_value_callback</a>;
<a class="l" name="592" href="#592">592</a>    <a class="d" href="#jvmtiReservedCallback">jvmtiReservedCallback</a> <a class="xmb" name="reserved5"/><a href="/9.0.0_r3/s?refs=reserved5&amp;project=art" class="xmb">reserved5</a>;
<a class="l" name="593" href="#593">593</a>    <a class="d" href="#jvmtiReservedCallback">jvmtiReservedCallback</a> <a class="xmb" name="reserved6"/><a href="/9.0.0_r3/s?refs=reserved6&amp;project=art" class="xmb">reserved6</a>;
<a class="l" name="594" href="#594">594</a>    <a class="d" href="#jvmtiReservedCallback">jvmtiReservedCallback</a> <a class="xmb" name="reserved7"/><a href="/9.0.0_r3/s?refs=reserved7&amp;project=art" class="xmb">reserved7</a>;
<a class="l" name="595" href="#595">595</a>    <a class="d" href="#jvmtiReservedCallback">jvmtiReservedCallback</a> <a class="xmb" name="reserved8"/><a href="/9.0.0_r3/s?refs=reserved8&amp;project=art" class="xmb">reserved8</a>;
<a class="l" name="596" href="#596">596</a>    <a class="d" href="#jvmtiReservedCallback">jvmtiReservedCallback</a> <a class="xmb" name="reserved9"/><a href="/9.0.0_r3/s?refs=reserved9&amp;project=art" class="xmb">reserved9</a>;
<a class="l" name="597" href="#597">597</a>    <a class="d" href="#jvmtiReservedCallback">jvmtiReservedCallback</a> <a class="xmb" name="reserved10"/><a href="/9.0.0_r3/s?refs=reserved10&amp;project=art" class="xmb">reserved10</a>;
<a class="l" name="598" href="#598">598</a>    <a class="d" href="#jvmtiReservedCallback">jvmtiReservedCallback</a> <a class="xmb" name="reserved11"/><a href="/9.0.0_r3/s?refs=reserved11&amp;project=art" class="xmb">reserved11</a>;
<a class="l" name="599" href="#599">599</a>    <a class="d" href="#jvmtiReservedCallback">jvmtiReservedCallback</a> <a class="xmb" name="reserved12"/><a href="/9.0.0_r3/s?refs=reserved12&amp;project=art" class="xmb">reserved12</a>;
<a class="hl" name="600" href="#600">600</a>    <a class="d" href="#jvmtiReservedCallback">jvmtiReservedCallback</a> <a class="xmb" name="reserved13"/><a href="/9.0.0_r3/s?refs=reserved13&amp;project=art" class="xmb">reserved13</a>;
<a class="l" name="601" href="#601">601</a>    <a class="d" href="#jvmtiReservedCallback">jvmtiReservedCallback</a> <a class="xmb" name="reserved14"/><a href="/9.0.0_r3/s?refs=reserved14&amp;project=art" class="xmb">reserved14</a>;
<a class="l" name="602" href="#602">602</a>    <a class="d" href="#jvmtiReservedCallback">jvmtiReservedCallback</a> <a class="xmb" name="reserved15"/><a href="/9.0.0_r3/s?refs=reserved15&amp;project=art" class="xmb">reserved15</a>;
<a class="l" name="603" href="#603">603</a>};
<a class="l" name="604" href="#604">604</a><b>struct</b> <a class="xs" name="_jvmtiClassDefinition"/><a href="/9.0.0_r3/s?refs=_jvmtiClassDefinition&amp;project=art" class="xs">_jvmtiClassDefinition</a> {
<a class="l" name="605" href="#605">605</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a class="xmb" name="klass"/><a href="/9.0.0_r3/s?refs=klass&amp;project=art" class="xmb">klass</a>;
<a class="l" name="606" href="#606">606</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xmb" name="class_byte_count"/><a href="/9.0.0_r3/s?refs=class_byte_count&amp;project=art" class="xmb">class_byte_count</a>;
<a class="l" name="607" href="#607">607</a>    <b>const</b> <b>unsigned</b> <b>char</b>* <a class="xmb" name="class_bytes"/><a href="/9.0.0_r3/s?refs=class_bytes&amp;project=art" class="xmb">class_bytes</a>;
<a class="l" name="608" href="#608">608</a>};
<a class="l" name="609" href="#609">609</a><b>struct</b> <a class="xs" name="_jvmtiMonitorUsage"/><a href="/9.0.0_r3/s?refs=_jvmtiMonitorUsage&amp;project=art" class="xs">_jvmtiMonitorUsage</a> {
<a class="hl" name="610" href="#610">610</a>    <a class="d" href="#jthread">jthread</a> <a class="xmb" name="owner"/><a href="/9.0.0_r3/s?refs=owner&amp;project=art" class="xmb">owner</a>;
<a class="l" name="611" href="#611">611</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xmb" name="entry_count"/><a href="/9.0.0_r3/s?refs=entry_count&amp;project=art" class="xmb">entry_count</a>;
<a class="l" name="612" href="#612">612</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xmb" name="waiter_count"/><a href="/9.0.0_r3/s?refs=waiter_count&amp;project=art" class="xmb">waiter_count</a>;
<a class="l" name="613" href="#613">613</a>    <a class="d" href="#jthread">jthread</a>* <a class="xmb" name="waiters"/><a href="/9.0.0_r3/s?refs=waiters&amp;project=art" class="xmb">waiters</a>;
<a class="l" name="614" href="#614">614</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xmb" name="notify_waiter_count"/><a href="/9.0.0_r3/s?refs=notify_waiter_count&amp;project=art" class="xmb">notify_waiter_count</a>;
<a class="l" name="615" href="#615">615</a>    <a class="d" href="#jthread">jthread</a>* <a class="xmb" name="notify_waiters"/><a href="/9.0.0_r3/s?refs=notify_waiters&amp;project=art" class="xmb">notify_waiters</a>;
<a class="l" name="616" href="#616">616</a>};
<a class="l" name="617" href="#617">617</a><b>struct</b> <a class="xs" name="_jvmtiLineNumberEntry"/><a href="/9.0.0_r3/s?refs=_jvmtiLineNumberEntry&amp;project=art" class="xs">_jvmtiLineNumberEntry</a> {
<a class="l" name="618" href="#618">618</a>    <a class="d" href="#jlocation">jlocation</a> <a class="xmb" name="start_location"/><a href="/9.0.0_r3/s?refs=start_location&amp;project=art" class="xmb">start_location</a>;
<a class="l" name="619" href="#619">619</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xmb" name="line_number"/><a href="/9.0.0_r3/s?refs=line_number&amp;project=art" class="xmb">line_number</a>;
<a class="hl" name="620" href="#620">620</a>};
<a class="l" name="621" href="#621">621</a><b>struct</b> <a class="xs" name="_jvmtiLocalVariableEntry"/><a href="/9.0.0_r3/s?refs=_jvmtiLocalVariableEntry&amp;project=art" class="xs">_jvmtiLocalVariableEntry</a> {
<a class="l" name="622" href="#622">622</a>    <a class="d" href="#jlocation">jlocation</a> <a class="xmb" name="start_location"/><a href="/9.0.0_r3/s?refs=start_location&amp;project=art" class="xmb">start_location</a>;
<a class="l" name="623" href="#623">623</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xmb" name="length"/><a href="/9.0.0_r3/s?refs=length&amp;project=art" class="xmb">length</a>;
<a class="l" name="624" href="#624">624</a>    <b>char</b>* <a class="xmb" name="name"/><a href="/9.0.0_r3/s?refs=name&amp;project=art" class="xmb">name</a>;
<a class="l" name="625" href="#625">625</a>    <b>char</b>* <a class="xmb" name="signature"/><a href="/9.0.0_r3/s?refs=signature&amp;project=art" class="xmb">signature</a>;
<a class="l" name="626" href="#626">626</a>    <b>char</b>* <a class="xmb" name="generic_signature"/><a href="/9.0.0_r3/s?refs=generic_signature&amp;project=art" class="xmb">generic_signature</a>;
<a class="l" name="627" href="#627">627</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xmb" name="slot"/><a href="/9.0.0_r3/s?refs=slot&amp;project=art" class="xmb">slot</a>;
<a class="l" name="628" href="#628">628</a>};
<a class="l" name="629" href="#629">629</a><b>struct</b> <a class="xs" name="_jvmtiParamInfo"/><a href="/9.0.0_r3/s?refs=_jvmtiParamInfo&amp;project=art" class="xs">_jvmtiParamInfo</a> {
<a class="hl" name="630" href="#630">630</a>    <b>char</b>* <a class="xmb" name="name"/><a href="/9.0.0_r3/s?refs=name&amp;project=art" class="xmb">name</a>;
<a class="l" name="631" href="#631">631</a>    <a class="d" href="#jvmtiParamKind">jvmtiParamKind</a> <a class="xmb" name="kind"/><a href="/9.0.0_r3/s?refs=kind&amp;project=art" class="xmb">kind</a>;
<a class="l" name="632" href="#632">632</a>    <a class="d" href="#jvmtiParamTypes">jvmtiParamTypes</a> <a class="xmb" name="base_type"/><a href="/9.0.0_r3/s?refs=base_type&amp;project=art" class="xmb">base_type</a>;
<a class="l" name="633" href="#633">633</a>    <a href="/9.0.0_r3/s?defs=jboolean&amp;project=art">jboolean</a> <a class="xmb" name="null_ok"/><a href="/9.0.0_r3/s?refs=null_ok&amp;project=art" class="xmb">null_ok</a>;
<a class="l" name="634" href="#634">634</a>};
<a class="l" name="635" href="#635">635</a><b>struct</b> <a class="xs" name="_jvmtiExtensionFunctionInfo"/><a href="/9.0.0_r3/s?refs=_jvmtiExtensionFunctionInfo&amp;project=art" class="xs">_jvmtiExtensionFunctionInfo</a> {
<a class="l" name="636" href="#636">636</a>    <a class="d" href="#jvmtiExtensionFunction">jvmtiExtensionFunction</a> <a class="xmb" name="func"/><a href="/9.0.0_r3/s?refs=func&amp;project=art" class="xmb">func</a>;
<a class="l" name="637" href="#637">637</a>    <b>char</b>* <a class="xmb" name="id"/><a href="/9.0.0_r3/s?refs=id&amp;project=art" class="xmb">id</a>;
<a class="l" name="638" href="#638">638</a>    <b>char</b>* <a class="xmb" name="short_description"/><a href="/9.0.0_r3/s?refs=short_description&amp;project=art" class="xmb">short_description</a>;
<a class="l" name="639" href="#639">639</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xmb" name="param_count"/><a href="/9.0.0_r3/s?refs=param_count&amp;project=art" class="xmb">param_count</a>;
<a class="hl" name="640" href="#640">640</a>    <a class="d" href="#jvmtiParamInfo">jvmtiParamInfo</a>* <a class="xmb" name="params"/><a href="/9.0.0_r3/s?refs=params&amp;project=art" class="xmb">params</a>;
<a class="l" name="641" href="#641">641</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xmb" name="error_count"/><a href="/9.0.0_r3/s?refs=error_count&amp;project=art" class="xmb">error_count</a>;
<a class="l" name="642" href="#642">642</a>    <a class="d" href="#jvmtiError">jvmtiError</a>* <a class="xmb" name="errors"/><a href="/9.0.0_r3/s?refs=errors&amp;project=art" class="xmb">errors</a>;
<a class="l" name="643" href="#643">643</a>};
<a class="l" name="644" href="#644">644</a><b>struct</b> <a class="xs" name="_jvmtiExtensionEventInfo"/><a href="/9.0.0_r3/s?refs=_jvmtiExtensionEventInfo&amp;project=art" class="xs">_jvmtiExtensionEventInfo</a> {
<a class="l" name="645" href="#645">645</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xmb" name="extension_event_index"/><a href="/9.0.0_r3/s?refs=extension_event_index&amp;project=art" class="xmb">extension_event_index</a>;
<a class="l" name="646" href="#646">646</a>    <b>char</b>* <a class="xmb" name="id"/><a href="/9.0.0_r3/s?refs=id&amp;project=art" class="xmb">id</a>;
<a class="l" name="647" href="#647">647</a>    <b>char</b>* <a class="xmb" name="short_description"/><a href="/9.0.0_r3/s?refs=short_description&amp;project=art" class="xmb">short_description</a>;
<a class="l" name="648" href="#648">648</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xmb" name="param_count"/><a href="/9.0.0_r3/s?refs=param_count&amp;project=art" class="xmb">param_count</a>;
<a class="l" name="649" href="#649">649</a>    <a class="d" href="#jvmtiParamInfo">jvmtiParamInfo</a>* <a class="xmb" name="params"/><a href="/9.0.0_r3/s?refs=params&amp;project=art" class="xmb">params</a>;
<a class="hl" name="650" href="#650">650</a>};
<a class="l" name="651" href="#651">651</a><b>struct</b> <a class="xs" name="_jvmtiTimerInfo"/><a href="/9.0.0_r3/s?refs=_jvmtiTimerInfo&amp;project=art" class="xs">_jvmtiTimerInfo</a> {
<a class="l" name="652" href="#652">652</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="xmb" name="max_value"/><a href="/9.0.0_r3/s?refs=max_value&amp;project=art" class="xmb">max_value</a>;
<a class="l" name="653" href="#653">653</a>    <a href="/9.0.0_r3/s?defs=jboolean&amp;project=art">jboolean</a> <a class="xmb" name="may_skip_forward"/><a href="/9.0.0_r3/s?refs=may_skip_forward&amp;project=art" class="xmb">may_skip_forward</a>;
<a class="l" name="654" href="#654">654</a>    <a href="/9.0.0_r3/s?defs=jboolean&amp;project=art">jboolean</a> <a class="xmb" name="may_skip_backward"/><a href="/9.0.0_r3/s?refs=may_skip_backward&amp;project=art" class="xmb">may_skip_backward</a>;
<a class="l" name="655" href="#655">655</a>    <a class="d" href="#jvmtiTimerKind">jvmtiTimerKind</a> <a class="xmb" name="kind"/><a href="/9.0.0_r3/s?refs=kind&amp;project=art" class="xmb">kind</a>;
<a class="l" name="656" href="#656">656</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="xmb" name="reserved1"/><a href="/9.0.0_r3/s?refs=reserved1&amp;project=art" class="xmb">reserved1</a>;
<a class="l" name="657" href="#657">657</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="xmb" name="reserved2"/><a href="/9.0.0_r3/s?refs=reserved2&amp;project=art" class="xmb">reserved2</a>;
<a class="l" name="658" href="#658">658</a>};
<a class="l" name="659" href="#659">659</a><b>struct</b> <a class="xs" name="_jvmtiAddrLocationMap"/><a href="/9.0.0_r3/s?refs=_jvmtiAddrLocationMap&amp;project=art" class="xs">_jvmtiAddrLocationMap</a> {
<a class="hl" name="660" href="#660">660</a>    <b>const</b> <b>void</b>* <a class="xmb" name="start_address"/><a href="/9.0.0_r3/s?refs=start_address&amp;project=art" class="xmb">start_address</a>;
<a class="l" name="661" href="#661">661</a>    <a class="d" href="#jlocation">jlocation</a> <a class="xmb" name="location"/><a href="/9.0.0_r3/s?refs=location&amp;project=art" class="xmb">location</a>;
<a class="l" name="662" href="#662">662</a>};
<a class="l" name="663" href="#663">663</a>
<a class="l" name="664" href="#664">664</a><b>typedef</b> <b>struct</b> {
<a class="l" name="665" href="#665">665</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_tag_objects"/><a href="/9.0.0_r3/s?refs=can_tag_objects&amp;project=art" class="xmb">can_tag_objects</a> : <span class="n">1</span>;
<a class="l" name="666" href="#666">666</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_generate_field_modification_events"/><a href="/9.0.0_r3/s?refs=can_generate_field_modification_events&amp;project=art" class="xmb">can_generate_field_modification_events</a> : <span class="n">1</span>;
<a class="l" name="667" href="#667">667</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_generate_field_access_events"/><a href="/9.0.0_r3/s?refs=can_generate_field_access_events&amp;project=art" class="xmb">can_generate_field_access_events</a> : <span class="n">1</span>;
<a class="l" name="668" href="#668">668</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_get_bytecodes"/><a href="/9.0.0_r3/s?refs=can_get_bytecodes&amp;project=art" class="xmb">can_get_bytecodes</a> : <span class="n">1</span>;
<a class="l" name="669" href="#669">669</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_get_synthetic_attribute"/><a href="/9.0.0_r3/s?refs=can_get_synthetic_attribute&amp;project=art" class="xmb">can_get_synthetic_attribute</a> : <span class="n">1</span>;
<a class="hl" name="670" href="#670">670</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_get_owned_monitor_info"/><a href="/9.0.0_r3/s?refs=can_get_owned_monitor_info&amp;project=art" class="xmb">can_get_owned_monitor_info</a> : <span class="n">1</span>;
<a class="l" name="671" href="#671">671</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_get_current_contended_monitor"/><a href="/9.0.0_r3/s?refs=can_get_current_contended_monitor&amp;project=art" class="xmb">can_get_current_contended_monitor</a> : <span class="n">1</span>;
<a class="l" name="672" href="#672">672</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_get_monitor_info"/><a href="/9.0.0_r3/s?refs=can_get_monitor_info&amp;project=art" class="xmb">can_get_monitor_info</a> : <span class="n">1</span>;
<a class="l" name="673" href="#673">673</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_pop_frame"/><a href="/9.0.0_r3/s?refs=can_pop_frame&amp;project=art" class="xmb">can_pop_frame</a> : <span class="n">1</span>;
<a class="l" name="674" href="#674">674</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_redefine_classes"/><a href="/9.0.0_r3/s?refs=can_redefine_classes&amp;project=art" class="xmb">can_redefine_classes</a> : <span class="n">1</span>;
<a class="l" name="675" href="#675">675</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_signal_thread"/><a href="/9.0.0_r3/s?refs=can_signal_thread&amp;project=art" class="xmb">can_signal_thread</a> : <span class="n">1</span>;
<a class="l" name="676" href="#676">676</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_get_source_file_name"/><a href="/9.0.0_r3/s?refs=can_get_source_file_name&amp;project=art" class="xmb">can_get_source_file_name</a> : <span class="n">1</span>;
<a class="l" name="677" href="#677">677</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_get_line_numbers"/><a href="/9.0.0_r3/s?refs=can_get_line_numbers&amp;project=art" class="xmb">can_get_line_numbers</a> : <span class="n">1</span>;
<a class="l" name="678" href="#678">678</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_get_source_debug_extension"/><a href="/9.0.0_r3/s?refs=can_get_source_debug_extension&amp;project=art" class="xmb">can_get_source_debug_extension</a> : <span class="n">1</span>;
<a class="l" name="679" href="#679">679</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_access_local_variables"/><a href="/9.0.0_r3/s?refs=can_access_local_variables&amp;project=art" class="xmb">can_access_local_variables</a> : <span class="n">1</span>;
<a class="hl" name="680" href="#680">680</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_maintain_original_method_order"/><a href="/9.0.0_r3/s?refs=can_maintain_original_method_order&amp;project=art" class="xmb">can_maintain_original_method_order</a> : <span class="n">1</span>;
<a class="l" name="681" href="#681">681</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_generate_single_step_events"/><a href="/9.0.0_r3/s?refs=can_generate_single_step_events&amp;project=art" class="xmb">can_generate_single_step_events</a> : <span class="n">1</span>;
<a class="l" name="682" href="#682">682</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_generate_exception_events"/><a href="/9.0.0_r3/s?refs=can_generate_exception_events&amp;project=art" class="xmb">can_generate_exception_events</a> : <span class="n">1</span>;
<a class="l" name="683" href="#683">683</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_generate_frame_pop_events"/><a href="/9.0.0_r3/s?refs=can_generate_frame_pop_events&amp;project=art" class="xmb">can_generate_frame_pop_events</a> : <span class="n">1</span>;
<a class="l" name="684" href="#684">684</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_generate_breakpoint_events"/><a href="/9.0.0_r3/s?refs=can_generate_breakpoint_events&amp;project=art" class="xmb">can_generate_breakpoint_events</a> : <span class="n">1</span>;
<a class="l" name="685" href="#685">685</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_suspend"/><a href="/9.0.0_r3/s?refs=can_suspend&amp;project=art" class="xmb">can_suspend</a> : <span class="n">1</span>;
<a class="l" name="686" href="#686">686</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_redefine_any_class"/><a href="/9.0.0_r3/s?refs=can_redefine_any_class&amp;project=art" class="xmb">can_redefine_any_class</a> : <span class="n">1</span>;
<a class="l" name="687" href="#687">687</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_get_current_thread_cpu_time"/><a href="/9.0.0_r3/s?refs=can_get_current_thread_cpu_time&amp;project=art" class="xmb">can_get_current_thread_cpu_time</a> : <span class="n">1</span>;
<a class="l" name="688" href="#688">688</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_get_thread_cpu_time"/><a href="/9.0.0_r3/s?refs=can_get_thread_cpu_time&amp;project=art" class="xmb">can_get_thread_cpu_time</a> : <span class="n">1</span>;
<a class="l" name="689" href="#689">689</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_generate_method_entry_events"/><a href="/9.0.0_r3/s?refs=can_generate_method_entry_events&amp;project=art" class="xmb">can_generate_method_entry_events</a> : <span class="n">1</span>;
<a class="hl" name="690" href="#690">690</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_generate_method_exit_events"/><a href="/9.0.0_r3/s?refs=can_generate_method_exit_events&amp;project=art" class="xmb">can_generate_method_exit_events</a> : <span class="n">1</span>;
<a class="l" name="691" href="#691">691</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_generate_all_class_hook_events"/><a href="/9.0.0_r3/s?refs=can_generate_all_class_hook_events&amp;project=art" class="xmb">can_generate_all_class_hook_events</a> : <span class="n">1</span>;
<a class="l" name="692" href="#692">692</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_generate_compiled_method_load_events"/><a href="/9.0.0_r3/s?refs=can_generate_compiled_method_load_events&amp;project=art" class="xmb">can_generate_compiled_method_load_events</a> : <span class="n">1</span>;
<a class="l" name="693" href="#693">693</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_generate_monitor_events"/><a href="/9.0.0_r3/s?refs=can_generate_monitor_events&amp;project=art" class="xmb">can_generate_monitor_events</a> : <span class="n">1</span>;
<a class="l" name="694" href="#694">694</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_generate_vm_object_alloc_events"/><a href="/9.0.0_r3/s?refs=can_generate_vm_object_alloc_events&amp;project=art" class="xmb">can_generate_vm_object_alloc_events</a> : <span class="n">1</span>;
<a class="l" name="695" href="#695">695</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_generate_native_method_bind_events"/><a href="/9.0.0_r3/s?refs=can_generate_native_method_bind_events&amp;project=art" class="xmb">can_generate_native_method_bind_events</a> : <span class="n">1</span>;
<a class="l" name="696" href="#696">696</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_generate_garbage_collection_events"/><a href="/9.0.0_r3/s?refs=can_generate_garbage_collection_events&amp;project=art" class="xmb">can_generate_garbage_collection_events</a> : <span class="n">1</span>;
<a class="l" name="697" href="#697">697</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_generate_object_free_events"/><a href="/9.0.0_r3/s?refs=can_generate_object_free_events&amp;project=art" class="xmb">can_generate_object_free_events</a> : <span class="n">1</span>;
<a class="l" name="698" href="#698">698</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_force_early_return"/><a href="/9.0.0_r3/s?refs=can_force_early_return&amp;project=art" class="xmb">can_force_early_return</a> : <span class="n">1</span>;
<a class="l" name="699" href="#699">699</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_get_owned_monitor_stack_depth_info"/><a href="/9.0.0_r3/s?refs=can_get_owned_monitor_stack_depth_info&amp;project=art" class="xmb">can_get_owned_monitor_stack_depth_info</a> : <span class="n">1</span>;
<a class="hl" name="700" href="#700">700</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_get_constant_pool"/><a href="/9.0.0_r3/s?refs=can_get_constant_pool&amp;project=art" class="xmb">can_get_constant_pool</a> : <span class="n">1</span>;
<a class="l" name="701" href="#701">701</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_set_native_method_prefix"/><a href="/9.0.0_r3/s?refs=can_set_native_method_prefix&amp;project=art" class="xmb">can_set_native_method_prefix</a> : <span class="n">1</span>;
<a class="l" name="702" href="#702">702</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_retransform_classes"/><a href="/9.0.0_r3/s?refs=can_retransform_classes&amp;project=art" class="xmb">can_retransform_classes</a> : <span class="n">1</span>;
<a class="l" name="703" href="#703">703</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_retransform_any_class"/><a href="/9.0.0_r3/s?refs=can_retransform_any_class&amp;project=art" class="xmb">can_retransform_any_class</a> : <span class="n">1</span>;
<a class="l" name="704" href="#704">704</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_generate_resource_exhaustion_heap_events"/><a href="/9.0.0_r3/s?refs=can_generate_resource_exhaustion_heap_events&amp;project=art" class="xmb">can_generate_resource_exhaustion_heap_events</a> : <span class="n">1</span>;
<a class="l" name="705" href="#705">705</a>    <b>unsigned</b> <b>int</b> <a class="xmb" name="can_generate_resource_exhaustion_threads_events"/><a href="/9.0.0_r3/s?refs=can_generate_resource_exhaustion_threads_events&amp;project=art" class="xmb">can_generate_resource_exhaustion_threads_events</a> : <span class="n">1</span>;
<a class="l" name="706" href="#706">706</a>    <b>unsigned</b> <b>int</b> : <span class="n">7</span>;
<a class="l" name="707" href="#707">707</a>    <b>unsigned</b> <b>int</b> : <span class="n">16</span>;
<a class="l" name="708" href="#708">708</a>    <b>unsigned</b> <b>int</b> : <span class="n">16</span>;
<a class="l" name="709" href="#709">709</a>    <b>unsigned</b> <b>int</b> : <span class="n">16</span>;
<a class="hl" name="710" href="#710">710</a>    <b>unsigned</b> <b>int</b> : <span class="n">16</span>;
<a class="l" name="711" href="#711">711</a>    <b>unsigned</b> <b>int</b> : <span class="n">16</span>;
<a class="l" name="712" href="#712">712</a>} <a class="xt" name="jvmtiCapabilities"/><a href="/9.0.0_r3/s?refs=jvmtiCapabilities&amp;project=art" class="xt">jvmtiCapabilities</a>;
<a class="l" name="713" href="#713">713</a>
<a class="l" name="714" href="#714">714</a>
<a class="l" name="715" href="#715">715</a>    <span class="c">/* Event Definitions */</span>
<a class="l" name="716" href="#716">716</a>
<a class="l" name="717" href="#717">717</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventReserved"/><a href="/9.0.0_r3/s?refs=jvmtiEventReserved&amp;project=art" class="xt">jvmtiEventReserved</a>)(<b>void</b>);
<a class="l" name="718" href="#718">718</a>
<a class="l" name="719" href="#719">719</a>
<a class="hl" name="720" href="#720">720</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventBreakpoint"/><a href="/9.0.0_r3/s?refs=jvmtiEventBreakpoint&amp;project=art" class="xt">jvmtiEventBreakpoint</a>)
<a class="l" name="721" href="#721">721</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="722" href="#722">722</a>     <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>,
<a class="l" name="723" href="#723">723</a>     <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="724" href="#724">724</a>     <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="725" href="#725">725</a>     <a class="d" href="#jlocation">jlocation</a> <a href="/9.0.0_r3/s?defs=location&amp;project=art">location</a>);
<a class="l" name="726" href="#726">726</a>
<a class="l" name="727" href="#727">727</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventClassFileLoadHook"/><a href="/9.0.0_r3/s?refs=jvmtiEventClassFileLoadHook&amp;project=art" class="xt">jvmtiEventClassFileLoadHook</a>)
<a class="l" name="728" href="#728">728</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="729" href="#729">729</a>     <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>,
<a class="hl" name="730" href="#730">730</a>     <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=class_being_redefined&amp;project=art">class_being_redefined</a>,
<a class="l" name="731" href="#731">731</a>     <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a href="/9.0.0_r3/s?defs=loader&amp;project=art">loader</a>,
<a class="l" name="732" href="#732">732</a>     <b>const</b> <b>char</b>* <a href="/9.0.0_r3/s?defs=name&amp;project=art">name</a>,
<a class="l" name="733" href="#733">733</a>     <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a href="/9.0.0_r3/s?defs=protection_domain&amp;project=art">protection_domain</a>,
<a class="l" name="734" href="#734">734</a>     <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=class_data_len&amp;project=art">class_data_len</a>,
<a class="l" name="735" href="#735">735</a>     <b>const</b> <b>unsigned</b> <b>char</b>* <a href="/9.0.0_r3/s?defs=class_data&amp;project=art">class_data</a>,
<a class="l" name="736" href="#736">736</a>     <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=new_class_data_len&amp;project=art">new_class_data_len</a>,
<a class="l" name="737" href="#737">737</a>     <b>unsigned</b> <b>char</b>** <a href="/9.0.0_r3/s?defs=new_class_data&amp;project=art">new_class_data</a>);
<a class="l" name="738" href="#738">738</a>
<a class="l" name="739" href="#739">739</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventClassLoad"/><a href="/9.0.0_r3/s?refs=jvmtiEventClassLoad&amp;project=art" class="xt">jvmtiEventClassLoad</a>)
<a class="hl" name="740" href="#740">740</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="741" href="#741">741</a>     <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>,
<a class="l" name="742" href="#742">742</a>     <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="743" href="#743">743</a>     <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>);
<a class="l" name="744" href="#744">744</a>
<a class="l" name="745" href="#745">745</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventClassPrepare"/><a href="/9.0.0_r3/s?refs=jvmtiEventClassPrepare&amp;project=art" class="xt">jvmtiEventClassPrepare</a>)
<a class="l" name="746" href="#746">746</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="747" href="#747">747</a>     <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>,
<a class="l" name="748" href="#748">748</a>     <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="749" href="#749">749</a>     <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>);
<a class="hl" name="750" href="#750">750</a>
<a class="l" name="751" href="#751">751</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventCompiledMethodLoad"/><a href="/9.0.0_r3/s?refs=jvmtiEventCompiledMethodLoad&amp;project=art" class="xt">jvmtiEventCompiledMethodLoad</a>)
<a class="l" name="752" href="#752">752</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="753" href="#753">753</a>     <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="754" href="#754">754</a>     <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=code_size&amp;project=art">code_size</a>,
<a class="l" name="755" href="#755">755</a>     <b>const</b> <b>void</b>* <a href="/9.0.0_r3/s?defs=code_addr&amp;project=art">code_addr</a>,
<a class="l" name="756" href="#756">756</a>     <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=map_length&amp;project=art">map_length</a>,
<a class="l" name="757" href="#757">757</a>     <b>const</b> <a class="d" href="#jvmtiAddrLocationMap">jvmtiAddrLocationMap</a>* <a href="/9.0.0_r3/s?defs=map&amp;project=art">map</a>,
<a class="l" name="758" href="#758">758</a>     <b>const</b> <b>void</b>* <a href="/9.0.0_r3/s?defs=compile_info&amp;project=art">compile_info</a>);
<a class="l" name="759" href="#759">759</a>
<a class="hl" name="760" href="#760">760</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventCompiledMethodUnload"/><a href="/9.0.0_r3/s?refs=jvmtiEventCompiledMethodUnload&amp;project=art" class="xt">jvmtiEventCompiledMethodUnload</a>)
<a class="l" name="761" href="#761">761</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="762" href="#762">762</a>     <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="763" href="#763">763</a>     <b>const</b> <b>void</b>* <a href="/9.0.0_r3/s?defs=code_addr&amp;project=art">code_addr</a>);
<a class="l" name="764" href="#764">764</a>
<a class="l" name="765" href="#765">765</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventDataDumpRequest"/><a href="/9.0.0_r3/s?refs=jvmtiEventDataDumpRequest&amp;project=art" class="xt">jvmtiEventDataDumpRequest</a>)
<a class="l" name="766" href="#766">766</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>);
<a class="l" name="767" href="#767">767</a>
<a class="l" name="768" href="#768">768</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventDynamicCodeGenerated"/><a href="/9.0.0_r3/s?refs=jvmtiEventDynamicCodeGenerated&amp;project=art" class="xt">jvmtiEventDynamicCodeGenerated</a>)
<a class="l" name="769" href="#769">769</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="hl" name="770" href="#770">770</a>     <b>const</b> <b>char</b>* <a href="/9.0.0_r3/s?defs=name&amp;project=art">name</a>,
<a class="l" name="771" href="#771">771</a>     <b>const</b> <b>void</b>* <a href="/9.0.0_r3/s?defs=address&amp;project=art">address</a>,
<a class="l" name="772" href="#772">772</a>     <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="d" href="#length">length</a>);
<a class="l" name="773" href="#773">773</a>
<a class="l" name="774" href="#774">774</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventException"/><a href="/9.0.0_r3/s?refs=jvmtiEventException&amp;project=art" class="xt">jvmtiEventException</a>)
<a class="l" name="775" href="#775">775</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="776" href="#776">776</a>     <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>,
<a class="l" name="777" href="#777">777</a>     <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="778" href="#778">778</a>     <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="779" href="#779">779</a>     <a class="d" href="#jlocation">jlocation</a> <a href="/9.0.0_r3/s?defs=location&amp;project=art">location</a>,
<a class="hl" name="780" href="#780">780</a>     <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a class="d" href="#exception">exception</a>,
<a class="l" name="781" href="#781">781</a>     <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=catch_method&amp;project=art">catch_method</a>,
<a class="l" name="782" href="#782">782</a>     <a class="d" href="#jlocation">jlocation</a> <a href="/9.0.0_r3/s?defs=catch_location&amp;project=art">catch_location</a>);
<a class="l" name="783" href="#783">783</a>
<a class="l" name="784" href="#784">784</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventExceptionCatch"/><a href="/9.0.0_r3/s?refs=jvmtiEventExceptionCatch&amp;project=art" class="xt">jvmtiEventExceptionCatch</a>)
<a class="l" name="785" href="#785">785</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="786" href="#786">786</a>     <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>,
<a class="l" name="787" href="#787">787</a>     <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="788" href="#788">788</a>     <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="789" href="#789">789</a>     <a class="d" href="#jlocation">jlocation</a> <a href="/9.0.0_r3/s?defs=location&amp;project=art">location</a>,
<a class="hl" name="790" href="#790">790</a>     <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a class="d" href="#exception">exception</a>);
<a class="l" name="791" href="#791">791</a>
<a class="l" name="792" href="#792">792</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventFieldAccess"/><a href="/9.0.0_r3/s?refs=jvmtiEventFieldAccess&amp;project=art" class="xt">jvmtiEventFieldAccess</a>)
<a class="l" name="793" href="#793">793</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="794" href="#794">794</a>     <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>,
<a class="l" name="795" href="#795">795</a>     <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="796" href="#796">796</a>     <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="797" href="#797">797</a>     <a class="d" href="#jlocation">jlocation</a> <a href="/9.0.0_r3/s?defs=location&amp;project=art">location</a>,
<a class="l" name="798" href="#798">798</a>     <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=field_klass&amp;project=art">field_klass</a>,
<a class="l" name="799" href="#799">799</a>     <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a href="/9.0.0_r3/s?defs=object&amp;project=art">object</a>,
<a class="hl" name="800" href="#800">800</a>     <a href="/9.0.0_r3/s?defs=jfieldID&amp;project=art">jfieldID</a> <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>);
<a class="l" name="801" href="#801">801</a>
<a class="l" name="802" href="#802">802</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventFieldModification"/><a href="/9.0.0_r3/s?refs=jvmtiEventFieldModification&amp;project=art" class="xt">jvmtiEventFieldModification</a>)
<a class="l" name="803" href="#803">803</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="804" href="#804">804</a>     <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>,
<a class="l" name="805" href="#805">805</a>     <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="806" href="#806">806</a>     <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="807" href="#807">807</a>     <a class="d" href="#jlocation">jlocation</a> <a href="/9.0.0_r3/s?defs=location&amp;project=art">location</a>,
<a class="l" name="808" href="#808">808</a>     <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=field_klass&amp;project=art">field_klass</a>,
<a class="l" name="809" href="#809">809</a>     <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a href="/9.0.0_r3/s?defs=object&amp;project=art">object</a>,
<a class="hl" name="810" href="#810">810</a>     <a href="/9.0.0_r3/s?defs=jfieldID&amp;project=art">jfieldID</a> <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>,
<a class="l" name="811" href="#811">811</a>     <b>char</b> <a href="/9.0.0_r3/s?defs=signature_type&amp;project=art">signature_type</a>,
<a class="l" name="812" href="#812">812</a>     <a href="/9.0.0_r3/s?defs=jvalue&amp;project=art">jvalue</a> <a href="/9.0.0_r3/s?defs=new_value&amp;project=art">new_value</a>);
<a class="l" name="813" href="#813">813</a>
<a class="l" name="814" href="#814">814</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventFramePop"/><a href="/9.0.0_r3/s?refs=jvmtiEventFramePop&amp;project=art" class="xt">jvmtiEventFramePop</a>)
<a class="l" name="815" href="#815">815</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="816" href="#816">816</a>     <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>,
<a class="l" name="817" href="#817">817</a>     <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="818" href="#818">818</a>     <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="819" href="#819">819</a>     <a href="/9.0.0_r3/s?defs=jboolean&amp;project=art">jboolean</a> <a href="/9.0.0_r3/s?defs=was_popped_by_exception&amp;project=art">was_popped_by_exception</a>);
<a class="hl" name="820" href="#820">820</a>
<a class="l" name="821" href="#821">821</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventGarbageCollectionFinish"/><a href="/9.0.0_r3/s?refs=jvmtiEventGarbageCollectionFinish&amp;project=art" class="xt">jvmtiEventGarbageCollectionFinish</a>)
<a class="l" name="822" href="#822">822</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>);
<a class="l" name="823" href="#823">823</a>
<a class="l" name="824" href="#824">824</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventGarbageCollectionStart"/><a href="/9.0.0_r3/s?refs=jvmtiEventGarbageCollectionStart&amp;project=art" class="xt">jvmtiEventGarbageCollectionStart</a>)
<a class="l" name="825" href="#825">825</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>);
<a class="l" name="826" href="#826">826</a>
<a class="l" name="827" href="#827">827</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventMethodEntry"/><a href="/9.0.0_r3/s?refs=jvmtiEventMethodEntry&amp;project=art" class="xt">jvmtiEventMethodEntry</a>)
<a class="l" name="828" href="#828">828</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="829" href="#829">829</a>     <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>,
<a class="hl" name="830" href="#830">830</a>     <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="831" href="#831">831</a>     <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>);
<a class="l" name="832" href="#832">832</a>
<a class="l" name="833" href="#833">833</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventMethodExit"/><a href="/9.0.0_r3/s?refs=jvmtiEventMethodExit&amp;project=art" class="xt">jvmtiEventMethodExit</a>)
<a class="l" name="834" href="#834">834</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="835" href="#835">835</a>     <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>,
<a class="l" name="836" href="#836">836</a>     <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="837" href="#837">837</a>     <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="838" href="#838">838</a>     <a href="/9.0.0_r3/s?defs=jboolean&amp;project=art">jboolean</a> <a href="/9.0.0_r3/s?defs=was_popped_by_exception&amp;project=art">was_popped_by_exception</a>,
<a class="l" name="839" href="#839">839</a>     <a href="/9.0.0_r3/s?defs=jvalue&amp;project=art">jvalue</a> <a href="/9.0.0_r3/s?defs=return_value&amp;project=art">return_value</a>);
<a class="hl" name="840" href="#840">840</a>
<a class="l" name="841" href="#841">841</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventMonitorContendedEnter"/><a href="/9.0.0_r3/s?refs=jvmtiEventMonitorContendedEnter&amp;project=art" class="xt">jvmtiEventMonitorContendedEnter</a>)
<a class="l" name="842" href="#842">842</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="843" href="#843">843</a>     <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>,
<a class="l" name="844" href="#844">844</a>     <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="845" href="#845">845</a>     <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a href="/9.0.0_r3/s?defs=object&amp;project=art">object</a>);
<a class="l" name="846" href="#846">846</a>
<a class="l" name="847" href="#847">847</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventMonitorContendedEntered"/><a href="/9.0.0_r3/s?refs=jvmtiEventMonitorContendedEntered&amp;project=art" class="xt">jvmtiEventMonitorContendedEntered</a>)
<a class="l" name="848" href="#848">848</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="849" href="#849">849</a>     <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>,
<a class="hl" name="850" href="#850">850</a>     <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="851" href="#851">851</a>     <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a href="/9.0.0_r3/s?defs=object&amp;project=art">object</a>);
<a class="l" name="852" href="#852">852</a>
<a class="l" name="853" href="#853">853</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventMonitorWait"/><a href="/9.0.0_r3/s?refs=jvmtiEventMonitorWait&amp;project=art" class="xt">jvmtiEventMonitorWait</a>)
<a class="l" name="854" href="#854">854</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="855" href="#855">855</a>     <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>,
<a class="l" name="856" href="#856">856</a>     <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="857" href="#857">857</a>     <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a href="/9.0.0_r3/s?defs=object&amp;project=art">object</a>,
<a class="l" name="858" href="#858">858</a>     <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a href="/9.0.0_r3/s?defs=timeout&amp;project=art">timeout</a>);
<a class="l" name="859" href="#859">859</a>
<a class="hl" name="860" href="#860">860</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventMonitorWaited"/><a href="/9.0.0_r3/s?refs=jvmtiEventMonitorWaited&amp;project=art" class="xt">jvmtiEventMonitorWaited</a>)
<a class="l" name="861" href="#861">861</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="862" href="#862">862</a>     <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>,
<a class="l" name="863" href="#863">863</a>     <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="864" href="#864">864</a>     <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a href="/9.0.0_r3/s?defs=object&amp;project=art">object</a>,
<a class="l" name="865" href="#865">865</a>     <a href="/9.0.0_r3/s?defs=jboolean&amp;project=art">jboolean</a> <a href="/9.0.0_r3/s?defs=timed_out&amp;project=art">timed_out</a>);
<a class="l" name="866" href="#866">866</a>
<a class="l" name="867" href="#867">867</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventNativeMethodBind"/><a href="/9.0.0_r3/s?refs=jvmtiEventNativeMethodBind&amp;project=art" class="xt">jvmtiEventNativeMethodBind</a>)
<a class="l" name="868" href="#868">868</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="869" href="#869">869</a>     <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>,
<a class="hl" name="870" href="#870">870</a>     <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="871" href="#871">871</a>     <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="872" href="#872">872</a>     <b>void</b>* <a href="/9.0.0_r3/s?defs=address&amp;project=art">address</a>,
<a class="l" name="873" href="#873">873</a>     <b>void</b>** <a href="/9.0.0_r3/s?defs=new_address_ptr&amp;project=art">new_address_ptr</a>);
<a class="l" name="874" href="#874">874</a>
<a class="l" name="875" href="#875">875</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventObjectFree"/><a href="/9.0.0_r3/s?refs=jvmtiEventObjectFree&amp;project=art" class="xt">jvmtiEventObjectFree</a>)
<a class="l" name="876" href="#876">876</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="877" href="#877">877</a>     <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="d" href="#tag">tag</a>);
<a class="l" name="878" href="#878">878</a>
<a class="l" name="879" href="#879">879</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventResourceExhausted"/><a href="/9.0.0_r3/s?refs=jvmtiEventResourceExhausted&amp;project=art" class="xt">jvmtiEventResourceExhausted</a>)
<a class="hl" name="880" href="#880">880</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="881" href="#881">881</a>     <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>,
<a class="l" name="882" href="#882">882</a>     <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=flags&amp;project=art">flags</a>,
<a class="l" name="883" href="#883">883</a>     <b>const</b> <b>void</b>* <a href="/9.0.0_r3/s?defs=reserved&amp;project=art">reserved</a>,
<a class="l" name="884" href="#884">884</a>     <b>const</b> <b>char</b>* <a href="/9.0.0_r3/s?defs=description&amp;project=art">description</a>);
<a class="l" name="885" href="#885">885</a>
<a class="l" name="886" href="#886">886</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventSingleStep"/><a href="/9.0.0_r3/s?refs=jvmtiEventSingleStep&amp;project=art" class="xt">jvmtiEventSingleStep</a>)
<a class="l" name="887" href="#887">887</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="888" href="#888">888</a>     <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>,
<a class="l" name="889" href="#889">889</a>     <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="hl" name="890" href="#890">890</a>     <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="891" href="#891">891</a>     <a class="d" href="#jlocation">jlocation</a> <a href="/9.0.0_r3/s?defs=location&amp;project=art">location</a>);
<a class="l" name="892" href="#892">892</a>
<a class="l" name="893" href="#893">893</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventThreadEnd"/><a href="/9.0.0_r3/s?refs=jvmtiEventThreadEnd&amp;project=art" class="xt">jvmtiEventThreadEnd</a>)
<a class="l" name="894" href="#894">894</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="895" href="#895">895</a>     <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>,
<a class="l" name="896" href="#896">896</a>     <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>);
<a class="l" name="897" href="#897">897</a>
<a class="l" name="898" href="#898">898</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventThreadStart"/><a href="/9.0.0_r3/s?refs=jvmtiEventThreadStart&amp;project=art" class="xt">jvmtiEventThreadStart</a>)
<a class="l" name="899" href="#899">899</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="hl" name="900" href="#900">900</a>     <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>,
<a class="l" name="901" href="#901">901</a>     <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>);
<a class="l" name="902" href="#902">902</a>
<a class="l" name="903" href="#903">903</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventVMDeath"/><a href="/9.0.0_r3/s?refs=jvmtiEventVMDeath&amp;project=art" class="xt">jvmtiEventVMDeath</a>)
<a class="l" name="904" href="#904">904</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="905" href="#905">905</a>     <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>);
<a class="l" name="906" href="#906">906</a>
<a class="l" name="907" href="#907">907</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventVMInit"/><a href="/9.0.0_r3/s?refs=jvmtiEventVMInit&amp;project=art" class="xt">jvmtiEventVMInit</a>)
<a class="l" name="908" href="#908">908</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="909" href="#909">909</a>     <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>,
<a class="hl" name="910" href="#910">910</a>     <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>);
<a class="l" name="911" href="#911">911</a>
<a class="l" name="912" href="#912">912</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventVMObjectAlloc"/><a href="/9.0.0_r3/s?refs=jvmtiEventVMObjectAlloc&amp;project=art" class="xt">jvmtiEventVMObjectAlloc</a>)
<a class="l" name="913" href="#913">913</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="914" href="#914">914</a>     <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>,
<a class="l" name="915" href="#915">915</a>     <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="916" href="#916">916</a>     <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a href="/9.0.0_r3/s?defs=object&amp;project=art">object</a>,
<a class="l" name="917" href="#917">917</a>     <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=object_klass&amp;project=art">object_klass</a>,
<a class="l" name="918" href="#918">918</a>     <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="d" href="#size">size</a>);
<a class="l" name="919" href="#919">919</a>
<a class="hl" name="920" href="#920">920</a><b>typedef</b> <b>void</b> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xt" name="jvmtiEventVMStart"/><a href="/9.0.0_r3/s?refs=jvmtiEventVMStart&amp;project=art" class="xt">jvmtiEventVMStart</a>)
<a class="l" name="921" href="#921">921</a>    (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a> *<a href="/9.0.0_r3/s?defs=jvmti_env&amp;project=art">jvmti_env</a>,
<a class="l" name="922" href="#922">922</a>     <a href="/9.0.0_r3/s?defs=JNIEnv&amp;project=art">JNIEnv</a>* <a href="/9.0.0_r3/s?defs=jni_env&amp;project=art">jni_env</a>);
<a class="l" name="923" href="#923">923</a>
<a class="l" name="924" href="#924">924</a>    <span class="c">/* Event Callback Structure */</span>
<a class="l" name="925" href="#925">925</a>
<a class="l" name="926" href="#926">926</a><b>typedef</b> <b>struct</b> {
<a class="l" name="927" href="#927">927</a>                              <span class="c">/*   50 : VM Initialization Event */</span>
<a class="l" name="928" href="#928">928</a>    <a class="d" href="#jvmtiEventVMInit">jvmtiEventVMInit</a> <a class="xmb" name="VMInit"/><a href="/9.0.0_r3/s?refs=VMInit&amp;project=art" class="xmb">VMInit</a>;
<a class="l" name="929" href="#929">929</a>                              <span class="c">/*   51 : VM Death Event */</span>
<a class="hl" name="930" href="#930">930</a>    <a class="d" href="#jvmtiEventVMDeath">jvmtiEventVMDeath</a> <a class="xmb" name="VMDeath"/><a href="/9.0.0_r3/s?refs=VMDeath&amp;project=art" class="xmb">VMDeath</a>;
<a class="l" name="931" href="#931">931</a>                              <span class="c">/*   52 : Thread Start */</span>
<a class="l" name="932" href="#932">932</a>    <a class="d" href="#jvmtiEventThreadStart">jvmtiEventThreadStart</a> <a class="xmb" name="ThreadStart"/><a href="/9.0.0_r3/s?refs=ThreadStart&amp;project=art" class="xmb">ThreadStart</a>;
<a class="l" name="933" href="#933">933</a>                              <span class="c">/*   53 : Thread End */</span>
<a class="l" name="934" href="#934">934</a>    <a class="d" href="#jvmtiEventThreadEnd">jvmtiEventThreadEnd</a> <a class="xmb" name="ThreadEnd"/><a href="/9.0.0_r3/s?refs=ThreadEnd&amp;project=art" class="xmb">ThreadEnd</a>;
<a class="l" name="935" href="#935">935</a>                              <span class="c">/*   54 : Class File Load Hook */</span>
<a class="l" name="936" href="#936">936</a>    <a class="d" href="#jvmtiEventClassFileLoadHook">jvmtiEventClassFileLoadHook</a> <a class="xmb" name="ClassFileLoadHook"/><a href="/9.0.0_r3/s?refs=ClassFileLoadHook&amp;project=art" class="xmb">ClassFileLoadHook</a>;
<a class="l" name="937" href="#937">937</a>                              <span class="c">/*   55 : Class Load */</span>
<a class="l" name="938" href="#938">938</a>    <a class="d" href="#jvmtiEventClassLoad">jvmtiEventClassLoad</a> <a class="xmb" name="ClassLoad"/><a href="/9.0.0_r3/s?refs=ClassLoad&amp;project=art" class="xmb">ClassLoad</a>;
<a class="l" name="939" href="#939">939</a>                              <span class="c">/*   56 : Class Prepare */</span>
<a class="hl" name="940" href="#940">940</a>    <a class="d" href="#jvmtiEventClassPrepare">jvmtiEventClassPrepare</a> <a class="xmb" name="ClassPrepare"/><a href="/9.0.0_r3/s?refs=ClassPrepare&amp;project=art" class="xmb">ClassPrepare</a>;
<a class="l" name="941" href="#941">941</a>                              <span class="c">/*   57 : VM Start Event */</span>
<a class="l" name="942" href="#942">942</a>    <a class="d" href="#jvmtiEventVMStart">jvmtiEventVMStart</a> <a class="xmb" name="VMStart"/><a href="/9.0.0_r3/s?refs=VMStart&amp;project=art" class="xmb">VMStart</a>;
<a class="l" name="943" href="#943">943</a>                              <span class="c">/*   58 : Exception */</span>
<a class="l" name="944" href="#944">944</a>    <a class="d" href="#jvmtiEventException">jvmtiEventException</a> <a class="xmb" name="Exception"/><a href="/9.0.0_r3/s?refs=Exception&amp;project=art" class="xmb">Exception</a>;
<a class="l" name="945" href="#945">945</a>                              <span class="c">/*   59 : Exception Catch */</span>
<a class="l" name="946" href="#946">946</a>    <a class="d" href="#jvmtiEventExceptionCatch">jvmtiEventExceptionCatch</a> <a class="xmb" name="ExceptionCatch"/><a href="/9.0.0_r3/s?refs=ExceptionCatch&amp;project=art" class="xmb">ExceptionCatch</a>;
<a class="l" name="947" href="#947">947</a>                              <span class="c">/*   60 : Single Step */</span>
<a class="l" name="948" href="#948">948</a>    <a class="d" href="#jvmtiEventSingleStep">jvmtiEventSingleStep</a> <a class="xmb" name="SingleStep"/><a href="/9.0.0_r3/s?refs=SingleStep&amp;project=art" class="xmb">SingleStep</a>;
<a class="l" name="949" href="#949">949</a>                              <span class="c">/*   61 : Frame Pop */</span>
<a class="hl" name="950" href="#950">950</a>    <a class="d" href="#jvmtiEventFramePop">jvmtiEventFramePop</a> <a class="xmb" name="FramePop"/><a href="/9.0.0_r3/s?refs=FramePop&amp;project=art" class="xmb">FramePop</a>;
<a class="l" name="951" href="#951">951</a>                              <span class="c">/*   62 : Breakpoint */</span>
<a class="l" name="952" href="#952">952</a>    <a class="d" href="#jvmtiEventBreakpoint">jvmtiEventBreakpoint</a> <a class="xmb" name="Breakpoint"/><a href="/9.0.0_r3/s?refs=Breakpoint&amp;project=art" class="xmb">Breakpoint</a>;
<a class="l" name="953" href="#953">953</a>                              <span class="c">/*   63 : Field Access */</span>
<a class="l" name="954" href="#954">954</a>    <a class="d" href="#jvmtiEventFieldAccess">jvmtiEventFieldAccess</a> <a class="xmb" name="FieldAccess"/><a href="/9.0.0_r3/s?refs=FieldAccess&amp;project=art" class="xmb">FieldAccess</a>;
<a class="l" name="955" href="#955">955</a>                              <span class="c">/*   64 : Field Modification */</span>
<a class="l" name="956" href="#956">956</a>    <a class="d" href="#jvmtiEventFieldModification">jvmtiEventFieldModification</a> <a class="xmb" name="FieldModification"/><a href="/9.0.0_r3/s?refs=FieldModification&amp;project=art" class="xmb">FieldModification</a>;
<a class="l" name="957" href="#957">957</a>                              <span class="c">/*   65 : Method Entry */</span>
<a class="l" name="958" href="#958">958</a>    <a class="d" href="#jvmtiEventMethodEntry">jvmtiEventMethodEntry</a> <a class="xmb" name="MethodEntry"/><a href="/9.0.0_r3/s?refs=MethodEntry&amp;project=art" class="xmb">MethodEntry</a>;
<a class="l" name="959" href="#959">959</a>                              <span class="c">/*   66 : Method Exit */</span>
<a class="hl" name="960" href="#960">960</a>    <a class="d" href="#jvmtiEventMethodExit">jvmtiEventMethodExit</a> <a class="xmb" name="MethodExit"/><a href="/9.0.0_r3/s?refs=MethodExit&amp;project=art" class="xmb">MethodExit</a>;
<a class="l" name="961" href="#961">961</a>                              <span class="c">/*   67 : Native Method Bind */</span>
<a class="l" name="962" href="#962">962</a>    <a class="d" href="#jvmtiEventNativeMethodBind">jvmtiEventNativeMethodBind</a> <a class="xmb" name="NativeMethodBind"/><a href="/9.0.0_r3/s?refs=NativeMethodBind&amp;project=art" class="xmb">NativeMethodBind</a>;
<a class="l" name="963" href="#963">963</a>                              <span class="c">/*   68 : Compiled Method Load */</span>
<a class="l" name="964" href="#964">964</a>    <a class="d" href="#jvmtiEventCompiledMethodLoad">jvmtiEventCompiledMethodLoad</a> <a class="xmb" name="CompiledMethodLoad"/><a href="/9.0.0_r3/s?refs=CompiledMethodLoad&amp;project=art" class="xmb">CompiledMethodLoad</a>;
<a class="l" name="965" href="#965">965</a>                              <span class="c">/*   69 : Compiled Method Unload */</span>
<a class="l" name="966" href="#966">966</a>    <a class="d" href="#jvmtiEventCompiledMethodUnload">jvmtiEventCompiledMethodUnload</a> <a class="xmb" name="CompiledMethodUnload"/><a href="/9.0.0_r3/s?refs=CompiledMethodUnload&amp;project=art" class="xmb">CompiledMethodUnload</a>;
<a class="l" name="967" href="#967">967</a>                              <span class="c">/*   70 : Dynamic Code Generated */</span>
<a class="l" name="968" href="#968">968</a>    <a class="d" href="#jvmtiEventDynamicCodeGenerated">jvmtiEventDynamicCodeGenerated</a> <a class="xmb" name="DynamicCodeGenerated"/><a href="/9.0.0_r3/s?refs=DynamicCodeGenerated&amp;project=art" class="xmb">DynamicCodeGenerated</a>;
<a class="l" name="969" href="#969">969</a>                              <span class="c">/*   71 : Data Dump Request */</span>
<a class="hl" name="970" href="#970">970</a>    <a class="d" href="#jvmtiEventDataDumpRequest">jvmtiEventDataDumpRequest</a> <a class="xmb" name="DataDumpRequest"/><a href="/9.0.0_r3/s?refs=DataDumpRequest&amp;project=art" class="xmb">DataDumpRequest</a>;
<a class="l" name="971" href="#971">971</a>                              <span class="c">/*   72 */</span>
<a class="l" name="972" href="#972">972</a>    <a class="d" href="#jvmtiEventReserved">jvmtiEventReserved</a> <a class="xmb" name="reserved72"/><a href="/9.0.0_r3/s?refs=reserved72&amp;project=art" class="xmb">reserved72</a>;
<a class="l" name="973" href="#973">973</a>                              <span class="c">/*   73 : Monitor Wait */</span>
<a class="l" name="974" href="#974">974</a>    <a class="d" href="#jvmtiEventMonitorWait">jvmtiEventMonitorWait</a> <a class="xmb" name="MonitorWait"/><a href="/9.0.0_r3/s?refs=MonitorWait&amp;project=art" class="xmb">MonitorWait</a>;
<a class="l" name="975" href="#975">975</a>                              <span class="c">/*   74 : Monitor Waited */</span>
<a class="l" name="976" href="#976">976</a>    <a class="d" href="#jvmtiEventMonitorWaited">jvmtiEventMonitorWaited</a> <a class="xmb" name="MonitorWaited"/><a href="/9.0.0_r3/s?refs=MonitorWaited&amp;project=art" class="xmb">MonitorWaited</a>;
<a class="l" name="977" href="#977">977</a>                              <span class="c">/*   75 : Monitor Contended Enter */</span>
<a class="l" name="978" href="#978">978</a>    <a class="d" href="#jvmtiEventMonitorContendedEnter">jvmtiEventMonitorContendedEnter</a> <a class="xmb" name="MonitorContendedEnter"/><a href="/9.0.0_r3/s?refs=MonitorContendedEnter&amp;project=art" class="xmb">MonitorContendedEnter</a>;
<a class="l" name="979" href="#979">979</a>                              <span class="c">/*   76 : Monitor Contended Entered */</span>
<a class="hl" name="980" href="#980">980</a>    <a class="d" href="#jvmtiEventMonitorContendedEntered">jvmtiEventMonitorContendedEntered</a> <a class="xmb" name="MonitorContendedEntered"/><a href="/9.0.0_r3/s?refs=MonitorContendedEntered&amp;project=art" class="xmb">MonitorContendedEntered</a>;
<a class="l" name="981" href="#981">981</a>                              <span class="c">/*   77 */</span>
<a class="l" name="982" href="#982">982</a>    <a class="d" href="#jvmtiEventReserved">jvmtiEventReserved</a> <a class="xmb" name="reserved77"/><a href="/9.0.0_r3/s?refs=reserved77&amp;project=art" class="xmb">reserved77</a>;
<a class="l" name="983" href="#983">983</a>                              <span class="c">/*   78 */</span>
<a class="l" name="984" href="#984">984</a>    <a class="d" href="#jvmtiEventReserved">jvmtiEventReserved</a> <a class="xmb" name="reserved78"/><a href="/9.0.0_r3/s?refs=reserved78&amp;project=art" class="xmb">reserved78</a>;
<a class="l" name="985" href="#985">985</a>                              <span class="c">/*   79 */</span>
<a class="l" name="986" href="#986">986</a>    <a class="d" href="#jvmtiEventReserved">jvmtiEventReserved</a> <a class="xmb" name="reserved79"/><a href="/9.0.0_r3/s?refs=reserved79&amp;project=art" class="xmb">reserved79</a>;
<a class="l" name="987" href="#987">987</a>                              <span class="c">/*   80 : Resource Exhausted */</span>
<a class="l" name="988" href="#988">988</a>    <a class="d" href="#jvmtiEventResourceExhausted">jvmtiEventResourceExhausted</a> <a class="xmb" name="ResourceExhausted"/><a href="/9.0.0_r3/s?refs=ResourceExhausted&amp;project=art" class="xmb">ResourceExhausted</a>;
<a class="l" name="989" href="#989">989</a>                              <span class="c">/*   81 : Garbage Collection Start */</span>
<a class="hl" name="990" href="#990">990</a>    <a class="d" href="#jvmtiEventGarbageCollectionStart">jvmtiEventGarbageCollectionStart</a> <a class="xmb" name="GarbageCollectionStart"/><a href="/9.0.0_r3/s?refs=GarbageCollectionStart&amp;project=art" class="xmb">GarbageCollectionStart</a>;
<a class="l" name="991" href="#991">991</a>                              <span class="c">/*   82 : Garbage Collection Finish */</span>
<a class="l" name="992" href="#992">992</a>    <a class="d" href="#jvmtiEventGarbageCollectionFinish">jvmtiEventGarbageCollectionFinish</a> <a class="xmb" name="GarbageCollectionFinish"/><a href="/9.0.0_r3/s?refs=GarbageCollectionFinish&amp;project=art" class="xmb">GarbageCollectionFinish</a>;
<a class="l" name="993" href="#993">993</a>                              <span class="c">/*   83 : Object Free */</span>
<a class="l" name="994" href="#994">994</a>    <a class="d" href="#jvmtiEventObjectFree">jvmtiEventObjectFree</a> <a class="xmb" name="ObjectFree"/><a href="/9.0.0_r3/s?refs=ObjectFree&amp;project=art" class="xmb">ObjectFree</a>;
<a class="l" name="995" href="#995">995</a>                              <span class="c">/*   84 : VM Object Allocation */</span>
<a class="l" name="996" href="#996">996</a>    <a class="d" href="#jvmtiEventVMObjectAlloc">jvmtiEventVMObjectAlloc</a> <a class="xmb" name="VMObjectAlloc"/><a href="/9.0.0_r3/s?refs=VMObjectAlloc&amp;project=art" class="xmb">VMObjectAlloc</a>;
<a class="l" name="997" href="#997">997</a>} <a class="xt" name="jvmtiEventCallbacks"/><a href="/9.0.0_r3/s?refs=jvmtiEventCallbacks&amp;project=art" class="xt">jvmtiEventCallbacks</a>;
<a class="l" name="998" href="#998">998</a>
<a class="l" name="999" href="#999">999</a>
<a class="hl" name="1000" href="#1000">1000</a>    <span class="c">/* Function Interface */</span>
<a class="l" name="1001" href="#1001">1001</a>
<a class="l" name="1002" href="#1002">1002</a><b>typedef</b> <b>struct</b> <a class="xs" name="jvmtiInterface_1_"/><a href="/9.0.0_r3/s?refs=jvmtiInterface_1_&amp;project=art" class="xs">jvmtiInterface_1_</a> {
<a class="l" name="1003" href="#1003">1003</a>
<a class="l" name="1004" href="#1004">1004</a>  <span class="c">/*   1 :  RESERVED */</span>
<a class="l" name="1005" href="#1005">1005</a>  <b>void</b> *<a class="xmb" name="reserved1"/><a href="/9.0.0_r3/s?refs=reserved1&amp;project=art" class="xmb">reserved1</a>;
<a class="l" name="1006" href="#1006">1006</a>
<a class="l" name="1007" href="#1007">1007</a>  <span class="c">/*   2 : Set Event Notification Mode */</span>
<a class="l" name="1008" href="#1008">1008</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="SetEventNotificationMode"/><a href="/9.0.0_r3/s?refs=SetEventNotificationMode&amp;project=art" class="xmb">SetEventNotificationMode</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1009" href="#1009">1009</a>    <a class="d" href="#jvmtiEventMode">jvmtiEventMode</a> <a class="d" href="#mode">mode</a>,
<a class="hl" name="1010" href="#1010">1010</a>    <a class="d" href="#jvmtiEvent">jvmtiEvent</a> <a href="/9.0.0_r3/s?defs=event_type&amp;project=art">event_type</a>,
<a class="l" name="1011" href="#1011">1011</a>    <a class="d" href="#jthread">jthread</a> <a class="d" href="#event_thread">event_thread</a>,
<a class="l" name="1012" href="#1012">1012</a>     ...);
<a class="l" name="1013" href="#1013">1013</a>
<a class="l" name="1014" href="#1014">1014</a>  <span class="c">/*   3 :  RESERVED */</span>
<a class="l" name="1015" href="#1015">1015</a>  <b>void</b> *<a class="xmb" name="reserved3"/><a href="/9.0.0_r3/s?refs=reserved3&amp;project=art" class="xmb">reserved3</a>;
<a class="l" name="1016" href="#1016">1016</a>
<a class="l" name="1017" href="#1017">1017</a>  <span class="c">/*   4 : Get All Threads */</span>
<a class="l" name="1018" href="#1018">1018</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetAllThreads"/><a href="/9.0.0_r3/s?refs=GetAllThreads&amp;project=art" class="xmb">GetAllThreads</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1019" href="#1019">1019</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#threads_count_ptr">threads_count_ptr</a>,
<a class="hl" name="1020" href="#1020">1020</a>    <a class="d" href="#jthread">jthread</a>** <a href="/9.0.0_r3/s?defs=threads_ptr&amp;project=art">threads_ptr</a>);
<a class="l" name="1021" href="#1021">1021</a>
<a class="l" name="1022" href="#1022">1022</a>  <span class="c">/*   5 : Suspend Thread */</span>
<a class="l" name="1023" href="#1023">1023</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="SuspendThread"/><a href="/9.0.0_r3/s?refs=SuspendThread&amp;project=art" class="xmb">SuspendThread</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1024" href="#1024">1024</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>);
<a class="l" name="1025" href="#1025">1025</a>
<a class="l" name="1026" href="#1026">1026</a>  <span class="c">/*   6 : Resume Thread */</span>
<a class="l" name="1027" href="#1027">1027</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="ResumeThread"/><a href="/9.0.0_r3/s?refs=ResumeThread&amp;project=art" class="xmb">ResumeThread</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1028" href="#1028">1028</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>);
<a class="l" name="1029" href="#1029">1029</a>
<a class="hl" name="1030" href="#1030">1030</a>  <span class="c">/*   7 : Stop Thread */</span>
<a class="l" name="1031" href="#1031">1031</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="StopThread"/><a href="/9.0.0_r3/s?refs=StopThread&amp;project=art" class="xmb">StopThread</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1032" href="#1032">1032</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1033" href="#1033">1033</a>    <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a class="d" href="#exception">exception</a>);
<a class="l" name="1034" href="#1034">1034</a>
<a class="l" name="1035" href="#1035">1035</a>  <span class="c">/*   8 : Interrupt Thread */</span>
<a class="l" name="1036" href="#1036">1036</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="InterruptThread"/><a href="/9.0.0_r3/s?refs=InterruptThread&amp;project=art" class="xmb">InterruptThread</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1037" href="#1037">1037</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>);
<a class="l" name="1038" href="#1038">1038</a>
<a class="l" name="1039" href="#1039">1039</a>  <span class="c">/*   9 : Get Thread Info */</span>
<a class="hl" name="1040" href="#1040">1040</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetThreadInfo"/><a href="/9.0.0_r3/s?refs=GetThreadInfo&amp;project=art" class="xmb">GetThreadInfo</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1041" href="#1041">1041</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1042" href="#1042">1042</a>    <a class="d" href="#jvmtiThreadInfo">jvmtiThreadInfo</a>* <a href="/9.0.0_r3/s?defs=info_ptr&amp;project=art">info_ptr</a>);
<a class="l" name="1043" href="#1043">1043</a>
<a class="l" name="1044" href="#1044">1044</a>  <span class="c">/*   10 : Get Owned Monitor Info */</span>
<a class="l" name="1045" href="#1045">1045</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetOwnedMonitorInfo"/><a href="/9.0.0_r3/s?refs=GetOwnedMonitorInfo&amp;project=art" class="xmb">GetOwnedMonitorInfo</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1046" href="#1046">1046</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1047" href="#1047">1047</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#owned_monitor_count_ptr">owned_monitor_count_ptr</a>,
<a class="l" name="1048" href="#1048">1048</a>    <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a>** <a class="d" href="#owned_monitors_ptr">owned_monitors_ptr</a>);
<a class="l" name="1049" href="#1049">1049</a>
<a class="hl" name="1050" href="#1050">1050</a>  <span class="c">/*   11 : Get Current Contended Monitor */</span>
<a class="l" name="1051" href="#1051">1051</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetCurrentContendedMonitor"/><a href="/9.0.0_r3/s?refs=GetCurrentContendedMonitor&amp;project=art" class="xmb">GetCurrentContendedMonitor</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1052" href="#1052">1052</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1053" href="#1053">1053</a>    <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a>* <a href="/9.0.0_r3/s?defs=monitor_ptr&amp;project=art">monitor_ptr</a>);
<a class="l" name="1054" href="#1054">1054</a>
<a class="l" name="1055" href="#1055">1055</a>  <span class="c">/*   12 : Run Agent Thread */</span>
<a class="l" name="1056" href="#1056">1056</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="RunAgentThread"/><a href="/9.0.0_r3/s?refs=RunAgentThread&amp;project=art" class="xmb">RunAgentThread</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1057" href="#1057">1057</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1058" href="#1058">1058</a>    <a class="d" href="#jvmtiStartFunction">jvmtiStartFunction</a> <a class="d" href="#proc">proc</a>,
<a class="l" name="1059" href="#1059">1059</a>    <b>const</b> <b>void</b>* <a class="d" href="#arg">arg</a>,
<a class="hl" name="1060" href="#1060">1060</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=priority&amp;project=art">priority</a>);
<a class="l" name="1061" href="#1061">1061</a>
<a class="l" name="1062" href="#1062">1062</a>  <span class="c">/*   13 : Get Top Thread Groups */</span>
<a class="l" name="1063" href="#1063">1063</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetTopThreadGroups"/><a href="/9.0.0_r3/s?refs=GetTopThreadGroups&amp;project=art" class="xmb">GetTopThreadGroups</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1064" href="#1064">1064</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=group_count_ptr&amp;project=art">group_count_ptr</a>,
<a class="l" name="1065" href="#1065">1065</a>    <a class="d" href="#jthreadGroup">jthreadGroup</a>** <a href="/9.0.0_r3/s?defs=groups_ptr&amp;project=art">groups_ptr</a>);
<a class="l" name="1066" href="#1066">1066</a>
<a class="l" name="1067" href="#1067">1067</a>  <span class="c">/*   14 : Get Thread Group Info */</span>
<a class="l" name="1068" href="#1068">1068</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetThreadGroupInfo"/><a href="/9.0.0_r3/s?refs=GetThreadGroupInfo&amp;project=art" class="xmb">GetThreadGroupInfo</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1069" href="#1069">1069</a>    <a class="d" href="#jthreadGroup">jthreadGroup</a> <a href="/9.0.0_r3/s?defs=group&amp;project=art">group</a>,
<a class="hl" name="1070" href="#1070">1070</a>    <a class="d" href="#jvmtiThreadGroupInfo">jvmtiThreadGroupInfo</a>* <a href="/9.0.0_r3/s?defs=info_ptr&amp;project=art">info_ptr</a>);
<a class="l" name="1071" href="#1071">1071</a>
<a class="l" name="1072" href="#1072">1072</a>  <span class="c">/*   15 : Get Thread Group Children */</span>
<a class="l" name="1073" href="#1073">1073</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetThreadGroupChildren"/><a href="/9.0.0_r3/s?refs=GetThreadGroupChildren&amp;project=art" class="xmb">GetThreadGroupChildren</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1074" href="#1074">1074</a>    <a class="d" href="#jthreadGroup">jthreadGroup</a> <a href="/9.0.0_r3/s?defs=group&amp;project=art">group</a>,
<a class="l" name="1075" href="#1075">1075</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=thread_count_ptr&amp;project=art">thread_count_ptr</a>,
<a class="l" name="1076" href="#1076">1076</a>    <a class="d" href="#jthread">jthread</a>** <a href="/9.0.0_r3/s?defs=threads_ptr&amp;project=art">threads_ptr</a>,
<a class="l" name="1077" href="#1077">1077</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=group_count_ptr&amp;project=art">group_count_ptr</a>,
<a class="l" name="1078" href="#1078">1078</a>    <a class="d" href="#jthreadGroup">jthreadGroup</a>** <a href="/9.0.0_r3/s?defs=groups_ptr&amp;project=art">groups_ptr</a>);
<a class="l" name="1079" href="#1079">1079</a>
<a class="hl" name="1080" href="#1080">1080</a>  <span class="c">/*   16 : Get Frame Count */</span>
<a class="l" name="1081" href="#1081">1081</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetFrameCount"/><a href="/9.0.0_r3/s?refs=GetFrameCount&amp;project=art" class="xmb">GetFrameCount</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1082" href="#1082">1082</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1083" href="#1083">1083</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=count_ptr&amp;project=art">count_ptr</a>);
<a class="l" name="1084" href="#1084">1084</a>
<a class="l" name="1085" href="#1085">1085</a>  <span class="c">/*   17 : Get Thread State */</span>
<a class="l" name="1086" href="#1086">1086</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetThreadState"/><a href="/9.0.0_r3/s?refs=GetThreadState&amp;project=art" class="xmb">GetThreadState</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1087" href="#1087">1087</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1088" href="#1088">1088</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#thread_state_ptr">thread_state_ptr</a>);
<a class="l" name="1089" href="#1089">1089</a>
<a class="hl" name="1090" href="#1090">1090</a>  <span class="c">/*   18 : Get Current Thread */</span>
<a class="l" name="1091" href="#1091">1091</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetCurrentThread"/><a href="/9.0.0_r3/s?refs=GetCurrentThread&amp;project=art" class="xmb">GetCurrentThread</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1092" href="#1092">1092</a>    <a class="d" href="#jthread">jthread</a>* <a class="d" href="#thread_ptr">thread_ptr</a>);
<a class="l" name="1093" href="#1093">1093</a>
<a class="l" name="1094" href="#1094">1094</a>  <span class="c">/*   19 : Get Frame Location */</span>
<a class="l" name="1095" href="#1095">1095</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetFrameLocation"/><a href="/9.0.0_r3/s?refs=GetFrameLocation&amp;project=art" class="xmb">GetFrameLocation</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1096" href="#1096">1096</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1097" href="#1097">1097</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>,
<a class="l" name="1098" href="#1098">1098</a>    <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a>* <a class="d" href="#method_ptr">method_ptr</a>,
<a class="l" name="1099" href="#1099">1099</a>    <a class="d" href="#jlocation">jlocation</a>* <a class="d" href="#location_ptr">location_ptr</a>);
<a class="hl" name="1100" href="#1100">1100</a>
<a class="l" name="1101" href="#1101">1101</a>  <span class="c">/*   20 : Notify Frame Pop */</span>
<a class="l" name="1102" href="#1102">1102</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="NotifyFramePop"/><a href="/9.0.0_r3/s?refs=NotifyFramePop&amp;project=art" class="xmb">NotifyFramePop</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1103" href="#1103">1103</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1104" href="#1104">1104</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>);
<a class="l" name="1105" href="#1105">1105</a>
<a class="l" name="1106" href="#1106">1106</a>  <span class="c">/*   21 : Get Local Variable - Object */</span>
<a class="l" name="1107" href="#1107">1107</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetLocalObject"/><a href="/9.0.0_r3/s?refs=GetLocalObject&amp;project=art" class="xmb">GetLocalObject</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1108" href="#1108">1108</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1109" href="#1109">1109</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>,
<a class="hl" name="1110" href="#1110">1110</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>,
<a class="l" name="1111" href="#1111">1111</a>    <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a>* <a href="/9.0.0_r3/s?defs=value_ptr&amp;project=art">value_ptr</a>);
<a class="l" name="1112" href="#1112">1112</a>
<a class="l" name="1113" href="#1113">1113</a>  <span class="c">/*   22 : Get Local Variable - Int */</span>
<a class="l" name="1114" href="#1114">1114</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetLocalInt"/><a href="/9.0.0_r3/s?refs=GetLocalInt&amp;project=art" class="xmb">GetLocalInt</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1115" href="#1115">1115</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1116" href="#1116">1116</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>,
<a class="l" name="1117" href="#1117">1117</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>,
<a class="l" name="1118" href="#1118">1118</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=value_ptr&amp;project=art">value_ptr</a>);
<a class="l" name="1119" href="#1119">1119</a>
<a class="hl" name="1120" href="#1120">1120</a>  <span class="c">/*   23 : Get Local Variable - Long */</span>
<a class="l" name="1121" href="#1121">1121</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetLocalLong"/><a href="/9.0.0_r3/s?refs=GetLocalLong&amp;project=art" class="xmb">GetLocalLong</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1122" href="#1122">1122</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1123" href="#1123">1123</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>,
<a class="l" name="1124" href="#1124">1124</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>,
<a class="l" name="1125" href="#1125">1125</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>* <a href="/9.0.0_r3/s?defs=value_ptr&amp;project=art">value_ptr</a>);
<a class="l" name="1126" href="#1126">1126</a>
<a class="l" name="1127" href="#1127">1127</a>  <span class="c">/*   24 : Get Local Variable - Float */</span>
<a class="l" name="1128" href="#1128">1128</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetLocalFloat"/><a href="/9.0.0_r3/s?refs=GetLocalFloat&amp;project=art" class="xmb">GetLocalFloat</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1129" href="#1129">1129</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="hl" name="1130" href="#1130">1130</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>,
<a class="l" name="1131" href="#1131">1131</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>,
<a class="l" name="1132" href="#1132">1132</a>    <a href="/9.0.0_r3/s?defs=jfloat&amp;project=art">jfloat</a>* <a href="/9.0.0_r3/s?defs=value_ptr&amp;project=art">value_ptr</a>);
<a class="l" name="1133" href="#1133">1133</a>
<a class="l" name="1134" href="#1134">1134</a>  <span class="c">/*   25 : Get Local Variable - Double */</span>
<a class="l" name="1135" href="#1135">1135</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetLocalDouble"/><a href="/9.0.0_r3/s?refs=GetLocalDouble&amp;project=art" class="xmb">GetLocalDouble</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1136" href="#1136">1136</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1137" href="#1137">1137</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>,
<a class="l" name="1138" href="#1138">1138</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>,
<a class="l" name="1139" href="#1139">1139</a>    <a href="/9.0.0_r3/s?defs=jdouble&amp;project=art">jdouble</a>* <a href="/9.0.0_r3/s?defs=value_ptr&amp;project=art">value_ptr</a>);
<a class="hl" name="1140" href="#1140">1140</a>
<a class="l" name="1141" href="#1141">1141</a>  <span class="c">/*   26 : Set Local Variable - Object */</span>
<a class="l" name="1142" href="#1142">1142</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="SetLocalObject"/><a href="/9.0.0_r3/s?refs=SetLocalObject&amp;project=art" class="xmb">SetLocalObject</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1143" href="#1143">1143</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1144" href="#1144">1144</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>,
<a class="l" name="1145" href="#1145">1145</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>,
<a class="l" name="1146" href="#1146">1146</a>    <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>);
<a class="l" name="1147" href="#1147">1147</a>
<a class="l" name="1148" href="#1148">1148</a>  <span class="c">/*   27 : Set Local Variable - Int */</span>
<a class="l" name="1149" href="#1149">1149</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="SetLocalInt"/><a href="/9.0.0_r3/s?refs=SetLocalInt&amp;project=art" class="xmb">SetLocalInt</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="hl" name="1150" href="#1150">1150</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1151" href="#1151">1151</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>,
<a class="l" name="1152" href="#1152">1152</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>,
<a class="l" name="1153" href="#1153">1153</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>);
<a class="l" name="1154" href="#1154">1154</a>
<a class="l" name="1155" href="#1155">1155</a>  <span class="c">/*   28 : Set Local Variable - Long */</span>
<a class="l" name="1156" href="#1156">1156</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="SetLocalLong"/><a href="/9.0.0_r3/s?refs=SetLocalLong&amp;project=art" class="xmb">SetLocalLong</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1157" href="#1157">1157</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1158" href="#1158">1158</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>,
<a class="l" name="1159" href="#1159">1159</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>,
<a class="hl" name="1160" href="#1160">1160</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>);
<a class="l" name="1161" href="#1161">1161</a>
<a class="l" name="1162" href="#1162">1162</a>  <span class="c">/*   29 : Set Local Variable - Float */</span>
<a class="l" name="1163" href="#1163">1163</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="SetLocalFloat"/><a href="/9.0.0_r3/s?refs=SetLocalFloat&amp;project=art" class="xmb">SetLocalFloat</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1164" href="#1164">1164</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1165" href="#1165">1165</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>,
<a class="l" name="1166" href="#1166">1166</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>,
<a class="l" name="1167" href="#1167">1167</a>    <a href="/9.0.0_r3/s?defs=jfloat&amp;project=art">jfloat</a> <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>);
<a class="l" name="1168" href="#1168">1168</a>
<a class="l" name="1169" href="#1169">1169</a>  <span class="c">/*   30 : Set Local Variable - Double */</span>
<a class="hl" name="1170" href="#1170">1170</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="SetLocalDouble"/><a href="/9.0.0_r3/s?refs=SetLocalDouble&amp;project=art" class="xmb">SetLocalDouble</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1171" href="#1171">1171</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1172" href="#1172">1172</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>,
<a class="l" name="1173" href="#1173">1173</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>,
<a class="l" name="1174" href="#1174">1174</a>    <a href="/9.0.0_r3/s?defs=jdouble&amp;project=art">jdouble</a> <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>);
<a class="l" name="1175" href="#1175">1175</a>
<a class="l" name="1176" href="#1176">1176</a>  <span class="c">/*   31 : Create Raw Monitor */</span>
<a class="l" name="1177" href="#1177">1177</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="CreateRawMonitor"/><a href="/9.0.0_r3/s?refs=CreateRawMonitor&amp;project=art" class="xmb">CreateRawMonitor</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1178" href="#1178">1178</a>    <b>const</b> <b>char</b>* <a href="/9.0.0_r3/s?defs=name&amp;project=art">name</a>,
<a class="l" name="1179" href="#1179">1179</a>    <a class="d" href="#jrawMonitorID">jrawMonitorID</a>* <a href="/9.0.0_r3/s?defs=monitor_ptr&amp;project=art">monitor_ptr</a>);
<a class="hl" name="1180" href="#1180">1180</a>
<a class="l" name="1181" href="#1181">1181</a>  <span class="c">/*   32 : Destroy Raw Monitor */</span>
<a class="l" name="1182" href="#1182">1182</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="DestroyRawMonitor"/><a href="/9.0.0_r3/s?refs=DestroyRawMonitor&amp;project=art" class="xmb">DestroyRawMonitor</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1183" href="#1183">1183</a>    <a class="d" href="#jrawMonitorID">jrawMonitorID</a> <a href="/9.0.0_r3/s?defs=monitor&amp;project=art">monitor</a>);
<a class="l" name="1184" href="#1184">1184</a>
<a class="l" name="1185" href="#1185">1185</a>  <span class="c">/*   33 : Raw Monitor Enter */</span>
<a class="l" name="1186" href="#1186">1186</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="RawMonitorEnter"/><a href="/9.0.0_r3/s?refs=RawMonitorEnter&amp;project=art" class="xmb">RawMonitorEnter</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1187" href="#1187">1187</a>    <a class="d" href="#jrawMonitorID">jrawMonitorID</a> <a href="/9.0.0_r3/s?defs=monitor&amp;project=art">monitor</a>);
<a class="l" name="1188" href="#1188">1188</a>
<a class="l" name="1189" href="#1189">1189</a>  <span class="c">/*   34 : Raw Monitor Exit */</span>
<a class="hl" name="1190" href="#1190">1190</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="RawMonitorExit"/><a href="/9.0.0_r3/s?refs=RawMonitorExit&amp;project=art" class="xmb">RawMonitorExit</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1191" href="#1191">1191</a>    <a class="d" href="#jrawMonitorID">jrawMonitorID</a> <a href="/9.0.0_r3/s?defs=monitor&amp;project=art">monitor</a>);
<a class="l" name="1192" href="#1192">1192</a>
<a class="l" name="1193" href="#1193">1193</a>  <span class="c">/*   35 : Raw Monitor Wait */</span>
<a class="l" name="1194" href="#1194">1194</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="RawMonitorWait"/><a href="/9.0.0_r3/s?refs=RawMonitorWait&amp;project=art" class="xmb">RawMonitorWait</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1195" href="#1195">1195</a>    <a class="d" href="#jrawMonitorID">jrawMonitorID</a> <a href="/9.0.0_r3/s?defs=monitor&amp;project=art">monitor</a>,
<a class="l" name="1196" href="#1196">1196</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="d" href="#millis">millis</a>);
<a class="l" name="1197" href="#1197">1197</a>
<a class="l" name="1198" href="#1198">1198</a>  <span class="c">/*   36 : Raw Monitor Notify */</span>
<a class="l" name="1199" href="#1199">1199</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="RawMonitorNotify"/><a href="/9.0.0_r3/s?refs=RawMonitorNotify&amp;project=art" class="xmb">RawMonitorNotify</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="hl" name="1200" href="#1200">1200</a>    <a class="d" href="#jrawMonitorID">jrawMonitorID</a> <a href="/9.0.0_r3/s?defs=monitor&amp;project=art">monitor</a>);
<a class="l" name="1201" href="#1201">1201</a>
<a class="l" name="1202" href="#1202">1202</a>  <span class="c">/*   37 : Raw Monitor Notify All */</span>
<a class="l" name="1203" href="#1203">1203</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="RawMonitorNotifyAll"/><a href="/9.0.0_r3/s?refs=RawMonitorNotifyAll&amp;project=art" class="xmb">RawMonitorNotifyAll</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1204" href="#1204">1204</a>    <a class="d" href="#jrawMonitorID">jrawMonitorID</a> <a href="/9.0.0_r3/s?defs=monitor&amp;project=art">monitor</a>);
<a class="l" name="1205" href="#1205">1205</a>
<a class="l" name="1206" href="#1206">1206</a>  <span class="c">/*   38 : Set Breakpoint */</span>
<a class="l" name="1207" href="#1207">1207</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="SetBreakpoint"/><a href="/9.0.0_r3/s?refs=SetBreakpoint&amp;project=art" class="xmb">SetBreakpoint</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1208" href="#1208">1208</a>    <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="1209" href="#1209">1209</a>    <a class="d" href="#jlocation">jlocation</a> <a href="/9.0.0_r3/s?defs=location&amp;project=art">location</a>);
<a class="hl" name="1210" href="#1210">1210</a>
<a class="l" name="1211" href="#1211">1211</a>  <span class="c">/*   39 : Clear Breakpoint */</span>
<a class="l" name="1212" href="#1212">1212</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="ClearBreakpoint"/><a href="/9.0.0_r3/s?refs=ClearBreakpoint&amp;project=art" class="xmb">ClearBreakpoint</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1213" href="#1213">1213</a>    <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="1214" href="#1214">1214</a>    <a class="d" href="#jlocation">jlocation</a> <a href="/9.0.0_r3/s?defs=location&amp;project=art">location</a>);
<a class="l" name="1215" href="#1215">1215</a>
<a class="l" name="1216" href="#1216">1216</a>  <span class="c">/*   40 :  RESERVED */</span>
<a class="l" name="1217" href="#1217">1217</a>  <b>void</b> *<a class="xmb" name="reserved40"/><a href="/9.0.0_r3/s?refs=reserved40&amp;project=art" class="xmb">reserved40</a>;
<a class="l" name="1218" href="#1218">1218</a>
<a class="l" name="1219" href="#1219">1219</a>  <span class="c">/*   41 : Set Field Access Watch */</span>
<a class="hl" name="1220" href="#1220">1220</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="SetFieldAccessWatch"/><a href="/9.0.0_r3/s?refs=SetFieldAccessWatch&amp;project=art" class="xmb">SetFieldAccessWatch</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1221" href="#1221">1221</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="l" name="1222" href="#1222">1222</a>    <a href="/9.0.0_r3/s?defs=jfieldID&amp;project=art">jfieldID</a> <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>);
<a class="l" name="1223" href="#1223">1223</a>
<a class="l" name="1224" href="#1224">1224</a>  <span class="c">/*   42 : Clear Field Access Watch */</span>
<a class="l" name="1225" href="#1225">1225</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="ClearFieldAccessWatch"/><a href="/9.0.0_r3/s?refs=ClearFieldAccessWatch&amp;project=art" class="xmb">ClearFieldAccessWatch</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1226" href="#1226">1226</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="l" name="1227" href="#1227">1227</a>    <a href="/9.0.0_r3/s?defs=jfieldID&amp;project=art">jfieldID</a> <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>);
<a class="l" name="1228" href="#1228">1228</a>
<a class="l" name="1229" href="#1229">1229</a>  <span class="c">/*   43 : Set Field Modification Watch */</span>
<a class="hl" name="1230" href="#1230">1230</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="SetFieldModificationWatch"/><a href="/9.0.0_r3/s?refs=SetFieldModificationWatch&amp;project=art" class="xmb">SetFieldModificationWatch</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1231" href="#1231">1231</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="l" name="1232" href="#1232">1232</a>    <a href="/9.0.0_r3/s?defs=jfieldID&amp;project=art">jfieldID</a> <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>);
<a class="l" name="1233" href="#1233">1233</a>
<a class="l" name="1234" href="#1234">1234</a>  <span class="c">/*   44 : Clear Field Modification Watch */</span>
<a class="l" name="1235" href="#1235">1235</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="ClearFieldModificationWatch"/><a href="/9.0.0_r3/s?refs=ClearFieldModificationWatch&amp;project=art" class="xmb">ClearFieldModificationWatch</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1236" href="#1236">1236</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="l" name="1237" href="#1237">1237</a>    <a href="/9.0.0_r3/s?defs=jfieldID&amp;project=art">jfieldID</a> <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>);
<a class="l" name="1238" href="#1238">1238</a>
<a class="l" name="1239" href="#1239">1239</a>  <span class="c">/*   45 : Is Modifiable Class */</span>
<a class="hl" name="1240" href="#1240">1240</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="IsModifiableClass"/><a href="/9.0.0_r3/s?refs=IsModifiableClass&amp;project=art" class="xmb">IsModifiableClass</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1241" href="#1241">1241</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="l" name="1242" href="#1242">1242</a>    <a href="/9.0.0_r3/s?defs=jboolean&amp;project=art">jboolean</a>* <a class="d" href="#is_modifiable_class_ptr">is_modifiable_class_ptr</a>);
<a class="l" name="1243" href="#1243">1243</a>
<a class="l" name="1244" href="#1244">1244</a>  <span class="c">/*   46 : Allocate */</span>
<a class="l" name="1245" href="#1245">1245</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="Allocate"/><a href="/9.0.0_r3/s?refs=Allocate&amp;project=art" class="xmb">Allocate</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1246" href="#1246">1246</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="d" href="#size">size</a>,
<a class="l" name="1247" href="#1247">1247</a>    <b>unsigned</b> <b>char</b>** <a class="d" href="#mem_ptr">mem_ptr</a>);
<a class="l" name="1248" href="#1248">1248</a>
<a class="l" name="1249" href="#1249">1249</a>  <span class="c">/*   47 : Deallocate */</span>
<a class="hl" name="1250" href="#1250">1250</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="Deallocate"/><a href="/9.0.0_r3/s?refs=Deallocate&amp;project=art" class="xmb">Deallocate</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1251" href="#1251">1251</a>    <b>unsigned</b> <b>char</b>* <a class="d" href="#mem">mem</a>);
<a class="l" name="1252" href="#1252">1252</a>
<a class="l" name="1253" href="#1253">1253</a>  <span class="c">/*   48 : Get Class Signature */</span>
<a class="l" name="1254" href="#1254">1254</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetClassSignature"/><a href="/9.0.0_r3/s?refs=GetClassSignature&amp;project=art" class="xmb">GetClassSignature</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1255" href="#1255">1255</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="l" name="1256" href="#1256">1256</a>    <b>char</b>** <a href="/9.0.0_r3/s?defs=signature_ptr&amp;project=art">signature_ptr</a>,
<a class="l" name="1257" href="#1257">1257</a>    <b>char</b>** <a href="/9.0.0_r3/s?defs=generic_ptr&amp;project=art">generic_ptr</a>);
<a class="l" name="1258" href="#1258">1258</a>
<a class="l" name="1259" href="#1259">1259</a>  <span class="c">/*   49 : Get Class Status */</span>
<a class="hl" name="1260" href="#1260">1260</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetClassStatus"/><a href="/9.0.0_r3/s?refs=GetClassStatus&amp;project=art" class="xmb">GetClassStatus</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1261" href="#1261">1261</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="l" name="1262" href="#1262">1262</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#status_ptr">status_ptr</a>);
<a class="l" name="1263" href="#1263">1263</a>
<a class="l" name="1264" href="#1264">1264</a>  <span class="c">/*   50 : Get Source File Name */</span>
<a class="l" name="1265" href="#1265">1265</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetSourceFileName"/><a href="/9.0.0_r3/s?refs=GetSourceFileName&amp;project=art" class="xmb">GetSourceFileName</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1266" href="#1266">1266</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="l" name="1267" href="#1267">1267</a>    <b>char</b>** <a class="d" href="#source_name_ptr">source_name_ptr</a>);
<a class="l" name="1268" href="#1268">1268</a>
<a class="l" name="1269" href="#1269">1269</a>  <span class="c">/*   51 : Get Class Modifiers */</span>
<a class="hl" name="1270" href="#1270">1270</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetClassModifiers"/><a href="/9.0.0_r3/s?refs=GetClassModifiers&amp;project=art" class="xmb">GetClassModifiers</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1271" href="#1271">1271</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="l" name="1272" href="#1272">1272</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=modifiers_ptr&amp;project=art">modifiers_ptr</a>);
<a class="l" name="1273" href="#1273">1273</a>
<a class="l" name="1274" href="#1274">1274</a>  <span class="c">/*   52 : Get Class Methods */</span>
<a class="l" name="1275" href="#1275">1275</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetClassMethods"/><a href="/9.0.0_r3/s?refs=GetClassMethods&amp;project=art" class="xmb">GetClassMethods</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1276" href="#1276">1276</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="l" name="1277" href="#1277">1277</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#method_count_ptr">method_count_ptr</a>,
<a class="l" name="1278" href="#1278">1278</a>    <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a>** <a class="d" href="#methods_ptr">methods_ptr</a>);
<a class="l" name="1279" href="#1279">1279</a>
<a class="hl" name="1280" href="#1280">1280</a>  <span class="c">/*   53 : Get Class Fields */</span>
<a class="l" name="1281" href="#1281">1281</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetClassFields"/><a href="/9.0.0_r3/s?refs=GetClassFields&amp;project=art" class="xmb">GetClassFields</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1282" href="#1282">1282</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="l" name="1283" href="#1283">1283</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#field_count_ptr">field_count_ptr</a>,
<a class="l" name="1284" href="#1284">1284</a>    <a href="/9.0.0_r3/s?defs=jfieldID&amp;project=art">jfieldID</a>** <a class="d" href="#fields_ptr">fields_ptr</a>);
<a class="l" name="1285" href="#1285">1285</a>
<a class="l" name="1286" href="#1286">1286</a>  <span class="c">/*   54 : Get Implemented Interfaces */</span>
<a class="l" name="1287" href="#1287">1287</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetImplementedInterfaces"/><a href="/9.0.0_r3/s?refs=GetImplementedInterfaces&amp;project=art" class="xmb">GetImplementedInterfaces</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1288" href="#1288">1288</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="l" name="1289" href="#1289">1289</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#interface_count_ptr">interface_count_ptr</a>,
<a class="hl" name="1290" href="#1290">1290</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a>** <a class="d" href="#interfaces_ptr">interfaces_ptr</a>);
<a class="l" name="1291" href="#1291">1291</a>
<a class="l" name="1292" href="#1292">1292</a>  <span class="c">/*   55 : Is Interface */</span>
<a class="l" name="1293" href="#1293">1293</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="IsInterface"/><a href="/9.0.0_r3/s?refs=IsInterface&amp;project=art" class="xmb">IsInterface</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1294" href="#1294">1294</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="l" name="1295" href="#1295">1295</a>    <a href="/9.0.0_r3/s?defs=jboolean&amp;project=art">jboolean</a>* <a class="d" href="#is_interface_ptr">is_interface_ptr</a>);
<a class="l" name="1296" href="#1296">1296</a>
<a class="l" name="1297" href="#1297">1297</a>  <span class="c">/*   56 : Is Array Class */</span>
<a class="l" name="1298" href="#1298">1298</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="IsArrayClass"/><a href="/9.0.0_r3/s?refs=IsArrayClass&amp;project=art" class="xmb">IsArrayClass</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1299" href="#1299">1299</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="hl" name="1300" href="#1300">1300</a>    <a href="/9.0.0_r3/s?defs=jboolean&amp;project=art">jboolean</a>* <a class="d" href="#is_array_class_ptr">is_array_class_ptr</a>);
<a class="l" name="1301" href="#1301">1301</a>
<a class="l" name="1302" href="#1302">1302</a>  <span class="c">/*   57 : Get Class Loader */</span>
<a class="l" name="1303" href="#1303">1303</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetClassLoader"/><a href="/9.0.0_r3/s?refs=GetClassLoader&amp;project=art" class="xmb">GetClassLoader</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1304" href="#1304">1304</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="l" name="1305" href="#1305">1305</a>    <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a>* <a class="d" href="#classloader_ptr">classloader_ptr</a>);
<a class="l" name="1306" href="#1306">1306</a>
<a class="l" name="1307" href="#1307">1307</a>  <span class="c">/*   58 : Get Object Hash Code */</span>
<a class="l" name="1308" href="#1308">1308</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetObjectHashCode"/><a href="/9.0.0_r3/s?refs=GetObjectHashCode&amp;project=art" class="xmb">GetObjectHashCode</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1309" href="#1309">1309</a>    <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a href="/9.0.0_r3/s?defs=object&amp;project=art">object</a>,
<a class="hl" name="1310" href="#1310">1310</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#hash_code_ptr">hash_code_ptr</a>);
<a class="l" name="1311" href="#1311">1311</a>
<a class="l" name="1312" href="#1312">1312</a>  <span class="c">/*   59 : Get Object Monitor Usage */</span>
<a class="l" name="1313" href="#1313">1313</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetObjectMonitorUsage"/><a href="/9.0.0_r3/s?refs=GetObjectMonitorUsage&amp;project=art" class="xmb">GetObjectMonitorUsage</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1314" href="#1314">1314</a>    <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a href="/9.0.0_r3/s?defs=object&amp;project=art">object</a>,
<a class="l" name="1315" href="#1315">1315</a>    <a class="d" href="#jvmtiMonitorUsage">jvmtiMonitorUsage</a>* <a href="/9.0.0_r3/s?defs=info_ptr&amp;project=art">info_ptr</a>);
<a class="l" name="1316" href="#1316">1316</a>
<a class="l" name="1317" href="#1317">1317</a>  <span class="c">/*   60 : Get Field Name (and Signature) */</span>
<a class="l" name="1318" href="#1318">1318</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetFieldName"/><a href="/9.0.0_r3/s?refs=GetFieldName&amp;project=art" class="xmb">GetFieldName</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1319" href="#1319">1319</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="hl" name="1320" href="#1320">1320</a>    <a href="/9.0.0_r3/s?defs=jfieldID&amp;project=art">jfieldID</a> <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>,
<a class="l" name="1321" href="#1321">1321</a>    <b>char</b>** <a href="/9.0.0_r3/s?defs=name_ptr&amp;project=art">name_ptr</a>,
<a class="l" name="1322" href="#1322">1322</a>    <b>char</b>** <a href="/9.0.0_r3/s?defs=signature_ptr&amp;project=art">signature_ptr</a>,
<a class="l" name="1323" href="#1323">1323</a>    <b>char</b>** <a href="/9.0.0_r3/s?defs=generic_ptr&amp;project=art">generic_ptr</a>);
<a class="l" name="1324" href="#1324">1324</a>
<a class="l" name="1325" href="#1325">1325</a>  <span class="c">/*   61 : Get Field Declaring Class */</span>
<a class="l" name="1326" href="#1326">1326</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetFieldDeclaringClass"/><a href="/9.0.0_r3/s?refs=GetFieldDeclaringClass&amp;project=art" class="xmb">GetFieldDeclaringClass</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1327" href="#1327">1327</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="l" name="1328" href="#1328">1328</a>    <a href="/9.0.0_r3/s?defs=jfieldID&amp;project=art">jfieldID</a> <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>,
<a class="l" name="1329" href="#1329">1329</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a>* <a href="/9.0.0_r3/s?defs=declaring_class_ptr&amp;project=art">declaring_class_ptr</a>);
<a class="hl" name="1330" href="#1330">1330</a>
<a class="l" name="1331" href="#1331">1331</a>  <span class="c">/*   62 : Get Field Modifiers */</span>
<a class="l" name="1332" href="#1332">1332</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetFieldModifiers"/><a href="/9.0.0_r3/s?refs=GetFieldModifiers&amp;project=art" class="xmb">GetFieldModifiers</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1333" href="#1333">1333</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="l" name="1334" href="#1334">1334</a>    <a href="/9.0.0_r3/s?defs=jfieldID&amp;project=art">jfieldID</a> <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>,
<a class="l" name="1335" href="#1335">1335</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=modifiers_ptr&amp;project=art">modifiers_ptr</a>);
<a class="l" name="1336" href="#1336">1336</a>
<a class="l" name="1337" href="#1337">1337</a>  <span class="c">/*   63 : Is Field Synthetic */</span>
<a class="l" name="1338" href="#1338">1338</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="IsFieldSynthetic"/><a href="/9.0.0_r3/s?refs=IsFieldSynthetic&amp;project=art" class="xmb">IsFieldSynthetic</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1339" href="#1339">1339</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="hl" name="1340" href="#1340">1340</a>    <a href="/9.0.0_r3/s?defs=jfieldID&amp;project=art">jfieldID</a> <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>,
<a class="l" name="1341" href="#1341">1341</a>    <a href="/9.0.0_r3/s?defs=jboolean&amp;project=art">jboolean</a>* <a href="/9.0.0_r3/s?defs=is_synthetic_ptr&amp;project=art">is_synthetic_ptr</a>);
<a class="l" name="1342" href="#1342">1342</a>
<a class="l" name="1343" href="#1343">1343</a>  <span class="c">/*   64 : Get Method Name (and Signature) */</span>
<a class="l" name="1344" href="#1344">1344</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetMethodName"/><a href="/9.0.0_r3/s?refs=GetMethodName&amp;project=art" class="xmb">GetMethodName</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1345" href="#1345">1345</a>    <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="1346" href="#1346">1346</a>    <b>char</b>** <a href="/9.0.0_r3/s?defs=name_ptr&amp;project=art">name_ptr</a>,
<a class="l" name="1347" href="#1347">1347</a>    <b>char</b>** <a href="/9.0.0_r3/s?defs=signature_ptr&amp;project=art">signature_ptr</a>,
<a class="l" name="1348" href="#1348">1348</a>    <b>char</b>** <a href="/9.0.0_r3/s?defs=generic_ptr&amp;project=art">generic_ptr</a>);
<a class="l" name="1349" href="#1349">1349</a>
<a class="hl" name="1350" href="#1350">1350</a>  <span class="c">/*   65 : Get Method Declaring Class */</span>
<a class="l" name="1351" href="#1351">1351</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetMethodDeclaringClass"/><a href="/9.0.0_r3/s?refs=GetMethodDeclaringClass&amp;project=art" class="xmb">GetMethodDeclaringClass</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1352" href="#1352">1352</a>    <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="1353" href="#1353">1353</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a>* <a href="/9.0.0_r3/s?defs=declaring_class_ptr&amp;project=art">declaring_class_ptr</a>);
<a class="l" name="1354" href="#1354">1354</a>
<a class="l" name="1355" href="#1355">1355</a>  <span class="c">/*   66 : Get Method Modifiers */</span>
<a class="l" name="1356" href="#1356">1356</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetMethodModifiers"/><a href="/9.0.0_r3/s?refs=GetMethodModifiers&amp;project=art" class="xmb">GetMethodModifiers</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1357" href="#1357">1357</a>    <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="1358" href="#1358">1358</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=modifiers_ptr&amp;project=art">modifiers_ptr</a>);
<a class="l" name="1359" href="#1359">1359</a>
<a class="hl" name="1360" href="#1360">1360</a>  <span class="c">/*   67 :  RESERVED */</span>
<a class="l" name="1361" href="#1361">1361</a>  <b>void</b> *<a class="xmb" name="reserved67"/><a href="/9.0.0_r3/s?refs=reserved67&amp;project=art" class="xmb">reserved67</a>;
<a class="l" name="1362" href="#1362">1362</a>
<a class="l" name="1363" href="#1363">1363</a>  <span class="c">/*   68 : Get Max Locals */</span>
<a class="l" name="1364" href="#1364">1364</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetMaxLocals"/><a href="/9.0.0_r3/s?refs=GetMaxLocals&amp;project=art" class="xmb">GetMaxLocals</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1365" href="#1365">1365</a>    <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="1366" href="#1366">1366</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#max_ptr">max_ptr</a>);
<a class="l" name="1367" href="#1367">1367</a>
<a class="l" name="1368" href="#1368">1368</a>  <span class="c">/*   69 : Get Arguments Size */</span>
<a class="l" name="1369" href="#1369">1369</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetArgumentsSize"/><a href="/9.0.0_r3/s?refs=GetArgumentsSize&amp;project=art" class="xmb">GetArgumentsSize</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="hl" name="1370" href="#1370">1370</a>    <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="1371" href="#1371">1371</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=size_ptr&amp;project=art">size_ptr</a>);
<a class="l" name="1372" href="#1372">1372</a>
<a class="l" name="1373" href="#1373">1373</a>  <span class="c">/*   70 : Get Line Number Table */</span>
<a class="l" name="1374" href="#1374">1374</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetLineNumberTable"/><a href="/9.0.0_r3/s?refs=GetLineNumberTable&amp;project=art" class="xmb">GetLineNumberTable</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1375" href="#1375">1375</a>    <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="1376" href="#1376">1376</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=entry_count_ptr&amp;project=art">entry_count_ptr</a>,
<a class="l" name="1377" href="#1377">1377</a>    <a class="d" href="#jvmtiLineNumberEntry">jvmtiLineNumberEntry</a>** <a href="/9.0.0_r3/s?defs=table_ptr&amp;project=art">table_ptr</a>);
<a class="l" name="1378" href="#1378">1378</a>
<a class="l" name="1379" href="#1379">1379</a>  <span class="c">/*   71 : Get Method Location */</span>
<a class="hl" name="1380" href="#1380">1380</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetMethodLocation"/><a href="/9.0.0_r3/s?refs=GetMethodLocation&amp;project=art" class="xmb">GetMethodLocation</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1381" href="#1381">1381</a>    <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="1382" href="#1382">1382</a>    <a class="d" href="#jlocation">jlocation</a>* <a class="d" href="#start_location_ptr">start_location_ptr</a>,
<a class="l" name="1383" href="#1383">1383</a>    <a class="d" href="#jlocation">jlocation</a>* <a class="d" href="#end_location_ptr">end_location_ptr</a>);
<a class="l" name="1384" href="#1384">1384</a>
<a class="l" name="1385" href="#1385">1385</a>  <span class="c">/*   72 : Get Local Variable Table */</span>
<a class="l" name="1386" href="#1386">1386</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetLocalVariableTable"/><a href="/9.0.0_r3/s?refs=GetLocalVariableTable&amp;project=art" class="xmb">GetLocalVariableTable</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1387" href="#1387">1387</a>    <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="1388" href="#1388">1388</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=entry_count_ptr&amp;project=art">entry_count_ptr</a>,
<a class="l" name="1389" href="#1389">1389</a>    <a class="d" href="#jvmtiLocalVariableEntry">jvmtiLocalVariableEntry</a>** <a href="/9.0.0_r3/s?defs=table_ptr&amp;project=art">table_ptr</a>);
<a class="hl" name="1390" href="#1390">1390</a>
<a class="l" name="1391" href="#1391">1391</a>  <span class="c">/*   73 : Set Native Method Prefix */</span>
<a class="l" name="1392" href="#1392">1392</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="SetNativeMethodPrefix"/><a href="/9.0.0_r3/s?refs=SetNativeMethodPrefix&amp;project=art" class="xmb">SetNativeMethodPrefix</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1393" href="#1393">1393</a>    <b>const</b> <b>char</b>* <a class="d" href="#prefix">prefix</a>);
<a class="l" name="1394" href="#1394">1394</a>
<a class="l" name="1395" href="#1395">1395</a>  <span class="c">/*   74 : Set Native Method Prefixes */</span>
<a class="l" name="1396" href="#1396">1396</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="SetNativeMethodPrefixes"/><a href="/9.0.0_r3/s?refs=SetNativeMethodPrefixes&amp;project=art" class="xmb">SetNativeMethodPrefixes</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1397" href="#1397">1397</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="d" href="#prefix_count">prefix_count</a>,
<a class="l" name="1398" href="#1398">1398</a>    <b>char</b>** <a class="d" href="#prefixes">prefixes</a>);
<a class="l" name="1399" href="#1399">1399</a>
<a class="hl" name="1400" href="#1400">1400</a>  <span class="c">/*   75 : Get Bytecodes */</span>
<a class="l" name="1401" href="#1401">1401</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetBytecodes"/><a href="/9.0.0_r3/s?refs=GetBytecodes&amp;project=art" class="xmb">GetBytecodes</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1402" href="#1402">1402</a>    <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="1403" href="#1403">1403</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#bytecode_count_ptr">bytecode_count_ptr</a>,
<a class="l" name="1404" href="#1404">1404</a>    <b>unsigned</b> <b>char</b>** <a class="d" href="#bytecodes_ptr">bytecodes_ptr</a>);
<a class="l" name="1405" href="#1405">1405</a>
<a class="l" name="1406" href="#1406">1406</a>  <span class="c">/*   76 : Is Method Native */</span>
<a class="l" name="1407" href="#1407">1407</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="IsMethodNative"/><a href="/9.0.0_r3/s?refs=IsMethodNative&amp;project=art" class="xmb">IsMethodNative</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1408" href="#1408">1408</a>    <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="1409" href="#1409">1409</a>    <a href="/9.0.0_r3/s?defs=jboolean&amp;project=art">jboolean</a>* <a class="d" href="#is_native_ptr">is_native_ptr</a>);
<a class="hl" name="1410" href="#1410">1410</a>
<a class="l" name="1411" href="#1411">1411</a>  <span class="c">/*   77 : Is Method Synthetic */</span>
<a class="l" name="1412" href="#1412">1412</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="IsMethodSynthetic"/><a href="/9.0.0_r3/s?refs=IsMethodSynthetic&amp;project=art" class="xmb">IsMethodSynthetic</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1413" href="#1413">1413</a>    <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="1414" href="#1414">1414</a>    <a href="/9.0.0_r3/s?defs=jboolean&amp;project=art">jboolean</a>* <a href="/9.0.0_r3/s?defs=is_synthetic_ptr&amp;project=art">is_synthetic_ptr</a>);
<a class="l" name="1415" href="#1415">1415</a>
<a class="l" name="1416" href="#1416">1416</a>  <span class="c">/*   78 : Get Loaded Classes */</span>
<a class="l" name="1417" href="#1417">1417</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetLoadedClasses"/><a href="/9.0.0_r3/s?refs=GetLoadedClasses&amp;project=art" class="xmb">GetLoadedClasses</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1418" href="#1418">1418</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=class_count_ptr&amp;project=art">class_count_ptr</a>,
<a class="l" name="1419" href="#1419">1419</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a>** <a href="/9.0.0_r3/s?defs=classes_ptr&amp;project=art">classes_ptr</a>);
<a class="hl" name="1420" href="#1420">1420</a>
<a class="l" name="1421" href="#1421">1421</a>  <span class="c">/*   79 : Get Classloader Classes */</span>
<a class="l" name="1422" href="#1422">1422</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetClassLoaderClasses"/><a href="/9.0.0_r3/s?refs=GetClassLoaderClasses&amp;project=art" class="xmb">GetClassLoaderClasses</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1423" href="#1423">1423</a>    <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a class="d" href="#initiating_loader">initiating_loader</a>,
<a class="l" name="1424" href="#1424">1424</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=class_count_ptr&amp;project=art">class_count_ptr</a>,
<a class="l" name="1425" href="#1425">1425</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a>** <a href="/9.0.0_r3/s?defs=classes_ptr&amp;project=art">classes_ptr</a>);
<a class="l" name="1426" href="#1426">1426</a>
<a class="l" name="1427" href="#1427">1427</a>  <span class="c">/*   80 : Pop Frame */</span>
<a class="l" name="1428" href="#1428">1428</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="PopFrame"/><a href="/9.0.0_r3/s?refs=PopFrame&amp;project=art" class="xmb">PopFrame</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1429" href="#1429">1429</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>);
<a class="hl" name="1430" href="#1430">1430</a>
<a class="l" name="1431" href="#1431">1431</a>  <span class="c">/*   81 : Force Early Return - Object */</span>
<a class="l" name="1432" href="#1432">1432</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="ForceEarlyReturnObject"/><a href="/9.0.0_r3/s?refs=ForceEarlyReturnObject&amp;project=art" class="xmb">ForceEarlyReturnObject</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1433" href="#1433">1433</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1434" href="#1434">1434</a>    <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>);
<a class="l" name="1435" href="#1435">1435</a>
<a class="l" name="1436" href="#1436">1436</a>  <span class="c">/*   82 : Force Early Return - Int */</span>
<a class="l" name="1437" href="#1437">1437</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="ForceEarlyReturnInt"/><a href="/9.0.0_r3/s?refs=ForceEarlyReturnInt&amp;project=art" class="xmb">ForceEarlyReturnInt</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1438" href="#1438">1438</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1439" href="#1439">1439</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>);
<a class="hl" name="1440" href="#1440">1440</a>
<a class="l" name="1441" href="#1441">1441</a>  <span class="c">/*   83 : Force Early Return - Long */</span>
<a class="l" name="1442" href="#1442">1442</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="ForceEarlyReturnLong"/><a href="/9.0.0_r3/s?refs=ForceEarlyReturnLong&amp;project=art" class="xmb">ForceEarlyReturnLong</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1443" href="#1443">1443</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1444" href="#1444">1444</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>);
<a class="l" name="1445" href="#1445">1445</a>
<a class="l" name="1446" href="#1446">1446</a>  <span class="c">/*   84 : Force Early Return - Float */</span>
<a class="l" name="1447" href="#1447">1447</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="ForceEarlyReturnFloat"/><a href="/9.0.0_r3/s?refs=ForceEarlyReturnFloat&amp;project=art" class="xmb">ForceEarlyReturnFloat</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1448" href="#1448">1448</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1449" href="#1449">1449</a>    <a href="/9.0.0_r3/s?defs=jfloat&amp;project=art">jfloat</a> <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>);
<a class="hl" name="1450" href="#1450">1450</a>
<a class="l" name="1451" href="#1451">1451</a>  <span class="c">/*   85 : Force Early Return - Double */</span>
<a class="l" name="1452" href="#1452">1452</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="ForceEarlyReturnDouble"/><a href="/9.0.0_r3/s?refs=ForceEarlyReturnDouble&amp;project=art" class="xmb">ForceEarlyReturnDouble</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1453" href="#1453">1453</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1454" href="#1454">1454</a>    <a href="/9.0.0_r3/s?defs=jdouble&amp;project=art">jdouble</a> <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>);
<a class="l" name="1455" href="#1455">1455</a>
<a class="l" name="1456" href="#1456">1456</a>  <span class="c">/*   86 : Force Early Return - Void */</span>
<a class="l" name="1457" href="#1457">1457</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="ForceEarlyReturnVoid"/><a href="/9.0.0_r3/s?refs=ForceEarlyReturnVoid&amp;project=art" class="xmb">ForceEarlyReturnVoid</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1458" href="#1458">1458</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>);
<a class="l" name="1459" href="#1459">1459</a>
<a class="hl" name="1460" href="#1460">1460</a>  <span class="c">/*   87 : Redefine Classes */</span>
<a class="l" name="1461" href="#1461">1461</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="RedefineClasses"/><a href="/9.0.0_r3/s?refs=RedefineClasses&amp;project=art" class="xmb">RedefineClasses</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1462" href="#1462">1462</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=class_count&amp;project=art">class_count</a>,
<a class="l" name="1463" href="#1463">1463</a>    <b>const</b> <a class="d" href="#jvmtiClassDefinition">jvmtiClassDefinition</a>* <a class="d" href="#class_definitions">class_definitions</a>);
<a class="l" name="1464" href="#1464">1464</a>
<a class="l" name="1465" href="#1465">1465</a>  <span class="c">/*   88 : Get Version Number */</span>
<a class="l" name="1466" href="#1466">1466</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetVersionNumber"/><a href="/9.0.0_r3/s?refs=GetVersionNumber&amp;project=art" class="xmb">GetVersionNumber</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1467" href="#1467">1467</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#version_ptr">version_ptr</a>);
<a class="l" name="1468" href="#1468">1468</a>
<a class="l" name="1469" href="#1469">1469</a>  <span class="c">/*   89 : Get Capabilities */</span>
<a class="hl" name="1470" href="#1470">1470</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetCapabilities"/><a href="/9.0.0_r3/s?refs=GetCapabilities&amp;project=art" class="xmb">GetCapabilities</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1471" href="#1471">1471</a>    <a class="d" href="#jvmtiCapabilities">jvmtiCapabilities</a>* <a href="/9.0.0_r3/s?defs=capabilities_ptr&amp;project=art">capabilities_ptr</a>);
<a class="l" name="1472" href="#1472">1472</a>
<a class="l" name="1473" href="#1473">1473</a>  <span class="c">/*   90 : Get Source Debug Extension */</span>
<a class="l" name="1474" href="#1474">1474</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetSourceDebugExtension"/><a href="/9.0.0_r3/s?refs=GetSourceDebugExtension&amp;project=art" class="xmb">GetSourceDebugExtension</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1475" href="#1475">1475</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="l" name="1476" href="#1476">1476</a>    <b>char</b>** <a class="d" href="#source_debug_extension_ptr">source_debug_extension_ptr</a>);
<a class="l" name="1477" href="#1477">1477</a>
<a class="l" name="1478" href="#1478">1478</a>  <span class="c">/*   91 : Is Method Obsolete */</span>
<a class="l" name="1479" href="#1479">1479</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="IsMethodObsolete"/><a href="/9.0.0_r3/s?refs=IsMethodObsolete&amp;project=art" class="xmb">IsMethodObsolete</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="hl" name="1480" href="#1480">1480</a>    <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>,
<a class="l" name="1481" href="#1481">1481</a>    <a href="/9.0.0_r3/s?defs=jboolean&amp;project=art">jboolean</a>* <a class="d" href="#is_obsolete_ptr">is_obsolete_ptr</a>);
<a class="l" name="1482" href="#1482">1482</a>
<a class="l" name="1483" href="#1483">1483</a>  <span class="c">/*   92 : Suspend Thread List */</span>
<a class="l" name="1484" href="#1484">1484</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="SuspendThreadList"/><a href="/9.0.0_r3/s?refs=SuspendThreadList&amp;project=art" class="xmb">SuspendThreadList</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1485" href="#1485">1485</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=request_count&amp;project=art">request_count</a>,
<a class="l" name="1486" href="#1486">1486</a>    <b>const</b> <a class="d" href="#jthread">jthread</a>* <a href="/9.0.0_r3/s?defs=request_list&amp;project=art">request_list</a>,
<a class="l" name="1487" href="#1487">1487</a>    <a class="d" href="#jvmtiError">jvmtiError</a>* <a href="/9.0.0_r3/s?defs=results&amp;project=art">results</a>);
<a class="l" name="1488" href="#1488">1488</a>
<a class="l" name="1489" href="#1489">1489</a>  <span class="c">/*   93 : Resume Thread List */</span>
<a class="hl" name="1490" href="#1490">1490</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="ResumeThreadList"/><a href="/9.0.0_r3/s?refs=ResumeThreadList&amp;project=art" class="xmb">ResumeThreadList</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1491" href="#1491">1491</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=request_count&amp;project=art">request_count</a>,
<a class="l" name="1492" href="#1492">1492</a>    <b>const</b> <a class="d" href="#jthread">jthread</a>* <a href="/9.0.0_r3/s?defs=request_list&amp;project=art">request_list</a>,
<a class="l" name="1493" href="#1493">1493</a>    <a class="d" href="#jvmtiError">jvmtiError</a>* <a href="/9.0.0_r3/s?defs=results&amp;project=art">results</a>);
<a class="l" name="1494" href="#1494">1494</a>
<a class="l" name="1495" href="#1495">1495</a>  <span class="c">/*   94 :  RESERVED */</span>
<a class="l" name="1496" href="#1496">1496</a>  <b>void</b> *<a class="xmb" name="reserved94"/><a href="/9.0.0_r3/s?refs=reserved94&amp;project=art" class="xmb">reserved94</a>;
<a class="l" name="1497" href="#1497">1497</a>
<a class="l" name="1498" href="#1498">1498</a>  <span class="c">/*   95 :  RESERVED */</span>
<a class="l" name="1499" href="#1499">1499</a>  <b>void</b> *<a class="xmb" name="reserved95"/><a href="/9.0.0_r3/s?refs=reserved95&amp;project=art" class="xmb">reserved95</a>;
<a class="hl" name="1500" href="#1500">1500</a>
<a class="l" name="1501" href="#1501">1501</a>  <span class="c">/*   96 :  RESERVED */</span>
<a class="l" name="1502" href="#1502">1502</a>  <b>void</b> *<a class="xmb" name="reserved96"/><a href="/9.0.0_r3/s?refs=reserved96&amp;project=art" class="xmb">reserved96</a>;
<a class="l" name="1503" href="#1503">1503</a>
<a class="l" name="1504" href="#1504">1504</a>  <span class="c">/*   97 :  RESERVED */</span>
<a class="l" name="1505" href="#1505">1505</a>  <b>void</b> *<a class="xmb" name="reserved97"/><a href="/9.0.0_r3/s?refs=reserved97&amp;project=art" class="xmb">reserved97</a>;
<a class="l" name="1506" href="#1506">1506</a>
<a class="l" name="1507" href="#1507">1507</a>  <span class="c">/*   98 :  RESERVED */</span>
<a class="l" name="1508" href="#1508">1508</a>  <b>void</b> *<a class="xmb" name="reserved98"/><a href="/9.0.0_r3/s?refs=reserved98&amp;project=art" class="xmb">reserved98</a>;
<a class="l" name="1509" href="#1509">1509</a>
<a class="hl" name="1510" href="#1510">1510</a>  <span class="c">/*   99 :  RESERVED */</span>
<a class="l" name="1511" href="#1511">1511</a>  <b>void</b> *<a class="xmb" name="reserved99"/><a href="/9.0.0_r3/s?refs=reserved99&amp;project=art" class="xmb">reserved99</a>;
<a class="l" name="1512" href="#1512">1512</a>
<a class="l" name="1513" href="#1513">1513</a>  <span class="c">/*   100 : Get All Stack Traces */</span>
<a class="l" name="1514" href="#1514">1514</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetAllStackTraces"/><a href="/9.0.0_r3/s?refs=GetAllStackTraces&amp;project=art" class="xmb">GetAllStackTraces</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1515" href="#1515">1515</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=max_frame_count&amp;project=art">max_frame_count</a>,
<a class="l" name="1516" href="#1516">1516</a>    <a class="d" href="#jvmtiStackInfo">jvmtiStackInfo</a>** <a href="/9.0.0_r3/s?defs=stack_info_ptr&amp;project=art">stack_info_ptr</a>,
<a class="l" name="1517" href="#1517">1517</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=thread_count_ptr&amp;project=art">thread_count_ptr</a>);
<a class="l" name="1518" href="#1518">1518</a>
<a class="l" name="1519" href="#1519">1519</a>  <span class="c">/*   101 : Get Thread List Stack Traces */</span>
<a class="hl" name="1520" href="#1520">1520</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetThreadListStackTraces"/><a href="/9.0.0_r3/s?refs=GetThreadListStackTraces&amp;project=art" class="xmb">GetThreadListStackTraces</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1521" href="#1521">1521</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="d" href="#thread_count">thread_count</a>,
<a class="l" name="1522" href="#1522">1522</a>    <b>const</b> <a class="d" href="#jthread">jthread</a>* <a class="d" href="#thread_list">thread_list</a>,
<a class="l" name="1523" href="#1523">1523</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=max_frame_count&amp;project=art">max_frame_count</a>,
<a class="l" name="1524" href="#1524">1524</a>    <a class="d" href="#jvmtiStackInfo">jvmtiStackInfo</a>** <a href="/9.0.0_r3/s?defs=stack_info_ptr&amp;project=art">stack_info_ptr</a>);
<a class="l" name="1525" href="#1525">1525</a>
<a class="l" name="1526" href="#1526">1526</a>  <span class="c">/*   102 : Get Thread Local Storage */</span>
<a class="l" name="1527" href="#1527">1527</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetThreadLocalStorage"/><a href="/9.0.0_r3/s?refs=GetThreadLocalStorage&amp;project=art" class="xmb">GetThreadLocalStorage</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1528" href="#1528">1528</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1529" href="#1529">1529</a>    <b>void</b>** <a href="/9.0.0_r3/s?defs=data_ptr&amp;project=art">data_ptr</a>);
<a class="hl" name="1530" href="#1530">1530</a>
<a class="l" name="1531" href="#1531">1531</a>  <span class="c">/*   103 : Set Thread Local Storage */</span>
<a class="l" name="1532" href="#1532">1532</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="SetThreadLocalStorage"/><a href="/9.0.0_r3/s?refs=SetThreadLocalStorage&amp;project=art" class="xmb">SetThreadLocalStorage</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1533" href="#1533">1533</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1534" href="#1534">1534</a>    <b>const</b> <b>void</b>* <a href="/9.0.0_r3/s?defs=data&amp;project=art">data</a>);
<a class="l" name="1535" href="#1535">1535</a>
<a class="l" name="1536" href="#1536">1536</a>  <span class="c">/*   104 : Get Stack Trace */</span>
<a class="l" name="1537" href="#1537">1537</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetStackTrace"/><a href="/9.0.0_r3/s?refs=GetStackTrace&amp;project=art" class="xmb">GetStackTrace</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1538" href="#1538">1538</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1539" href="#1539">1539</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="d" href="#start_depth">start_depth</a>,
<a class="hl" name="1540" href="#1540">1540</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=max_frame_count&amp;project=art">max_frame_count</a>,
<a class="l" name="1541" href="#1541">1541</a>    <a class="d" href="#jvmtiFrameInfo">jvmtiFrameInfo</a>* <a href="/9.0.0_r3/s?defs=frame_buffer&amp;project=art">frame_buffer</a>,
<a class="l" name="1542" href="#1542">1542</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=count_ptr&amp;project=art">count_ptr</a>);
<a class="l" name="1543" href="#1543">1543</a>
<a class="l" name="1544" href="#1544">1544</a>  <span class="c">/*   105 :  RESERVED */</span>
<a class="l" name="1545" href="#1545">1545</a>  <b>void</b> *<a class="xmb" name="reserved105"/><a href="/9.0.0_r3/s?refs=reserved105&amp;project=art" class="xmb">reserved105</a>;
<a class="l" name="1546" href="#1546">1546</a>
<a class="l" name="1547" href="#1547">1547</a>  <span class="c">/*   106 : Get Tag */</span>
<a class="l" name="1548" href="#1548">1548</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetTag"/><a href="/9.0.0_r3/s?refs=GetTag&amp;project=art" class="xmb">GetTag</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1549" href="#1549">1549</a>    <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a href="/9.0.0_r3/s?defs=object&amp;project=art">object</a>,
<a class="hl" name="1550" href="#1550">1550</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>* <a class="d" href="#tag_ptr">tag_ptr</a>);
<a class="l" name="1551" href="#1551">1551</a>
<a class="l" name="1552" href="#1552">1552</a>  <span class="c">/*   107 : Set Tag */</span>
<a class="l" name="1553" href="#1553">1553</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="SetTag"/><a href="/9.0.0_r3/s?refs=SetTag&amp;project=art" class="xmb">SetTag</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1554" href="#1554">1554</a>    <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a href="/9.0.0_r3/s?defs=object&amp;project=art">object</a>,
<a class="l" name="1555" href="#1555">1555</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="d" href="#tag">tag</a>);
<a class="l" name="1556" href="#1556">1556</a>
<a class="l" name="1557" href="#1557">1557</a>  <span class="c">/*   108 : Force Garbage Collection */</span>
<a class="l" name="1558" href="#1558">1558</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="ForceGarbageCollection"/><a href="/9.0.0_r3/s?refs=ForceGarbageCollection&amp;project=art" class="xmb">ForceGarbageCollection</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>);
<a class="l" name="1559" href="#1559">1559</a>
<a class="hl" name="1560" href="#1560">1560</a>  <span class="c">/*   109 : Iterate Over Objects Reachable From Object */</span>
<a class="l" name="1561" href="#1561">1561</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="IterateOverObjectsReachableFromObject"/><a href="/9.0.0_r3/s?refs=IterateOverObjectsReachableFromObject&amp;project=art" class="xmb">IterateOverObjectsReachableFromObject</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1562" href="#1562">1562</a>    <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a href="/9.0.0_r3/s?defs=object&amp;project=art">object</a>,
<a class="l" name="1563" href="#1563">1563</a>    <a class="d" href="#jvmtiObjectReferenceCallback">jvmtiObjectReferenceCallback</a> <a class="d" href="#object_reference_callback">object_reference_callback</a>,
<a class="l" name="1564" href="#1564">1564</a>    <b>const</b> <b>void</b>* <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>);
<a class="l" name="1565" href="#1565">1565</a>
<a class="l" name="1566" href="#1566">1566</a>  <span class="c">/*   110 : Iterate Over Reachable Objects */</span>
<a class="l" name="1567" href="#1567">1567</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="IterateOverReachableObjects"/><a href="/9.0.0_r3/s?refs=IterateOverReachableObjects&amp;project=art" class="xmb">IterateOverReachableObjects</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1568" href="#1568">1568</a>    <a class="d" href="#jvmtiHeapRootCallback">jvmtiHeapRootCallback</a> <a class="d" href="#heap_root_callback">heap_root_callback</a>,
<a class="l" name="1569" href="#1569">1569</a>    <a class="d" href="#jvmtiStackReferenceCallback">jvmtiStackReferenceCallback</a> <a class="d" href="#stack_ref_callback">stack_ref_callback</a>,
<a class="hl" name="1570" href="#1570">1570</a>    <a class="d" href="#jvmtiObjectReferenceCallback">jvmtiObjectReferenceCallback</a> <a class="d" href="#object_ref_callback">object_ref_callback</a>,
<a class="l" name="1571" href="#1571">1571</a>    <b>const</b> <b>void</b>* <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>);
<a class="l" name="1572" href="#1572">1572</a>
<a class="l" name="1573" href="#1573">1573</a>  <span class="c">/*   111 : Iterate Over Heap */</span>
<a class="l" name="1574" href="#1574">1574</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="IterateOverHeap"/><a href="/9.0.0_r3/s?refs=IterateOverHeap&amp;project=art" class="xmb">IterateOverHeap</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1575" href="#1575">1575</a>    <a class="d" href="#jvmtiHeapObjectFilter">jvmtiHeapObjectFilter</a> <a href="/9.0.0_r3/s?defs=object_filter&amp;project=art">object_filter</a>,
<a class="l" name="1576" href="#1576">1576</a>    <a class="d" href="#jvmtiHeapObjectCallback">jvmtiHeapObjectCallback</a> <a href="/9.0.0_r3/s?defs=heap_object_callback&amp;project=art">heap_object_callback</a>,
<a class="l" name="1577" href="#1577">1577</a>    <b>const</b> <b>void</b>* <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>);
<a class="l" name="1578" href="#1578">1578</a>
<a class="l" name="1579" href="#1579">1579</a>  <span class="c">/*   112 : Iterate Over Instances Of Class */</span>
<a class="hl" name="1580" href="#1580">1580</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="IterateOverInstancesOfClass"/><a href="/9.0.0_r3/s?refs=IterateOverInstancesOfClass&amp;project=art" class="xmb">IterateOverInstancesOfClass</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1581" href="#1581">1581</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="l" name="1582" href="#1582">1582</a>    <a class="d" href="#jvmtiHeapObjectFilter">jvmtiHeapObjectFilter</a> <a href="/9.0.0_r3/s?defs=object_filter&amp;project=art">object_filter</a>,
<a class="l" name="1583" href="#1583">1583</a>    <a class="d" href="#jvmtiHeapObjectCallback">jvmtiHeapObjectCallback</a> <a href="/9.0.0_r3/s?defs=heap_object_callback&amp;project=art">heap_object_callback</a>,
<a class="l" name="1584" href="#1584">1584</a>    <b>const</b> <b>void</b>* <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>);
<a class="l" name="1585" href="#1585">1585</a>
<a class="l" name="1586" href="#1586">1586</a>  <span class="c">/*   113 :  RESERVED */</span>
<a class="l" name="1587" href="#1587">1587</a>  <b>void</b> *<a class="xmb" name="reserved113"/><a href="/9.0.0_r3/s?refs=reserved113&amp;project=art" class="xmb">reserved113</a>;
<a class="l" name="1588" href="#1588">1588</a>
<a class="l" name="1589" href="#1589">1589</a>  <span class="c">/*   114 : Get Objects With Tags */</span>
<a class="hl" name="1590" href="#1590">1590</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetObjectsWithTags"/><a href="/9.0.0_r3/s?refs=GetObjectsWithTags&amp;project=art" class="xmb">GetObjectsWithTags</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1591" href="#1591">1591</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="d" href="#tag_count">tag_count</a>,
<a class="l" name="1592" href="#1592">1592</a>    <b>const</b> <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>* <a class="d" href="#tags">tags</a>,
<a class="l" name="1593" href="#1593">1593</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=count_ptr&amp;project=art">count_ptr</a>,
<a class="l" name="1594" href="#1594">1594</a>    <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a>** <a class="d" href="#object_result_ptr">object_result_ptr</a>,
<a class="l" name="1595" href="#1595">1595</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>** <a class="d" href="#tag_result_ptr">tag_result_ptr</a>);
<a class="l" name="1596" href="#1596">1596</a>
<a class="l" name="1597" href="#1597">1597</a>  <span class="c">/*   115 : Follow References */</span>
<a class="l" name="1598" href="#1598">1598</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="FollowReferences"/><a href="/9.0.0_r3/s?refs=FollowReferences&amp;project=art" class="xmb">FollowReferences</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1599" href="#1599">1599</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=heap_filter&amp;project=art">heap_filter</a>,
<a class="hl" name="1600" href="#1600">1600</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="l" name="1601" href="#1601">1601</a>    <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a class="d" href="#initial_object">initial_object</a>,
<a class="l" name="1602" href="#1602">1602</a>    <b>const</b> <a class="d" href="#jvmtiHeapCallbacks">jvmtiHeapCallbacks</a>* <a href="/9.0.0_r3/s?defs=callbacks&amp;project=art">callbacks</a>,
<a class="l" name="1603" href="#1603">1603</a>    <b>const</b> <b>void</b>* <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>);
<a class="l" name="1604" href="#1604">1604</a>
<a class="l" name="1605" href="#1605">1605</a>  <span class="c">/*   116 : Iterate Through Heap */</span>
<a class="l" name="1606" href="#1606">1606</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="IterateThroughHeap"/><a href="/9.0.0_r3/s?refs=IterateThroughHeap&amp;project=art" class="xmb">IterateThroughHeap</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1607" href="#1607">1607</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=heap_filter&amp;project=art">heap_filter</a>,
<a class="l" name="1608" href="#1608">1608</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="l" name="1609" href="#1609">1609</a>    <b>const</b> <a class="d" href="#jvmtiHeapCallbacks">jvmtiHeapCallbacks</a>* <a href="/9.0.0_r3/s?defs=callbacks&amp;project=art">callbacks</a>,
<a class="hl" name="1610" href="#1610">1610</a>    <b>const</b> <b>void</b>* <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>);
<a class="l" name="1611" href="#1611">1611</a>
<a class="l" name="1612" href="#1612">1612</a>  <span class="c">/*   117 :  RESERVED */</span>
<a class="l" name="1613" href="#1613">1613</a>  <b>void</b> *<a class="xmb" name="reserved117"/><a href="/9.0.0_r3/s?refs=reserved117&amp;project=art" class="xmb">reserved117</a>;
<a class="l" name="1614" href="#1614">1614</a>
<a class="l" name="1615" href="#1615">1615</a>  <span class="c">/*   118 :  RESERVED */</span>
<a class="l" name="1616" href="#1616">1616</a>  <b>void</b> *<a class="xmb" name="reserved118"/><a href="/9.0.0_r3/s?refs=reserved118&amp;project=art" class="xmb">reserved118</a>;
<a class="l" name="1617" href="#1617">1617</a>
<a class="l" name="1618" href="#1618">1618</a>  <span class="c">/*   119 :  RESERVED */</span>
<a class="l" name="1619" href="#1619">1619</a>  <b>void</b> *<a class="xmb" name="reserved119"/><a href="/9.0.0_r3/s?refs=reserved119&amp;project=art" class="xmb">reserved119</a>;
<a class="hl" name="1620" href="#1620">1620</a>
<a class="l" name="1621" href="#1621">1621</a>  <span class="c">/*   120 : Set JNI Function Table */</span>
<a class="l" name="1622" href="#1622">1622</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="SetJNIFunctionTable"/><a href="/9.0.0_r3/s?refs=SetJNIFunctionTable&amp;project=art" class="xmb">SetJNIFunctionTable</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1623" href="#1623">1623</a>    <b>const</b> <a class="d" href="#jniNativeInterface">jniNativeInterface</a>* <a href="/9.0.0_r3/s?defs=function_table&amp;project=art">function_table</a>);
<a class="l" name="1624" href="#1624">1624</a>
<a class="l" name="1625" href="#1625">1625</a>  <span class="c">/*   121 : Get JNI Function Table */</span>
<a class="l" name="1626" href="#1626">1626</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetJNIFunctionTable"/><a href="/9.0.0_r3/s?refs=GetJNIFunctionTable&amp;project=art" class="xmb">GetJNIFunctionTable</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1627" href="#1627">1627</a>    <a class="d" href="#jniNativeInterface">jniNativeInterface</a>** <a href="/9.0.0_r3/s?defs=function_table&amp;project=art">function_table</a>);
<a class="l" name="1628" href="#1628">1628</a>
<a class="l" name="1629" href="#1629">1629</a>  <span class="c">/*   122 : Set Event Callbacks */</span>
<a class="hl" name="1630" href="#1630">1630</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="SetEventCallbacks"/><a href="/9.0.0_r3/s?refs=SetEventCallbacks&amp;project=art" class="xmb">SetEventCallbacks</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1631" href="#1631">1631</a>    <b>const</b> <a class="d" href="#jvmtiEventCallbacks">jvmtiEventCallbacks</a>* <a href="/9.0.0_r3/s?defs=callbacks&amp;project=art">callbacks</a>,
<a class="l" name="1632" href="#1632">1632</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="d" href="#size_of_callbacks">size_of_callbacks</a>);
<a class="l" name="1633" href="#1633">1633</a>
<a class="l" name="1634" href="#1634">1634</a>  <span class="c">/*   123 : Generate Events */</span>
<a class="l" name="1635" href="#1635">1635</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GenerateEvents"/><a href="/9.0.0_r3/s?refs=GenerateEvents&amp;project=art" class="xmb">GenerateEvents</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1636" href="#1636">1636</a>    <a class="d" href="#jvmtiEvent">jvmtiEvent</a> <a href="/9.0.0_r3/s?defs=event_type&amp;project=art">event_type</a>);
<a class="l" name="1637" href="#1637">1637</a>
<a class="l" name="1638" href="#1638">1638</a>  <span class="c">/*   124 : Get Extension Functions */</span>
<a class="l" name="1639" href="#1639">1639</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetExtensionFunctions"/><a href="/9.0.0_r3/s?refs=GetExtensionFunctions&amp;project=art" class="xmb">GetExtensionFunctions</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="hl" name="1640" href="#1640">1640</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=extension_count_ptr&amp;project=art">extension_count_ptr</a>,
<a class="l" name="1641" href="#1641">1641</a>    <a class="d" href="#jvmtiExtensionFunctionInfo">jvmtiExtensionFunctionInfo</a>** <a href="/9.0.0_r3/s?defs=extensions&amp;project=art">extensions</a>);
<a class="l" name="1642" href="#1642">1642</a>
<a class="l" name="1643" href="#1643">1643</a>  <span class="c">/*   125 : Get Extension Events */</span>
<a class="l" name="1644" href="#1644">1644</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetExtensionEvents"/><a href="/9.0.0_r3/s?refs=GetExtensionEvents&amp;project=art" class="xmb">GetExtensionEvents</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1645" href="#1645">1645</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=extension_count_ptr&amp;project=art">extension_count_ptr</a>,
<a class="l" name="1646" href="#1646">1646</a>    <a class="d" href="#jvmtiExtensionEventInfo">jvmtiExtensionEventInfo</a>** <a href="/9.0.0_r3/s?defs=extensions&amp;project=art">extensions</a>);
<a class="l" name="1647" href="#1647">1647</a>
<a class="l" name="1648" href="#1648">1648</a>  <span class="c">/*   126 : Set Extension Event Callback */</span>
<a class="l" name="1649" href="#1649">1649</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="SetExtensionEventCallback"/><a href="/9.0.0_r3/s?refs=SetExtensionEventCallback&amp;project=art" class="xmb">SetExtensionEventCallback</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="hl" name="1650" href="#1650">1650</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=extension_event_index&amp;project=art">extension_event_index</a>,
<a class="l" name="1651" href="#1651">1651</a>    <a class="d" href="#jvmtiExtensionEvent">jvmtiExtensionEvent</a> <a class="d" href="#callback">callback</a>);
<a class="l" name="1652" href="#1652">1652</a>
<a class="l" name="1653" href="#1653">1653</a>  <span class="c">/*   127 : Dispose Environment */</span>
<a class="l" name="1654" href="#1654">1654</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="DisposeEnvironment"/><a href="/9.0.0_r3/s?refs=DisposeEnvironment&amp;project=art" class="xmb">DisposeEnvironment</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>);
<a class="l" name="1655" href="#1655">1655</a>
<a class="l" name="1656" href="#1656">1656</a>  <span class="c">/*   128 : Get Error Name */</span>
<a class="l" name="1657" href="#1657">1657</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetErrorName"/><a href="/9.0.0_r3/s?refs=GetErrorName&amp;project=art" class="xmb">GetErrorName</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1658" href="#1658">1658</a>    <a class="d" href="#jvmtiError">jvmtiError</a> <a class="d" href="#error">error</a>,
<a class="l" name="1659" href="#1659">1659</a>    <b>char</b>** <a href="/9.0.0_r3/s?defs=name_ptr&amp;project=art">name_ptr</a>);
<a class="hl" name="1660" href="#1660">1660</a>
<a class="l" name="1661" href="#1661">1661</a>  <span class="c">/*   129 : Get JLocation Format */</span>
<a class="l" name="1662" href="#1662">1662</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetJLocationFormat"/><a href="/9.0.0_r3/s?refs=GetJLocationFormat&amp;project=art" class="xmb">GetJLocationFormat</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1663" href="#1663">1663</a>    <a class="d" href="#jvmtiJlocationFormat">jvmtiJlocationFormat</a>* <a class="d" href="#format_ptr">format_ptr</a>);
<a class="l" name="1664" href="#1664">1664</a>
<a class="l" name="1665" href="#1665">1665</a>  <span class="c">/*   130 : Get System Properties */</span>
<a class="l" name="1666" href="#1666">1666</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetSystemProperties"/><a href="/9.0.0_r3/s?refs=GetSystemProperties&amp;project=art" class="xmb">GetSystemProperties</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1667" href="#1667">1667</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=count_ptr&amp;project=art">count_ptr</a>,
<a class="l" name="1668" href="#1668">1668</a>    <b>char</b>*** <a class="d" href="#property_ptr">property_ptr</a>);
<a class="l" name="1669" href="#1669">1669</a>
<a class="hl" name="1670" href="#1670">1670</a>  <span class="c">/*   131 : Get System Property */</span>
<a class="l" name="1671" href="#1671">1671</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetSystemProperty"/><a href="/9.0.0_r3/s?refs=GetSystemProperty&amp;project=art" class="xmb">GetSystemProperty</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1672" href="#1672">1672</a>    <b>const</b> <b>char</b>* <a href="/9.0.0_r3/s?defs=property&amp;project=art">property</a>,
<a class="l" name="1673" href="#1673">1673</a>    <b>char</b>** <a href="/9.0.0_r3/s?defs=value_ptr&amp;project=art">value_ptr</a>);
<a class="l" name="1674" href="#1674">1674</a>
<a class="l" name="1675" href="#1675">1675</a>  <span class="c">/*   132 : Set System Property */</span>
<a class="l" name="1676" href="#1676">1676</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="SetSystemProperty"/><a href="/9.0.0_r3/s?refs=SetSystemProperty&amp;project=art" class="xmb">SetSystemProperty</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1677" href="#1677">1677</a>    <b>const</b> <b>char</b>* <a href="/9.0.0_r3/s?defs=property&amp;project=art">property</a>,
<a class="l" name="1678" href="#1678">1678</a>    <b>const</b> <b>char</b>* <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>);
<a class="l" name="1679" href="#1679">1679</a>
<a class="hl" name="1680" href="#1680">1680</a>  <span class="c">/*   133 : Get Phase */</span>
<a class="l" name="1681" href="#1681">1681</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetPhase"/><a href="/9.0.0_r3/s?refs=GetPhase&amp;project=art" class="xmb">GetPhase</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1682" href="#1682">1682</a>    <a class="d" href="#jvmtiPhase">jvmtiPhase</a>* <a class="d" href="#phase_ptr">phase_ptr</a>);
<a class="l" name="1683" href="#1683">1683</a>
<a class="l" name="1684" href="#1684">1684</a>  <span class="c">/*   134 : Get Current Thread CPU Timer Information */</span>
<a class="l" name="1685" href="#1685">1685</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetCurrentThreadCpuTimerInfo"/><a href="/9.0.0_r3/s?refs=GetCurrentThreadCpuTimerInfo&amp;project=art" class="xmb">GetCurrentThreadCpuTimerInfo</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1686" href="#1686">1686</a>    <a class="d" href="#jvmtiTimerInfo">jvmtiTimerInfo</a>* <a href="/9.0.0_r3/s?defs=info_ptr&amp;project=art">info_ptr</a>);
<a class="l" name="1687" href="#1687">1687</a>
<a class="l" name="1688" href="#1688">1688</a>  <span class="c">/*   135 : Get Current Thread CPU Time */</span>
<a class="l" name="1689" href="#1689">1689</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetCurrentThreadCpuTime"/><a href="/9.0.0_r3/s?refs=GetCurrentThreadCpuTime&amp;project=art" class="xmb">GetCurrentThreadCpuTime</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="hl" name="1690" href="#1690">1690</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>* <a href="/9.0.0_r3/s?defs=nanos_ptr&amp;project=art">nanos_ptr</a>);
<a class="l" name="1691" href="#1691">1691</a>
<a class="l" name="1692" href="#1692">1692</a>  <span class="c">/*   136 : Get Thread CPU Timer Information */</span>
<a class="l" name="1693" href="#1693">1693</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetThreadCpuTimerInfo"/><a href="/9.0.0_r3/s?refs=GetThreadCpuTimerInfo&amp;project=art" class="xmb">GetThreadCpuTimerInfo</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1694" href="#1694">1694</a>    <a class="d" href="#jvmtiTimerInfo">jvmtiTimerInfo</a>* <a href="/9.0.0_r3/s?defs=info_ptr&amp;project=art">info_ptr</a>);
<a class="l" name="1695" href="#1695">1695</a>
<a class="l" name="1696" href="#1696">1696</a>  <span class="c">/*   137 : Get Thread CPU Time */</span>
<a class="l" name="1697" href="#1697">1697</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetThreadCpuTime"/><a href="/9.0.0_r3/s?refs=GetThreadCpuTime&amp;project=art" class="xmb">GetThreadCpuTime</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1698" href="#1698">1698</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1699" href="#1699">1699</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>* <a href="/9.0.0_r3/s?defs=nanos_ptr&amp;project=art">nanos_ptr</a>);
<a class="hl" name="1700" href="#1700">1700</a>
<a class="l" name="1701" href="#1701">1701</a>  <span class="c">/*   138 : Get Timer Information */</span>
<a class="l" name="1702" href="#1702">1702</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetTimerInfo"/><a href="/9.0.0_r3/s?refs=GetTimerInfo&amp;project=art" class="xmb">GetTimerInfo</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1703" href="#1703">1703</a>    <a class="d" href="#jvmtiTimerInfo">jvmtiTimerInfo</a>* <a href="/9.0.0_r3/s?defs=info_ptr&amp;project=art">info_ptr</a>);
<a class="l" name="1704" href="#1704">1704</a>
<a class="l" name="1705" href="#1705">1705</a>  <span class="c">/*   139 : Get Time */</span>
<a class="l" name="1706" href="#1706">1706</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetTime"/><a href="/9.0.0_r3/s?refs=GetTime&amp;project=art" class="xmb">GetTime</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1707" href="#1707">1707</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>* <a href="/9.0.0_r3/s?defs=nanos_ptr&amp;project=art">nanos_ptr</a>);
<a class="l" name="1708" href="#1708">1708</a>
<a class="l" name="1709" href="#1709">1709</a>  <span class="c">/*   140 : Get Potential Capabilities */</span>
<a class="hl" name="1710" href="#1710">1710</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetPotentialCapabilities"/><a href="/9.0.0_r3/s?refs=GetPotentialCapabilities&amp;project=art" class="xmb">GetPotentialCapabilities</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1711" href="#1711">1711</a>    <a class="d" href="#jvmtiCapabilities">jvmtiCapabilities</a>* <a href="/9.0.0_r3/s?defs=capabilities_ptr&amp;project=art">capabilities_ptr</a>);
<a class="l" name="1712" href="#1712">1712</a>
<a class="l" name="1713" href="#1713">1713</a>  <span class="c">/*   141 :  RESERVED */</span>
<a class="l" name="1714" href="#1714">1714</a>  <b>void</b> *<a class="xmb" name="reserved141"/><a href="/9.0.0_r3/s?refs=reserved141&amp;project=art" class="xmb">reserved141</a>;
<a class="l" name="1715" href="#1715">1715</a>
<a class="l" name="1716" href="#1716">1716</a>  <span class="c">/*   142 : Add Capabilities */</span>
<a class="l" name="1717" href="#1717">1717</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="AddCapabilities"/><a href="/9.0.0_r3/s?refs=AddCapabilities&amp;project=art" class="xmb">AddCapabilities</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1718" href="#1718">1718</a>    <b>const</b> <a class="d" href="#jvmtiCapabilities">jvmtiCapabilities</a>* <a href="/9.0.0_r3/s?defs=capabilities_ptr&amp;project=art">capabilities_ptr</a>);
<a class="l" name="1719" href="#1719">1719</a>
<a class="hl" name="1720" href="#1720">1720</a>  <span class="c">/*   143 : Relinquish Capabilities */</span>
<a class="l" name="1721" href="#1721">1721</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="RelinquishCapabilities"/><a href="/9.0.0_r3/s?refs=RelinquishCapabilities&amp;project=art" class="xmb">RelinquishCapabilities</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1722" href="#1722">1722</a>    <b>const</b> <a class="d" href="#jvmtiCapabilities">jvmtiCapabilities</a>* <a href="/9.0.0_r3/s?defs=capabilities_ptr&amp;project=art">capabilities_ptr</a>);
<a class="l" name="1723" href="#1723">1723</a>
<a class="l" name="1724" href="#1724">1724</a>  <span class="c">/*   144 : Get Available Processors */</span>
<a class="l" name="1725" href="#1725">1725</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetAvailableProcessors"/><a href="/9.0.0_r3/s?refs=GetAvailableProcessors&amp;project=art" class="xmb">GetAvailableProcessors</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1726" href="#1726">1726</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#processor_count_ptr">processor_count_ptr</a>);
<a class="l" name="1727" href="#1727">1727</a>
<a class="l" name="1728" href="#1728">1728</a>  <span class="c">/*   145 : Get Class Version Numbers */</span>
<a class="l" name="1729" href="#1729">1729</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetClassVersionNumbers"/><a href="/9.0.0_r3/s?refs=GetClassVersionNumbers&amp;project=art" class="xmb">GetClassVersionNumbers</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="hl" name="1730" href="#1730">1730</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="l" name="1731" href="#1731">1731</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#minor_version_ptr">minor_version_ptr</a>,
<a class="l" name="1732" href="#1732">1732</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#major_version_ptr">major_version_ptr</a>);
<a class="l" name="1733" href="#1733">1733</a>
<a class="l" name="1734" href="#1734">1734</a>  <span class="c">/*   146 : Get Constant Pool */</span>
<a class="l" name="1735" href="#1735">1735</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetConstantPool"/><a href="/9.0.0_r3/s?refs=GetConstantPool&amp;project=art" class="xmb">GetConstantPool</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1736" href="#1736">1736</a>    <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="l" name="1737" href="#1737">1737</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#constant_pool_count_ptr">constant_pool_count_ptr</a>,
<a class="l" name="1738" href="#1738">1738</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#constant_pool_byte_count_ptr">constant_pool_byte_count_ptr</a>,
<a class="l" name="1739" href="#1739">1739</a>    <b>unsigned</b> <b>char</b>** <a class="d" href="#constant_pool_bytes_ptr">constant_pool_bytes_ptr</a>);
<a class="hl" name="1740" href="#1740">1740</a>
<a class="l" name="1741" href="#1741">1741</a>  <span class="c">/*   147 : Get Environment Local Storage */</span>
<a class="l" name="1742" href="#1742">1742</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetEnvironmentLocalStorage"/><a href="/9.0.0_r3/s?refs=GetEnvironmentLocalStorage&amp;project=art" class="xmb">GetEnvironmentLocalStorage</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1743" href="#1743">1743</a>    <b>void</b>** <a href="/9.0.0_r3/s?defs=data_ptr&amp;project=art">data_ptr</a>);
<a class="l" name="1744" href="#1744">1744</a>
<a class="l" name="1745" href="#1745">1745</a>  <span class="c">/*   148 : Set Environment Local Storage */</span>
<a class="l" name="1746" href="#1746">1746</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="SetEnvironmentLocalStorage"/><a href="/9.0.0_r3/s?refs=SetEnvironmentLocalStorage&amp;project=art" class="xmb">SetEnvironmentLocalStorage</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1747" href="#1747">1747</a>    <b>const</b> <b>void</b>* <a href="/9.0.0_r3/s?defs=data&amp;project=art">data</a>);
<a class="l" name="1748" href="#1748">1748</a>
<a class="l" name="1749" href="#1749">1749</a>  <span class="c">/*   149 : Add To Bootstrap Class Loader Search */</span>
<a class="hl" name="1750" href="#1750">1750</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="AddToBootstrapClassLoaderSearch"/><a href="/9.0.0_r3/s?refs=AddToBootstrapClassLoaderSearch&amp;project=art" class="xmb">AddToBootstrapClassLoaderSearch</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1751" href="#1751">1751</a>    <b>const</b> <b>char</b>* <a href="/9.0.0_r3/s?defs=segment&amp;project=art">segment</a>);
<a class="l" name="1752" href="#1752">1752</a>
<a class="l" name="1753" href="#1753">1753</a>  <span class="c">/*   150 : Set Verbose Flag */</span>
<a class="l" name="1754" href="#1754">1754</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="SetVerboseFlag"/><a href="/9.0.0_r3/s?refs=SetVerboseFlag&amp;project=art" class="xmb">SetVerboseFlag</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1755" href="#1755">1755</a>    <a class="d" href="#jvmtiVerboseFlag">jvmtiVerboseFlag</a> <a class="d" href="#flag">flag</a>,
<a class="l" name="1756" href="#1756">1756</a>    <a href="/9.0.0_r3/s?defs=jboolean&amp;project=art">jboolean</a> <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>);
<a class="l" name="1757" href="#1757">1757</a>
<a class="l" name="1758" href="#1758">1758</a>  <span class="c">/*   151 : Add To System Class Loader Search */</span>
<a class="l" name="1759" href="#1759">1759</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="AddToSystemClassLoaderSearch"/><a href="/9.0.0_r3/s?refs=AddToSystemClassLoaderSearch&amp;project=art" class="xmb">AddToSystemClassLoaderSearch</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="hl" name="1760" href="#1760">1760</a>    <b>const</b> <b>char</b>* <a href="/9.0.0_r3/s?defs=segment&amp;project=art">segment</a>);
<a class="l" name="1761" href="#1761">1761</a>
<a class="l" name="1762" href="#1762">1762</a>  <span class="c">/*   152 : Retransform Classes */</span>
<a class="l" name="1763" href="#1763">1763</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="RetransformClasses"/><a href="/9.0.0_r3/s?refs=RetransformClasses&amp;project=art" class="xmb">RetransformClasses</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1764" href="#1764">1764</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=class_count&amp;project=art">class_count</a>,
<a class="l" name="1765" href="#1765">1765</a>    <b>const</b> <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a>* <a class="d" href="#classes">classes</a>);
<a class="l" name="1766" href="#1766">1766</a>
<a class="l" name="1767" href="#1767">1767</a>  <span class="c">/*   153 : Get Owned Monitor Stack Depth Info */</span>
<a class="l" name="1768" href="#1768">1768</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetOwnedMonitorStackDepthInfo"/><a href="/9.0.0_r3/s?refs=GetOwnedMonitorStackDepthInfo&amp;project=art" class="xmb">GetOwnedMonitorStackDepthInfo</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1769" href="#1769">1769</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="hl" name="1770" href="#1770">1770</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#monitor_info_count_ptr">monitor_info_count_ptr</a>,
<a class="l" name="1771" href="#1771">1771</a>    <a class="d" href="#jvmtiMonitorStackDepthInfo">jvmtiMonitorStackDepthInfo</a>** <a class="d" href="#monitor_info_ptr">monitor_info_ptr</a>);
<a class="l" name="1772" href="#1772">1772</a>
<a class="l" name="1773" href="#1773">1773</a>  <span class="c">/*   154 : Get Object Size */</span>
<a class="l" name="1774" href="#1774">1774</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetObjectSize"/><a href="/9.0.0_r3/s?refs=GetObjectSize&amp;project=art" class="xmb">GetObjectSize</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="l" name="1775" href="#1775">1775</a>    <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a href="/9.0.0_r3/s?defs=object&amp;project=art">object</a>,
<a class="l" name="1776" href="#1776">1776</a>    <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>* <a href="/9.0.0_r3/s?defs=size_ptr&amp;project=art">size_ptr</a>);
<a class="l" name="1777" href="#1777">1777</a>
<a class="l" name="1778" href="#1778">1778</a>  <span class="c">/*   155 : Get Local Instance */</span>
<a class="l" name="1779" href="#1779">1779</a>  <a class="d" href="#jvmtiError">jvmtiError</a> (<a href="/9.0.0_r3/s?defs=JNICALL&amp;project=art">JNICALL</a> *<a class="xmb" name="GetLocalInstance"/><a href="/9.0.0_r3/s?refs=GetLocalInstance&amp;project=art" class="xmb">GetLocalInstance</a>) (<a href="/9.0.0_r3/s?defs=jvmtiEnv&amp;project=art">jvmtiEnv</a>* <a href="/9.0.0_r3/s?defs=env&amp;project=art">env</a>,
<a class="hl" name="1780" href="#1780">1780</a>    <a class="d" href="#jthread">jthread</a> <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>,
<a class="l" name="1781" href="#1781">1781</a>    <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>,
<a class="l" name="1782" href="#1782">1782</a>    <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a>* <a href="/9.0.0_r3/s?defs=value_ptr&amp;project=art">value_ptr</a>);
<a class="l" name="1783" href="#1783">1783</a>
<a class="l" name="1784" href="#1784">1784</a>} <a class="xt" name="jvmtiInterface_1"/><a href="/9.0.0_r3/s?refs=jvmtiInterface_1&amp;project=art" class="xt">jvmtiInterface_1</a>;
<a class="l" name="1785" href="#1785">1785</a>
<a class="l" name="1786" href="#1786">1786</a><b>struct</b> <a class="xs" name="_jvmtiEnv"/><a href="/9.0.0_r3/s?refs=_jvmtiEnv&amp;project=art" class="xs">_jvmtiEnv</a> {
<a class="l" name="1787" href="#1787">1787</a>    <b>const</b> <b>struct</b> <a class="d" href="#jvmtiInterface_1_">jvmtiInterface_1_</a> *<a class="xmb" name="functions"/><a href="/9.0.0_r3/s?refs=functions&amp;project=art" class="xmb">functions</a>;
<a class="l" name="1788" href="#1788">1788</a>#<b>ifdef</b> <a href="/9.0.0_r3/s?defs=__cplusplus&amp;project=art">__cplusplus</a>
<a class="l" name="1789" href="#1789">1789</a>
<a class="hl" name="1790" href="#1790">1790</a>
<a class="l" name="1791" href="#1791">1791</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="Allocate"/><a href="/9.0.0_r3/s?refs=Allocate&amp;project=art" class="xf">Allocate</a>(<a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="xa" name="size"/><a href="/9.0.0_r3/s?refs=size&amp;project=art" class="xa">size</a>,
<a class="l" name="1792" href="#1792">1792</a>            <b>unsigned</b> <b>char</b>** <a class="d" href="#mem_ptr">mem_ptr</a>) {
<a class="l" name="1793" href="#1793">1793</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=Allocate&amp;project=art">Allocate</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a class="d" href="#size">size</a>, <a class="d" href="#mem_ptr">mem_ptr</a>);
<a class="l" name="1794" href="#1794">1794</a>  }
<a class="l" name="1795" href="#1795">1795</a>
<a class="l" name="1796" href="#1796">1796</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="Deallocate"/><a href="/9.0.0_r3/s?refs=Deallocate&amp;project=art" class="xf">Deallocate</a>(<b>unsigned</b> <b>char</b>* <a class="xa" name="mem"/><a href="/9.0.0_r3/s?refs=mem&amp;project=art" class="xa">mem</a>) {
<a class="l" name="1797" href="#1797">1797</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=Deallocate&amp;project=art">Deallocate</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a class="d" href="#mem">mem</a>);
<a class="l" name="1798" href="#1798">1798</a>  }
<a class="l" name="1799" href="#1799">1799</a>
<a class="hl" name="1800" href="#1800">1800</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetThreadState"/><a href="/9.0.0_r3/s?refs=GetThreadState&amp;project=art" class="xf">GetThreadState</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="1801" href="#1801">1801</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#thread_state_ptr">thread_state_ptr</a>) {
<a class="l" name="1802" href="#1802">1802</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetThreadState&amp;project=art">GetThreadState</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a class="d" href="#thread_state_ptr">thread_state_ptr</a>);
<a class="l" name="1803" href="#1803">1803</a>  }
<a class="l" name="1804" href="#1804">1804</a>
<a class="l" name="1805" href="#1805">1805</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetCurrentThread"/><a href="/9.0.0_r3/s?refs=GetCurrentThread&amp;project=art" class="xf">GetCurrentThread</a>(<a class="d" href="#jthread">jthread</a>* <a class="xa" name="thread_ptr"/><a href="/9.0.0_r3/s?refs=thread_ptr&amp;project=art" class="xa">thread_ptr</a>) {
<a class="l" name="1806" href="#1806">1806</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetCurrentThread&amp;project=art">GetCurrentThread</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a class="d" href="#thread_ptr">thread_ptr</a>);
<a class="l" name="1807" href="#1807">1807</a>  }
<a class="l" name="1808" href="#1808">1808</a>
<a class="l" name="1809" href="#1809">1809</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetAllThreads"/><a href="/9.0.0_r3/s?refs=GetAllThreads&amp;project=art" class="xf">GetAllThreads</a>(<a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="xa" name="threads_count_ptr"/><a href="/9.0.0_r3/s?refs=threads_count_ptr&amp;project=art" class="xa">threads_count_ptr</a>,
<a class="hl" name="1810" href="#1810">1810</a>            <a class="d" href="#jthread">jthread</a>** <a href="/9.0.0_r3/s?defs=threads_ptr&amp;project=art">threads_ptr</a>) {
<a class="l" name="1811" href="#1811">1811</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetAllThreads&amp;project=art">GetAllThreads</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a class="d" href="#threads_count_ptr">threads_count_ptr</a>, <a href="/9.0.0_r3/s?defs=threads_ptr&amp;project=art">threads_ptr</a>);
<a class="l" name="1812" href="#1812">1812</a>  }
<a class="l" name="1813" href="#1813">1813</a>
<a class="l" name="1814" href="#1814">1814</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="SuspendThread"/><a href="/9.0.0_r3/s?refs=SuspendThread&amp;project=art" class="xf">SuspendThread</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>) {
<a class="l" name="1815" href="#1815">1815</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=SuspendThread&amp;project=art">SuspendThread</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>);
<a class="l" name="1816" href="#1816">1816</a>  }
<a class="l" name="1817" href="#1817">1817</a>
<a class="l" name="1818" href="#1818">1818</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="SuspendThreadList"/><a href="/9.0.0_r3/s?refs=SuspendThreadList&amp;project=art" class="xf">SuspendThreadList</a>(<a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xa" name="request_count"/><a href="/9.0.0_r3/s?refs=request_count&amp;project=art" class="xa">request_count</a>,
<a class="l" name="1819" href="#1819">1819</a>            <b>const</b> <a class="d" href="#jthread">jthread</a>* <a href="/9.0.0_r3/s?defs=request_list&amp;project=art">request_list</a>,
<a class="hl" name="1820" href="#1820">1820</a>            <a class="d" href="#jvmtiError">jvmtiError</a>* <a href="/9.0.0_r3/s?defs=results&amp;project=art">results</a>) {
<a class="l" name="1821" href="#1821">1821</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=SuspendThreadList&amp;project=art">SuspendThreadList</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=request_count&amp;project=art">request_count</a>, <a href="/9.0.0_r3/s?defs=request_list&amp;project=art">request_list</a>, <a href="/9.0.0_r3/s?defs=results&amp;project=art">results</a>);
<a class="l" name="1822" href="#1822">1822</a>  }
<a class="l" name="1823" href="#1823">1823</a>
<a class="l" name="1824" href="#1824">1824</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="ResumeThread"/><a href="/9.0.0_r3/s?refs=ResumeThread&amp;project=art" class="xf">ResumeThread</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>) {
<a class="l" name="1825" href="#1825">1825</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=ResumeThread&amp;project=art">ResumeThread</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>);
<a class="l" name="1826" href="#1826">1826</a>  }
<a class="l" name="1827" href="#1827">1827</a>
<a class="l" name="1828" href="#1828">1828</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="ResumeThreadList"/><a href="/9.0.0_r3/s?refs=ResumeThreadList&amp;project=art" class="xf">ResumeThreadList</a>(<a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xa" name="request_count"/><a href="/9.0.0_r3/s?refs=request_count&amp;project=art" class="xa">request_count</a>,
<a class="l" name="1829" href="#1829">1829</a>            <b>const</b> <a class="d" href="#jthread">jthread</a>* <a href="/9.0.0_r3/s?defs=request_list&amp;project=art">request_list</a>,
<a class="hl" name="1830" href="#1830">1830</a>            <a class="d" href="#jvmtiError">jvmtiError</a>* <a href="/9.0.0_r3/s?defs=results&amp;project=art">results</a>) {
<a class="l" name="1831" href="#1831">1831</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=ResumeThreadList&amp;project=art">ResumeThreadList</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=request_count&amp;project=art">request_count</a>, <a href="/9.0.0_r3/s?defs=request_list&amp;project=art">request_list</a>, <a href="/9.0.0_r3/s?defs=results&amp;project=art">results</a>);
<a class="l" name="1832" href="#1832">1832</a>  }
<a class="l" name="1833" href="#1833">1833</a>
<a class="l" name="1834" href="#1834">1834</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="StopThread"/><a href="/9.0.0_r3/s?refs=StopThread&amp;project=art" class="xf">StopThread</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="1835" href="#1835">1835</a>            <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a class="d" href="#exception">exception</a>) {
<a class="l" name="1836" href="#1836">1836</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=StopThread&amp;project=art">StopThread</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a class="d" href="#exception">exception</a>);
<a class="l" name="1837" href="#1837">1837</a>  }
<a class="l" name="1838" href="#1838">1838</a>
<a class="l" name="1839" href="#1839">1839</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="InterruptThread"/><a href="/9.0.0_r3/s?refs=InterruptThread&amp;project=art" class="xf">InterruptThread</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>) {
<a class="hl" name="1840" href="#1840">1840</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=InterruptThread&amp;project=art">InterruptThread</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>);
<a class="l" name="1841" href="#1841">1841</a>  }
<a class="l" name="1842" href="#1842">1842</a>
<a class="l" name="1843" href="#1843">1843</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetThreadInfo"/><a href="/9.0.0_r3/s?refs=GetThreadInfo&amp;project=art" class="xf">GetThreadInfo</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="1844" href="#1844">1844</a>            <a class="d" href="#jvmtiThreadInfo">jvmtiThreadInfo</a>* <a href="/9.0.0_r3/s?defs=info_ptr&amp;project=art">info_ptr</a>) {
<a class="l" name="1845" href="#1845">1845</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetThreadInfo&amp;project=art">GetThreadInfo</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a href="/9.0.0_r3/s?defs=info_ptr&amp;project=art">info_ptr</a>);
<a class="l" name="1846" href="#1846">1846</a>  }
<a class="l" name="1847" href="#1847">1847</a>
<a class="l" name="1848" href="#1848">1848</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetOwnedMonitorInfo"/><a href="/9.0.0_r3/s?refs=GetOwnedMonitorInfo&amp;project=art" class="xf">GetOwnedMonitorInfo</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="1849" href="#1849">1849</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#owned_monitor_count_ptr">owned_monitor_count_ptr</a>,
<a class="hl" name="1850" href="#1850">1850</a>            <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a>** <a class="d" href="#owned_monitors_ptr">owned_monitors_ptr</a>) {
<a class="l" name="1851" href="#1851">1851</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetOwnedMonitorInfo&amp;project=art">GetOwnedMonitorInfo</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a class="d" href="#owned_monitor_count_ptr">owned_monitor_count_ptr</a>, <a class="d" href="#owned_monitors_ptr">owned_monitors_ptr</a>);
<a class="l" name="1852" href="#1852">1852</a>  }
<a class="l" name="1853" href="#1853">1853</a>
<a class="l" name="1854" href="#1854">1854</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetOwnedMonitorStackDepthInfo"/><a href="/9.0.0_r3/s?refs=GetOwnedMonitorStackDepthInfo&amp;project=art" class="xf">GetOwnedMonitorStackDepthInfo</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="1855" href="#1855">1855</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#monitor_info_count_ptr">monitor_info_count_ptr</a>,
<a class="l" name="1856" href="#1856">1856</a>            <a class="d" href="#jvmtiMonitorStackDepthInfo">jvmtiMonitorStackDepthInfo</a>** <a class="d" href="#monitor_info_ptr">monitor_info_ptr</a>) {
<a class="l" name="1857" href="#1857">1857</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetOwnedMonitorStackDepthInfo&amp;project=art">GetOwnedMonitorStackDepthInfo</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a class="d" href="#monitor_info_count_ptr">monitor_info_count_ptr</a>, <a class="d" href="#monitor_info_ptr">monitor_info_ptr</a>);
<a class="l" name="1858" href="#1858">1858</a>  }
<a class="l" name="1859" href="#1859">1859</a>
<a class="hl" name="1860" href="#1860">1860</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetCurrentContendedMonitor"/><a href="/9.0.0_r3/s?refs=GetCurrentContendedMonitor&amp;project=art" class="xf">GetCurrentContendedMonitor</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="1861" href="#1861">1861</a>            <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a>* <a href="/9.0.0_r3/s?defs=monitor_ptr&amp;project=art">monitor_ptr</a>) {
<a class="l" name="1862" href="#1862">1862</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetCurrentContendedMonitor&amp;project=art">GetCurrentContendedMonitor</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a href="/9.0.0_r3/s?defs=monitor_ptr&amp;project=art">monitor_ptr</a>);
<a class="l" name="1863" href="#1863">1863</a>  }
<a class="l" name="1864" href="#1864">1864</a>
<a class="l" name="1865" href="#1865">1865</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="RunAgentThread"/><a href="/9.0.0_r3/s?refs=RunAgentThread&amp;project=art" class="xf">RunAgentThread</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="1866" href="#1866">1866</a>            <a class="d" href="#jvmtiStartFunction">jvmtiStartFunction</a> <a class="d" href="#proc">proc</a>,
<a class="l" name="1867" href="#1867">1867</a>            <b>const</b> <b>void</b>* <a class="d" href="#arg">arg</a>,
<a class="l" name="1868" href="#1868">1868</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=priority&amp;project=art">priority</a>) {
<a class="l" name="1869" href="#1869">1869</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=RunAgentThread&amp;project=art">RunAgentThread</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a class="d" href="#proc">proc</a>, <a class="d" href="#arg">arg</a>, <a href="/9.0.0_r3/s?defs=priority&amp;project=art">priority</a>);
<a class="hl" name="1870" href="#1870">1870</a>  }
<a class="l" name="1871" href="#1871">1871</a>
<a class="l" name="1872" href="#1872">1872</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="SetThreadLocalStorage"/><a href="/9.0.0_r3/s?refs=SetThreadLocalStorage&amp;project=art" class="xf">SetThreadLocalStorage</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="1873" href="#1873">1873</a>            <b>const</b> <b>void</b>* <a href="/9.0.0_r3/s?defs=data&amp;project=art">data</a>) {
<a class="l" name="1874" href="#1874">1874</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=SetThreadLocalStorage&amp;project=art">SetThreadLocalStorage</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a href="/9.0.0_r3/s?defs=data&amp;project=art">data</a>);
<a class="l" name="1875" href="#1875">1875</a>  }
<a class="l" name="1876" href="#1876">1876</a>
<a class="l" name="1877" href="#1877">1877</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetThreadLocalStorage"/><a href="/9.0.0_r3/s?refs=GetThreadLocalStorage&amp;project=art" class="xf">GetThreadLocalStorage</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="1878" href="#1878">1878</a>            <b>void</b>** <a href="/9.0.0_r3/s?defs=data_ptr&amp;project=art">data_ptr</a>) {
<a class="l" name="1879" href="#1879">1879</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetThreadLocalStorage&amp;project=art">GetThreadLocalStorage</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a href="/9.0.0_r3/s?defs=data_ptr&amp;project=art">data_ptr</a>);
<a class="hl" name="1880" href="#1880">1880</a>  }
<a class="l" name="1881" href="#1881">1881</a>
<a class="l" name="1882" href="#1882">1882</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetTopThreadGroups"/><a href="/9.0.0_r3/s?refs=GetTopThreadGroups&amp;project=art" class="xf">GetTopThreadGroups</a>(<a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="xa" name="group_count_ptr"/><a href="/9.0.0_r3/s?refs=group_count_ptr&amp;project=art" class="xa">group_count_ptr</a>,
<a class="l" name="1883" href="#1883">1883</a>            <a class="d" href="#jthreadGroup">jthreadGroup</a>** <a href="/9.0.0_r3/s?defs=groups_ptr&amp;project=art">groups_ptr</a>) {
<a class="l" name="1884" href="#1884">1884</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetTopThreadGroups&amp;project=art">GetTopThreadGroups</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=group_count_ptr&amp;project=art">group_count_ptr</a>, <a href="/9.0.0_r3/s?defs=groups_ptr&amp;project=art">groups_ptr</a>);
<a class="l" name="1885" href="#1885">1885</a>  }
<a class="l" name="1886" href="#1886">1886</a>
<a class="l" name="1887" href="#1887">1887</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetThreadGroupInfo"/><a href="/9.0.0_r3/s?refs=GetThreadGroupInfo&amp;project=art" class="xf">GetThreadGroupInfo</a>(<a class="d" href="#jthreadGroup">jthreadGroup</a> <a class="xa" name="group"/><a href="/9.0.0_r3/s?refs=group&amp;project=art" class="xa">group</a>,
<a class="l" name="1888" href="#1888">1888</a>            <a class="d" href="#jvmtiThreadGroupInfo">jvmtiThreadGroupInfo</a>* <a href="/9.0.0_r3/s?defs=info_ptr&amp;project=art">info_ptr</a>) {
<a class="l" name="1889" href="#1889">1889</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetThreadGroupInfo&amp;project=art">GetThreadGroupInfo</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=group&amp;project=art">group</a>, <a href="/9.0.0_r3/s?defs=info_ptr&amp;project=art">info_ptr</a>);
<a class="hl" name="1890" href="#1890">1890</a>  }
<a class="l" name="1891" href="#1891">1891</a>
<a class="l" name="1892" href="#1892">1892</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetThreadGroupChildren"/><a href="/9.0.0_r3/s?refs=GetThreadGroupChildren&amp;project=art" class="xf">GetThreadGroupChildren</a>(<a class="d" href="#jthreadGroup">jthreadGroup</a> <a class="xa" name="group"/><a href="/9.0.0_r3/s?refs=group&amp;project=art" class="xa">group</a>,
<a class="l" name="1893" href="#1893">1893</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=thread_count_ptr&amp;project=art">thread_count_ptr</a>,
<a class="l" name="1894" href="#1894">1894</a>            <a class="d" href="#jthread">jthread</a>** <a href="/9.0.0_r3/s?defs=threads_ptr&amp;project=art">threads_ptr</a>,
<a class="l" name="1895" href="#1895">1895</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=group_count_ptr&amp;project=art">group_count_ptr</a>,
<a class="l" name="1896" href="#1896">1896</a>            <a class="d" href="#jthreadGroup">jthreadGroup</a>** <a href="/9.0.0_r3/s?defs=groups_ptr&amp;project=art">groups_ptr</a>) {
<a class="l" name="1897" href="#1897">1897</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetThreadGroupChildren&amp;project=art">GetThreadGroupChildren</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=group&amp;project=art">group</a>, <a href="/9.0.0_r3/s?defs=thread_count_ptr&amp;project=art">thread_count_ptr</a>, <a href="/9.0.0_r3/s?defs=threads_ptr&amp;project=art">threads_ptr</a>, <a href="/9.0.0_r3/s?defs=group_count_ptr&amp;project=art">group_count_ptr</a>, <a href="/9.0.0_r3/s?defs=groups_ptr&amp;project=art">groups_ptr</a>);
<a class="l" name="1898" href="#1898">1898</a>  }
<a class="l" name="1899" href="#1899">1899</a>
<a class="hl" name="1900" href="#1900">1900</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetStackTrace"/><a href="/9.0.0_r3/s?refs=GetStackTrace&amp;project=art" class="xf">GetStackTrace</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="1901" href="#1901">1901</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="d" href="#start_depth">start_depth</a>,
<a class="l" name="1902" href="#1902">1902</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=max_frame_count&amp;project=art">max_frame_count</a>,
<a class="l" name="1903" href="#1903">1903</a>            <a class="d" href="#jvmtiFrameInfo">jvmtiFrameInfo</a>* <a href="/9.0.0_r3/s?defs=frame_buffer&amp;project=art">frame_buffer</a>,
<a class="l" name="1904" href="#1904">1904</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=count_ptr&amp;project=art">count_ptr</a>) {
<a class="l" name="1905" href="#1905">1905</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetStackTrace&amp;project=art">GetStackTrace</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a class="d" href="#start_depth">start_depth</a>, <a href="/9.0.0_r3/s?defs=max_frame_count&amp;project=art">max_frame_count</a>, <a href="/9.0.0_r3/s?defs=frame_buffer&amp;project=art">frame_buffer</a>, <a href="/9.0.0_r3/s?defs=count_ptr&amp;project=art">count_ptr</a>);
<a class="l" name="1906" href="#1906">1906</a>  }
<a class="l" name="1907" href="#1907">1907</a>
<a class="l" name="1908" href="#1908">1908</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetAllStackTraces"/><a href="/9.0.0_r3/s?refs=GetAllStackTraces&amp;project=art" class="xf">GetAllStackTraces</a>(<a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xa" name="max_frame_count"/><a href="/9.0.0_r3/s?refs=max_frame_count&amp;project=art" class="xa">max_frame_count</a>,
<a class="l" name="1909" href="#1909">1909</a>            <a class="d" href="#jvmtiStackInfo">jvmtiStackInfo</a>** <a href="/9.0.0_r3/s?defs=stack_info_ptr&amp;project=art">stack_info_ptr</a>,
<a class="hl" name="1910" href="#1910">1910</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=thread_count_ptr&amp;project=art">thread_count_ptr</a>) {
<a class="l" name="1911" href="#1911">1911</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetAllStackTraces&amp;project=art">GetAllStackTraces</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=max_frame_count&amp;project=art">max_frame_count</a>, <a href="/9.0.0_r3/s?defs=stack_info_ptr&amp;project=art">stack_info_ptr</a>, <a href="/9.0.0_r3/s?defs=thread_count_ptr&amp;project=art">thread_count_ptr</a>);
<a class="l" name="1912" href="#1912">1912</a>  }
<a class="l" name="1913" href="#1913">1913</a>
<a class="l" name="1914" href="#1914">1914</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetThreadListStackTraces"/><a href="/9.0.0_r3/s?refs=GetThreadListStackTraces&amp;project=art" class="xf">GetThreadListStackTraces</a>(<a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xa" name="thread_count"/><a href="/9.0.0_r3/s?refs=thread_count&amp;project=art" class="xa">thread_count</a>,
<a class="l" name="1915" href="#1915">1915</a>            <b>const</b> <a class="d" href="#jthread">jthread</a>* <a class="d" href="#thread_list">thread_list</a>,
<a class="l" name="1916" href="#1916">1916</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=max_frame_count&amp;project=art">max_frame_count</a>,
<a class="l" name="1917" href="#1917">1917</a>            <a class="d" href="#jvmtiStackInfo">jvmtiStackInfo</a>** <a href="/9.0.0_r3/s?defs=stack_info_ptr&amp;project=art">stack_info_ptr</a>) {
<a class="l" name="1918" href="#1918">1918</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetThreadListStackTraces&amp;project=art">GetThreadListStackTraces</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a class="d" href="#thread_count">thread_count</a>, <a class="d" href="#thread_list">thread_list</a>, <a href="/9.0.0_r3/s?defs=max_frame_count&amp;project=art">max_frame_count</a>, <a href="/9.0.0_r3/s?defs=stack_info_ptr&amp;project=art">stack_info_ptr</a>);
<a class="l" name="1919" href="#1919">1919</a>  }
<a class="hl" name="1920" href="#1920">1920</a>
<a class="l" name="1921" href="#1921">1921</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetFrameCount"/><a href="/9.0.0_r3/s?refs=GetFrameCount&amp;project=art" class="xf">GetFrameCount</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="1922" href="#1922">1922</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=count_ptr&amp;project=art">count_ptr</a>) {
<a class="l" name="1923" href="#1923">1923</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetFrameCount&amp;project=art">GetFrameCount</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a href="/9.0.0_r3/s?defs=count_ptr&amp;project=art">count_ptr</a>);
<a class="l" name="1924" href="#1924">1924</a>  }
<a class="l" name="1925" href="#1925">1925</a>
<a class="l" name="1926" href="#1926">1926</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="PopFrame"/><a href="/9.0.0_r3/s?refs=PopFrame&amp;project=art" class="xf">PopFrame</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>) {
<a class="l" name="1927" href="#1927">1927</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=PopFrame&amp;project=art">PopFrame</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>);
<a class="l" name="1928" href="#1928">1928</a>  }
<a class="l" name="1929" href="#1929">1929</a>
<a class="hl" name="1930" href="#1930">1930</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetFrameLocation"/><a href="/9.0.0_r3/s?refs=GetFrameLocation&amp;project=art" class="xf">GetFrameLocation</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="1931" href="#1931">1931</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>,
<a class="l" name="1932" href="#1932">1932</a>            <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a>* <a class="d" href="#method_ptr">method_ptr</a>,
<a class="l" name="1933" href="#1933">1933</a>            <a class="d" href="#jlocation">jlocation</a>* <a class="d" href="#location_ptr">location_ptr</a>) {
<a class="l" name="1934" href="#1934">1934</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetFrameLocation&amp;project=art">GetFrameLocation</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>, <a class="d" href="#method_ptr">method_ptr</a>, <a class="d" href="#location_ptr">location_ptr</a>);
<a class="l" name="1935" href="#1935">1935</a>  }
<a class="l" name="1936" href="#1936">1936</a>
<a class="l" name="1937" href="#1937">1937</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="NotifyFramePop"/><a href="/9.0.0_r3/s?refs=NotifyFramePop&amp;project=art" class="xf">NotifyFramePop</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="1938" href="#1938">1938</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>) {
<a class="l" name="1939" href="#1939">1939</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=NotifyFramePop&amp;project=art">NotifyFramePop</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>);
<a class="hl" name="1940" href="#1940">1940</a>  }
<a class="l" name="1941" href="#1941">1941</a>
<a class="l" name="1942" href="#1942">1942</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="ForceEarlyReturnObject"/><a href="/9.0.0_r3/s?refs=ForceEarlyReturnObject&amp;project=art" class="xf">ForceEarlyReturnObject</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="1943" href="#1943">1943</a>            <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>) {
<a class="l" name="1944" href="#1944">1944</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=ForceEarlyReturnObject&amp;project=art">ForceEarlyReturnObject</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>);
<a class="l" name="1945" href="#1945">1945</a>  }
<a class="l" name="1946" href="#1946">1946</a>
<a class="l" name="1947" href="#1947">1947</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="ForceEarlyReturnInt"/><a href="/9.0.0_r3/s?refs=ForceEarlyReturnInt&amp;project=art" class="xf">ForceEarlyReturnInt</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="1948" href="#1948">1948</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>) {
<a class="l" name="1949" href="#1949">1949</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=ForceEarlyReturnInt&amp;project=art">ForceEarlyReturnInt</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>);
<a class="hl" name="1950" href="#1950">1950</a>  }
<a class="l" name="1951" href="#1951">1951</a>
<a class="l" name="1952" href="#1952">1952</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="ForceEarlyReturnLong"/><a href="/9.0.0_r3/s?refs=ForceEarlyReturnLong&amp;project=art" class="xf">ForceEarlyReturnLong</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="1953" href="#1953">1953</a>            <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>) {
<a class="l" name="1954" href="#1954">1954</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=ForceEarlyReturnLong&amp;project=art">ForceEarlyReturnLong</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>);
<a class="l" name="1955" href="#1955">1955</a>  }
<a class="l" name="1956" href="#1956">1956</a>
<a class="l" name="1957" href="#1957">1957</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="ForceEarlyReturnFloat"/><a href="/9.0.0_r3/s?refs=ForceEarlyReturnFloat&amp;project=art" class="xf">ForceEarlyReturnFloat</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="1958" href="#1958">1958</a>            <a href="/9.0.0_r3/s?defs=jfloat&amp;project=art">jfloat</a> <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>) {
<a class="l" name="1959" href="#1959">1959</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=ForceEarlyReturnFloat&amp;project=art">ForceEarlyReturnFloat</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>);
<a class="hl" name="1960" href="#1960">1960</a>  }
<a class="l" name="1961" href="#1961">1961</a>
<a class="l" name="1962" href="#1962">1962</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="ForceEarlyReturnDouble"/><a href="/9.0.0_r3/s?refs=ForceEarlyReturnDouble&amp;project=art" class="xf">ForceEarlyReturnDouble</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="1963" href="#1963">1963</a>            <a href="/9.0.0_r3/s?defs=jdouble&amp;project=art">jdouble</a> <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>) {
<a class="l" name="1964" href="#1964">1964</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=ForceEarlyReturnDouble&amp;project=art">ForceEarlyReturnDouble</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>);
<a class="l" name="1965" href="#1965">1965</a>  }
<a class="l" name="1966" href="#1966">1966</a>
<a class="l" name="1967" href="#1967">1967</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="ForceEarlyReturnVoid"/><a href="/9.0.0_r3/s?refs=ForceEarlyReturnVoid&amp;project=art" class="xf">ForceEarlyReturnVoid</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>) {
<a class="l" name="1968" href="#1968">1968</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=ForceEarlyReturnVoid&amp;project=art">ForceEarlyReturnVoid</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>);
<a class="l" name="1969" href="#1969">1969</a>  }
<a class="hl" name="1970" href="#1970">1970</a>
<a class="l" name="1971" href="#1971">1971</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="FollowReferences"/><a href="/9.0.0_r3/s?refs=FollowReferences&amp;project=art" class="xf">FollowReferences</a>(<a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xa" name="heap_filter"/><a href="/9.0.0_r3/s?refs=heap_filter&amp;project=art" class="xa">heap_filter</a>,
<a class="l" name="1972" href="#1972">1972</a>            <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="l" name="1973" href="#1973">1973</a>            <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a class="d" href="#initial_object">initial_object</a>,
<a class="l" name="1974" href="#1974">1974</a>            <b>const</b> <a class="d" href="#jvmtiHeapCallbacks">jvmtiHeapCallbacks</a>* <a href="/9.0.0_r3/s?defs=callbacks&amp;project=art">callbacks</a>,
<a class="l" name="1975" href="#1975">1975</a>            <b>const</b> <b>void</b>* <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>) {
<a class="l" name="1976" href="#1976">1976</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=FollowReferences&amp;project=art">FollowReferences</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=heap_filter&amp;project=art">heap_filter</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a class="d" href="#initial_object">initial_object</a>, <a href="/9.0.0_r3/s?defs=callbacks&amp;project=art">callbacks</a>, <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>);
<a class="l" name="1977" href="#1977">1977</a>  }
<a class="l" name="1978" href="#1978">1978</a>
<a class="l" name="1979" href="#1979">1979</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="IterateThroughHeap"/><a href="/9.0.0_r3/s?refs=IterateThroughHeap&amp;project=art" class="xf">IterateThroughHeap</a>(<a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xa" name="heap_filter"/><a href="/9.0.0_r3/s?refs=heap_filter&amp;project=art" class="xa">heap_filter</a>,
<a class="hl" name="1980" href="#1980">1980</a>            <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>,
<a class="l" name="1981" href="#1981">1981</a>            <b>const</b> <a class="d" href="#jvmtiHeapCallbacks">jvmtiHeapCallbacks</a>* <a href="/9.0.0_r3/s?defs=callbacks&amp;project=art">callbacks</a>,
<a class="l" name="1982" href="#1982">1982</a>            <b>const</b> <b>void</b>* <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>) {
<a class="l" name="1983" href="#1983">1983</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=IterateThroughHeap&amp;project=art">IterateThroughHeap</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=heap_filter&amp;project=art">heap_filter</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a href="/9.0.0_r3/s?defs=callbacks&amp;project=art">callbacks</a>, <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>);
<a class="l" name="1984" href="#1984">1984</a>  }
<a class="l" name="1985" href="#1985">1985</a>
<a class="l" name="1986" href="#1986">1986</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetTag"/><a href="/9.0.0_r3/s?refs=GetTag&amp;project=art" class="xf">GetTag</a>(<a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a class="xa" name="object"/><a href="/9.0.0_r3/s?refs=object&amp;project=art" class="xa">object</a>,
<a class="l" name="1987" href="#1987">1987</a>            <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>* <a class="d" href="#tag_ptr">tag_ptr</a>) {
<a class="l" name="1988" href="#1988">1988</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetTag&amp;project=art">GetTag</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=object&amp;project=art">object</a>, <a class="d" href="#tag_ptr">tag_ptr</a>);
<a class="l" name="1989" href="#1989">1989</a>  }
<a class="hl" name="1990" href="#1990">1990</a>
<a class="l" name="1991" href="#1991">1991</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="SetTag"/><a href="/9.0.0_r3/s?refs=SetTag&amp;project=art" class="xf">SetTag</a>(<a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a class="xa" name="object"/><a href="/9.0.0_r3/s?refs=object&amp;project=art" class="xa">object</a>,
<a class="l" name="1992" href="#1992">1992</a>            <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="d" href="#tag">tag</a>) {
<a class="l" name="1993" href="#1993">1993</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=SetTag&amp;project=art">SetTag</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=object&amp;project=art">object</a>, <a class="d" href="#tag">tag</a>);
<a class="l" name="1994" href="#1994">1994</a>  }
<a class="l" name="1995" href="#1995">1995</a>
<a class="l" name="1996" href="#1996">1996</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetObjectsWithTags"/><a href="/9.0.0_r3/s?refs=GetObjectsWithTags&amp;project=art" class="xf">GetObjectsWithTags</a>(<a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xa" name="tag_count"/><a href="/9.0.0_r3/s?refs=tag_count&amp;project=art" class="xa">tag_count</a>,
<a class="l" name="1997" href="#1997">1997</a>            <b>const</b> <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>* <a class="d" href="#tags">tags</a>,
<a class="l" name="1998" href="#1998">1998</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=count_ptr&amp;project=art">count_ptr</a>,
<a class="l" name="1999" href="#1999">1999</a>            <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a>** <a class="d" href="#object_result_ptr">object_result_ptr</a>,
<a class="hl" name="2000" href="#2000">2000</a>            <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>** <a class="d" href="#tag_result_ptr">tag_result_ptr</a>) {
<a class="l" name="2001" href="#2001">2001</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetObjectsWithTags&amp;project=art">GetObjectsWithTags</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a class="d" href="#tag_count">tag_count</a>, <a class="d" href="#tags">tags</a>, <a href="/9.0.0_r3/s?defs=count_ptr&amp;project=art">count_ptr</a>, <a class="d" href="#object_result_ptr">object_result_ptr</a>, <a class="d" href="#tag_result_ptr">tag_result_ptr</a>);
<a class="l" name="2002" href="#2002">2002</a>  }
<a class="l" name="2003" href="#2003">2003</a>
<a class="l" name="2004" href="#2004">2004</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="ForceGarbageCollection"/><a href="/9.0.0_r3/s?refs=ForceGarbageCollection&amp;project=art" class="xf">ForceGarbageCollection</a>() {
<a class="l" name="2005" href="#2005">2005</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=ForceGarbageCollection&amp;project=art">ForceGarbageCollection</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>);
<a class="l" name="2006" href="#2006">2006</a>  }
<a class="l" name="2007" href="#2007">2007</a>
<a class="l" name="2008" href="#2008">2008</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="IterateOverObjectsReachableFromObject"/><a href="/9.0.0_r3/s?refs=IterateOverObjectsReachableFromObject&amp;project=art" class="xf">IterateOverObjectsReachableFromObject</a>(<a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a class="xa" name="object"/><a href="/9.0.0_r3/s?refs=object&amp;project=art" class="xa">object</a>,
<a class="l" name="2009" href="#2009">2009</a>            <a class="d" href="#jvmtiObjectReferenceCallback">jvmtiObjectReferenceCallback</a> <a class="d" href="#object_reference_callback">object_reference_callback</a>,
<a class="hl" name="2010" href="#2010">2010</a>            <b>const</b> <b>void</b>* <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>) {
<a class="l" name="2011" href="#2011">2011</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=IterateOverObjectsReachableFromObject&amp;project=art">IterateOverObjectsReachableFromObject</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=object&amp;project=art">object</a>, <a class="d" href="#object_reference_callback">object_reference_callback</a>, <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>);
<a class="l" name="2012" href="#2012">2012</a>  }
<a class="l" name="2013" href="#2013">2013</a>
<a class="l" name="2014" href="#2014">2014</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="IterateOverReachableObjects"/><a href="/9.0.0_r3/s?refs=IterateOverReachableObjects&amp;project=art" class="xf">IterateOverReachableObjects</a>(<a class="d" href="#jvmtiHeapRootCallback">jvmtiHeapRootCallback</a> <a class="xa" name="heap_root_callback"/><a href="/9.0.0_r3/s?refs=heap_root_callback&amp;project=art" class="xa">heap_root_callback</a>,
<a class="l" name="2015" href="#2015">2015</a>            <a class="d" href="#jvmtiStackReferenceCallback">jvmtiStackReferenceCallback</a> <a class="d" href="#stack_ref_callback">stack_ref_callback</a>,
<a class="l" name="2016" href="#2016">2016</a>            <a class="d" href="#jvmtiObjectReferenceCallback">jvmtiObjectReferenceCallback</a> <a class="d" href="#object_ref_callback">object_ref_callback</a>,
<a class="l" name="2017" href="#2017">2017</a>            <b>const</b> <b>void</b>* <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>) {
<a class="l" name="2018" href="#2018">2018</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=IterateOverReachableObjects&amp;project=art">IterateOverReachableObjects</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a class="d" href="#heap_root_callback">heap_root_callback</a>, <a class="d" href="#stack_ref_callback">stack_ref_callback</a>, <a class="d" href="#object_ref_callback">object_ref_callback</a>, <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>);
<a class="l" name="2019" href="#2019">2019</a>  }
<a class="hl" name="2020" href="#2020">2020</a>
<a class="l" name="2021" href="#2021">2021</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="IterateOverHeap"/><a href="/9.0.0_r3/s?refs=IterateOverHeap&amp;project=art" class="xf">IterateOverHeap</a>(<a class="d" href="#jvmtiHeapObjectFilter">jvmtiHeapObjectFilter</a> <a class="xa" name="object_filter"/><a href="/9.0.0_r3/s?refs=object_filter&amp;project=art" class="xa">object_filter</a>,
<a class="l" name="2022" href="#2022">2022</a>            <a class="d" href="#jvmtiHeapObjectCallback">jvmtiHeapObjectCallback</a> <a href="/9.0.0_r3/s?defs=heap_object_callback&amp;project=art">heap_object_callback</a>,
<a class="l" name="2023" href="#2023">2023</a>            <b>const</b> <b>void</b>* <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>) {
<a class="l" name="2024" href="#2024">2024</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=IterateOverHeap&amp;project=art">IterateOverHeap</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=object_filter&amp;project=art">object_filter</a>, <a href="/9.0.0_r3/s?defs=heap_object_callback&amp;project=art">heap_object_callback</a>, <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>);
<a class="l" name="2025" href="#2025">2025</a>  }
<a class="l" name="2026" href="#2026">2026</a>
<a class="l" name="2027" href="#2027">2027</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="IterateOverInstancesOfClass"/><a href="/9.0.0_r3/s?refs=IterateOverInstancesOfClass&amp;project=art" class="xf">IterateOverInstancesOfClass</a>(<a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a class="xa" name="klass"/><a href="/9.0.0_r3/s?refs=klass&amp;project=art" class="xa">klass</a>,
<a class="l" name="2028" href="#2028">2028</a>            <a class="d" href="#jvmtiHeapObjectFilter">jvmtiHeapObjectFilter</a> <a href="/9.0.0_r3/s?defs=object_filter&amp;project=art">object_filter</a>,
<a class="l" name="2029" href="#2029">2029</a>            <a class="d" href="#jvmtiHeapObjectCallback">jvmtiHeapObjectCallback</a> <a href="/9.0.0_r3/s?defs=heap_object_callback&amp;project=art">heap_object_callback</a>,
<a class="hl" name="2030" href="#2030">2030</a>            <b>const</b> <b>void</b>* <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>) {
<a class="l" name="2031" href="#2031">2031</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=IterateOverInstancesOfClass&amp;project=art">IterateOverInstancesOfClass</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a href="/9.0.0_r3/s?defs=object_filter&amp;project=art">object_filter</a>, <a href="/9.0.0_r3/s?defs=heap_object_callback&amp;project=art">heap_object_callback</a>, <a href="/9.0.0_r3/s?defs=user_data&amp;project=art">user_data</a>);
<a class="l" name="2032" href="#2032">2032</a>  }
<a class="l" name="2033" href="#2033">2033</a>
<a class="l" name="2034" href="#2034">2034</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetLocalObject"/><a href="/9.0.0_r3/s?refs=GetLocalObject&amp;project=art" class="xf">GetLocalObject</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="2035" href="#2035">2035</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>,
<a class="l" name="2036" href="#2036">2036</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>,
<a class="l" name="2037" href="#2037">2037</a>            <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a>* <a href="/9.0.0_r3/s?defs=value_ptr&amp;project=art">value_ptr</a>) {
<a class="l" name="2038" href="#2038">2038</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetLocalObject&amp;project=art">GetLocalObject</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>, <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>, <a href="/9.0.0_r3/s?defs=value_ptr&amp;project=art">value_ptr</a>);
<a class="l" name="2039" href="#2039">2039</a>  }
<a class="hl" name="2040" href="#2040">2040</a>
<a class="l" name="2041" href="#2041">2041</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetLocalInstance"/><a href="/9.0.0_r3/s?refs=GetLocalInstance&amp;project=art" class="xf">GetLocalInstance</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="2042" href="#2042">2042</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>,
<a class="l" name="2043" href="#2043">2043</a>            <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a>* <a href="/9.0.0_r3/s?defs=value_ptr&amp;project=art">value_ptr</a>) {
<a class="l" name="2044" href="#2044">2044</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetLocalInstance&amp;project=art">GetLocalInstance</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>, <a href="/9.0.0_r3/s?defs=value_ptr&amp;project=art">value_ptr</a>);
<a class="l" name="2045" href="#2045">2045</a>  }
<a class="l" name="2046" href="#2046">2046</a>
<a class="l" name="2047" href="#2047">2047</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetLocalInt"/><a href="/9.0.0_r3/s?refs=GetLocalInt&amp;project=art" class="xf">GetLocalInt</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="2048" href="#2048">2048</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>,
<a class="l" name="2049" href="#2049">2049</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>,
<a class="hl" name="2050" href="#2050">2050</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=value_ptr&amp;project=art">value_ptr</a>) {
<a class="l" name="2051" href="#2051">2051</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetLocalInt&amp;project=art">GetLocalInt</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>, <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>, <a href="/9.0.0_r3/s?defs=value_ptr&amp;project=art">value_ptr</a>);
<a class="l" name="2052" href="#2052">2052</a>  }
<a class="l" name="2053" href="#2053">2053</a>
<a class="l" name="2054" href="#2054">2054</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetLocalLong"/><a href="/9.0.0_r3/s?refs=GetLocalLong&amp;project=art" class="xf">GetLocalLong</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="2055" href="#2055">2055</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>,
<a class="l" name="2056" href="#2056">2056</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>,
<a class="l" name="2057" href="#2057">2057</a>            <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>* <a href="/9.0.0_r3/s?defs=value_ptr&amp;project=art">value_ptr</a>) {
<a class="l" name="2058" href="#2058">2058</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetLocalLong&amp;project=art">GetLocalLong</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>, <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>, <a href="/9.0.0_r3/s?defs=value_ptr&amp;project=art">value_ptr</a>);
<a class="l" name="2059" href="#2059">2059</a>  }
<a class="hl" name="2060" href="#2060">2060</a>
<a class="l" name="2061" href="#2061">2061</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetLocalFloat"/><a href="/9.0.0_r3/s?refs=GetLocalFloat&amp;project=art" class="xf">GetLocalFloat</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="2062" href="#2062">2062</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>,
<a class="l" name="2063" href="#2063">2063</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>,
<a class="l" name="2064" href="#2064">2064</a>            <a href="/9.0.0_r3/s?defs=jfloat&amp;project=art">jfloat</a>* <a href="/9.0.0_r3/s?defs=value_ptr&amp;project=art">value_ptr</a>) {
<a class="l" name="2065" href="#2065">2065</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetLocalFloat&amp;project=art">GetLocalFloat</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>, <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>, <a href="/9.0.0_r3/s?defs=value_ptr&amp;project=art">value_ptr</a>);
<a class="l" name="2066" href="#2066">2066</a>  }
<a class="l" name="2067" href="#2067">2067</a>
<a class="l" name="2068" href="#2068">2068</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetLocalDouble"/><a href="/9.0.0_r3/s?refs=GetLocalDouble&amp;project=art" class="xf">GetLocalDouble</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="2069" href="#2069">2069</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>,
<a class="hl" name="2070" href="#2070">2070</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>,
<a class="l" name="2071" href="#2071">2071</a>            <a href="/9.0.0_r3/s?defs=jdouble&amp;project=art">jdouble</a>* <a href="/9.0.0_r3/s?defs=value_ptr&amp;project=art">value_ptr</a>) {
<a class="l" name="2072" href="#2072">2072</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetLocalDouble&amp;project=art">GetLocalDouble</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>, <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>, <a href="/9.0.0_r3/s?defs=value_ptr&amp;project=art">value_ptr</a>);
<a class="l" name="2073" href="#2073">2073</a>  }
<a class="l" name="2074" href="#2074">2074</a>
<a class="l" name="2075" href="#2075">2075</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="SetLocalObject"/><a href="/9.0.0_r3/s?refs=SetLocalObject&amp;project=art" class="xf">SetLocalObject</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="2076" href="#2076">2076</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>,
<a class="l" name="2077" href="#2077">2077</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>,
<a class="l" name="2078" href="#2078">2078</a>            <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>) {
<a class="l" name="2079" href="#2079">2079</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=SetLocalObject&amp;project=art">SetLocalObject</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>, <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>, <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>);
<a class="hl" name="2080" href="#2080">2080</a>  }
<a class="l" name="2081" href="#2081">2081</a>
<a class="l" name="2082" href="#2082">2082</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="SetLocalInt"/><a href="/9.0.0_r3/s?refs=SetLocalInt&amp;project=art" class="xf">SetLocalInt</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="2083" href="#2083">2083</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>,
<a class="l" name="2084" href="#2084">2084</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>,
<a class="l" name="2085" href="#2085">2085</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>) {
<a class="l" name="2086" href="#2086">2086</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=SetLocalInt&amp;project=art">SetLocalInt</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>, <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>, <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>);
<a class="l" name="2087" href="#2087">2087</a>  }
<a class="l" name="2088" href="#2088">2088</a>
<a class="l" name="2089" href="#2089">2089</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="SetLocalLong"/><a href="/9.0.0_r3/s?refs=SetLocalLong&amp;project=art" class="xf">SetLocalLong</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="hl" name="2090" href="#2090">2090</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>,
<a class="l" name="2091" href="#2091">2091</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>,
<a class="l" name="2092" href="#2092">2092</a>            <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>) {
<a class="l" name="2093" href="#2093">2093</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=SetLocalLong&amp;project=art">SetLocalLong</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>, <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>, <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>);
<a class="l" name="2094" href="#2094">2094</a>  }
<a class="l" name="2095" href="#2095">2095</a>
<a class="l" name="2096" href="#2096">2096</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="SetLocalFloat"/><a href="/9.0.0_r3/s?refs=SetLocalFloat&amp;project=art" class="xf">SetLocalFloat</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="2097" href="#2097">2097</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>,
<a class="l" name="2098" href="#2098">2098</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>,
<a class="l" name="2099" href="#2099">2099</a>            <a href="/9.0.0_r3/s?defs=jfloat&amp;project=art">jfloat</a> <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>) {
<a class="hl" name="2100" href="#2100">2100</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=SetLocalFloat&amp;project=art">SetLocalFloat</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>, <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>, <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>);
<a class="l" name="2101" href="#2101">2101</a>  }
<a class="l" name="2102" href="#2102">2102</a>
<a class="l" name="2103" href="#2103">2103</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="SetLocalDouble"/><a href="/9.0.0_r3/s?refs=SetLocalDouble&amp;project=art" class="xf">SetLocalDouble</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="2104" href="#2104">2104</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>,
<a class="l" name="2105" href="#2105">2105</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>,
<a class="l" name="2106" href="#2106">2106</a>            <a href="/9.0.0_r3/s?defs=jdouble&amp;project=art">jdouble</a> <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>) {
<a class="l" name="2107" href="#2107">2107</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=SetLocalDouble&amp;project=art">SetLocalDouble</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a href="/9.0.0_r3/s?defs=depth&amp;project=art">depth</a>, <a href="/9.0.0_r3/s?defs=slot&amp;project=art">slot</a>, <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>);
<a class="l" name="2108" href="#2108">2108</a>  }
<a class="l" name="2109" href="#2109">2109</a>
<a class="hl" name="2110" href="#2110">2110</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="SetBreakpoint"/><a href="/9.0.0_r3/s?refs=SetBreakpoint&amp;project=art" class="xf">SetBreakpoint</a>(<a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a class="xa" name="method"/><a href="/9.0.0_r3/s?refs=method&amp;project=art" class="xa">method</a>,
<a class="l" name="2111" href="#2111">2111</a>            <a class="d" href="#jlocation">jlocation</a> <a href="/9.0.0_r3/s?defs=location&amp;project=art">location</a>) {
<a class="l" name="2112" href="#2112">2112</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=SetBreakpoint&amp;project=art">SetBreakpoint</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>, <a href="/9.0.0_r3/s?defs=location&amp;project=art">location</a>);
<a class="l" name="2113" href="#2113">2113</a>  }
<a class="l" name="2114" href="#2114">2114</a>
<a class="l" name="2115" href="#2115">2115</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="ClearBreakpoint"/><a href="/9.0.0_r3/s?refs=ClearBreakpoint&amp;project=art" class="xf">ClearBreakpoint</a>(<a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a class="xa" name="method"/><a href="/9.0.0_r3/s?refs=method&amp;project=art" class="xa">method</a>,
<a class="l" name="2116" href="#2116">2116</a>            <a class="d" href="#jlocation">jlocation</a> <a href="/9.0.0_r3/s?defs=location&amp;project=art">location</a>) {
<a class="l" name="2117" href="#2117">2117</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=ClearBreakpoint&amp;project=art">ClearBreakpoint</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>, <a href="/9.0.0_r3/s?defs=location&amp;project=art">location</a>);
<a class="l" name="2118" href="#2118">2118</a>  }
<a class="l" name="2119" href="#2119">2119</a>
<a class="hl" name="2120" href="#2120">2120</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="SetFieldAccessWatch"/><a href="/9.0.0_r3/s?refs=SetFieldAccessWatch&amp;project=art" class="xf">SetFieldAccessWatch</a>(<a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a class="xa" name="klass"/><a href="/9.0.0_r3/s?refs=klass&amp;project=art" class="xa">klass</a>,
<a class="l" name="2121" href="#2121">2121</a>            <a href="/9.0.0_r3/s?defs=jfieldID&amp;project=art">jfieldID</a> <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>) {
<a class="l" name="2122" href="#2122">2122</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=SetFieldAccessWatch&amp;project=art">SetFieldAccessWatch</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>);
<a class="l" name="2123" href="#2123">2123</a>  }
<a class="l" name="2124" href="#2124">2124</a>
<a class="l" name="2125" href="#2125">2125</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="ClearFieldAccessWatch"/><a href="/9.0.0_r3/s?refs=ClearFieldAccessWatch&amp;project=art" class="xf">ClearFieldAccessWatch</a>(<a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a class="xa" name="klass"/><a href="/9.0.0_r3/s?refs=klass&amp;project=art" class="xa">klass</a>,
<a class="l" name="2126" href="#2126">2126</a>            <a href="/9.0.0_r3/s?defs=jfieldID&amp;project=art">jfieldID</a> <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>) {
<a class="l" name="2127" href="#2127">2127</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=ClearFieldAccessWatch&amp;project=art">ClearFieldAccessWatch</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>);
<a class="l" name="2128" href="#2128">2128</a>  }
<a class="l" name="2129" href="#2129">2129</a>
<a class="hl" name="2130" href="#2130">2130</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="SetFieldModificationWatch"/><a href="/9.0.0_r3/s?refs=SetFieldModificationWatch&amp;project=art" class="xf">SetFieldModificationWatch</a>(<a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a class="xa" name="klass"/><a href="/9.0.0_r3/s?refs=klass&amp;project=art" class="xa">klass</a>,
<a class="l" name="2131" href="#2131">2131</a>            <a href="/9.0.0_r3/s?defs=jfieldID&amp;project=art">jfieldID</a> <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>) {
<a class="l" name="2132" href="#2132">2132</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=SetFieldModificationWatch&amp;project=art">SetFieldModificationWatch</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>);
<a class="l" name="2133" href="#2133">2133</a>  }
<a class="l" name="2134" href="#2134">2134</a>
<a class="l" name="2135" href="#2135">2135</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="ClearFieldModificationWatch"/><a href="/9.0.0_r3/s?refs=ClearFieldModificationWatch&amp;project=art" class="xf">ClearFieldModificationWatch</a>(<a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a class="xa" name="klass"/><a href="/9.0.0_r3/s?refs=klass&amp;project=art" class="xa">klass</a>,
<a class="l" name="2136" href="#2136">2136</a>            <a href="/9.0.0_r3/s?defs=jfieldID&amp;project=art">jfieldID</a> <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>) {
<a class="l" name="2137" href="#2137">2137</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=ClearFieldModificationWatch&amp;project=art">ClearFieldModificationWatch</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>);
<a class="l" name="2138" href="#2138">2138</a>  }
<a class="l" name="2139" href="#2139">2139</a>
<a class="hl" name="2140" href="#2140">2140</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetLoadedClasses"/><a href="/9.0.0_r3/s?refs=GetLoadedClasses&amp;project=art" class="xf">GetLoadedClasses</a>(<a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="xa" name="class_count_ptr"/><a href="/9.0.0_r3/s?refs=class_count_ptr&amp;project=art" class="xa">class_count_ptr</a>,
<a class="l" name="2141" href="#2141">2141</a>            <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a>** <a href="/9.0.0_r3/s?defs=classes_ptr&amp;project=art">classes_ptr</a>) {
<a class="l" name="2142" href="#2142">2142</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetLoadedClasses&amp;project=art">GetLoadedClasses</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=class_count_ptr&amp;project=art">class_count_ptr</a>, <a href="/9.0.0_r3/s?defs=classes_ptr&amp;project=art">classes_ptr</a>);
<a class="l" name="2143" href="#2143">2143</a>  }
<a class="l" name="2144" href="#2144">2144</a>
<a class="l" name="2145" href="#2145">2145</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetClassLoaderClasses"/><a href="/9.0.0_r3/s?refs=GetClassLoaderClasses&amp;project=art" class="xf">GetClassLoaderClasses</a>(<a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a class="xa" name="initiating_loader"/><a href="/9.0.0_r3/s?refs=initiating_loader&amp;project=art" class="xa">initiating_loader</a>,
<a class="l" name="2146" href="#2146">2146</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=class_count_ptr&amp;project=art">class_count_ptr</a>,
<a class="l" name="2147" href="#2147">2147</a>            <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a>** <a href="/9.0.0_r3/s?defs=classes_ptr&amp;project=art">classes_ptr</a>) {
<a class="l" name="2148" href="#2148">2148</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetClassLoaderClasses&amp;project=art">GetClassLoaderClasses</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a class="d" href="#initiating_loader">initiating_loader</a>, <a href="/9.0.0_r3/s?defs=class_count_ptr&amp;project=art">class_count_ptr</a>, <a href="/9.0.0_r3/s?defs=classes_ptr&amp;project=art">classes_ptr</a>);
<a class="l" name="2149" href="#2149">2149</a>  }
<a class="hl" name="2150" href="#2150">2150</a>
<a class="l" name="2151" href="#2151">2151</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetClassSignature"/><a href="/9.0.0_r3/s?refs=GetClassSignature&amp;project=art" class="xf">GetClassSignature</a>(<a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a class="xa" name="klass"/><a href="/9.0.0_r3/s?refs=klass&amp;project=art" class="xa">klass</a>,
<a class="l" name="2152" href="#2152">2152</a>            <b>char</b>** <a href="/9.0.0_r3/s?defs=signature_ptr&amp;project=art">signature_ptr</a>,
<a class="l" name="2153" href="#2153">2153</a>            <b>char</b>** <a href="/9.0.0_r3/s?defs=generic_ptr&amp;project=art">generic_ptr</a>) {
<a class="l" name="2154" href="#2154">2154</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetClassSignature&amp;project=art">GetClassSignature</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a href="/9.0.0_r3/s?defs=signature_ptr&amp;project=art">signature_ptr</a>, <a href="/9.0.0_r3/s?defs=generic_ptr&amp;project=art">generic_ptr</a>);
<a class="l" name="2155" href="#2155">2155</a>  }
<a class="l" name="2156" href="#2156">2156</a>
<a class="l" name="2157" href="#2157">2157</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetClassStatus"/><a href="/9.0.0_r3/s?refs=GetClassStatus&amp;project=art" class="xf">GetClassStatus</a>(<a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a class="xa" name="klass"/><a href="/9.0.0_r3/s?refs=klass&amp;project=art" class="xa">klass</a>,
<a class="l" name="2158" href="#2158">2158</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#status_ptr">status_ptr</a>) {
<a class="l" name="2159" href="#2159">2159</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetClassStatus&amp;project=art">GetClassStatus</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a class="d" href="#status_ptr">status_ptr</a>);
<a class="hl" name="2160" href="#2160">2160</a>  }
<a class="l" name="2161" href="#2161">2161</a>
<a class="l" name="2162" href="#2162">2162</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetSourceFileName"/><a href="/9.0.0_r3/s?refs=GetSourceFileName&amp;project=art" class="xf">GetSourceFileName</a>(<a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a class="xa" name="klass"/><a href="/9.0.0_r3/s?refs=klass&amp;project=art" class="xa">klass</a>,
<a class="l" name="2163" href="#2163">2163</a>            <b>char</b>** <a class="d" href="#source_name_ptr">source_name_ptr</a>) {
<a class="l" name="2164" href="#2164">2164</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetSourceFileName&amp;project=art">GetSourceFileName</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a class="d" href="#source_name_ptr">source_name_ptr</a>);
<a class="l" name="2165" href="#2165">2165</a>  }
<a class="l" name="2166" href="#2166">2166</a>
<a class="l" name="2167" href="#2167">2167</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetClassModifiers"/><a href="/9.0.0_r3/s?refs=GetClassModifiers&amp;project=art" class="xf">GetClassModifiers</a>(<a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a class="xa" name="klass"/><a href="/9.0.0_r3/s?refs=klass&amp;project=art" class="xa">klass</a>,
<a class="l" name="2168" href="#2168">2168</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=modifiers_ptr&amp;project=art">modifiers_ptr</a>) {
<a class="l" name="2169" href="#2169">2169</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetClassModifiers&amp;project=art">GetClassModifiers</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a href="/9.0.0_r3/s?defs=modifiers_ptr&amp;project=art">modifiers_ptr</a>);
<a class="hl" name="2170" href="#2170">2170</a>  }
<a class="l" name="2171" href="#2171">2171</a>
<a class="l" name="2172" href="#2172">2172</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetClassMethods"/><a href="/9.0.0_r3/s?refs=GetClassMethods&amp;project=art" class="xf">GetClassMethods</a>(<a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a class="xa" name="klass"/><a href="/9.0.0_r3/s?refs=klass&amp;project=art" class="xa">klass</a>,
<a class="l" name="2173" href="#2173">2173</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#method_count_ptr">method_count_ptr</a>,
<a class="l" name="2174" href="#2174">2174</a>            <a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a>** <a class="d" href="#methods_ptr">methods_ptr</a>) {
<a class="l" name="2175" href="#2175">2175</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetClassMethods&amp;project=art">GetClassMethods</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a class="d" href="#method_count_ptr">method_count_ptr</a>, <a class="d" href="#methods_ptr">methods_ptr</a>);
<a class="l" name="2176" href="#2176">2176</a>  }
<a class="l" name="2177" href="#2177">2177</a>
<a class="l" name="2178" href="#2178">2178</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetClassFields"/><a href="/9.0.0_r3/s?refs=GetClassFields&amp;project=art" class="xf">GetClassFields</a>(<a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a class="xa" name="klass"/><a href="/9.0.0_r3/s?refs=klass&amp;project=art" class="xa">klass</a>,
<a class="l" name="2179" href="#2179">2179</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#field_count_ptr">field_count_ptr</a>,
<a class="hl" name="2180" href="#2180">2180</a>            <a href="/9.0.0_r3/s?defs=jfieldID&amp;project=art">jfieldID</a>** <a class="d" href="#fields_ptr">fields_ptr</a>) {
<a class="l" name="2181" href="#2181">2181</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetClassFields&amp;project=art">GetClassFields</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a class="d" href="#field_count_ptr">field_count_ptr</a>, <a class="d" href="#fields_ptr">fields_ptr</a>);
<a class="l" name="2182" href="#2182">2182</a>  }
<a class="l" name="2183" href="#2183">2183</a>
<a class="l" name="2184" href="#2184">2184</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetImplementedInterfaces"/><a href="/9.0.0_r3/s?refs=GetImplementedInterfaces&amp;project=art" class="xf">GetImplementedInterfaces</a>(<a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a class="xa" name="klass"/><a href="/9.0.0_r3/s?refs=klass&amp;project=art" class="xa">klass</a>,
<a class="l" name="2185" href="#2185">2185</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#interface_count_ptr">interface_count_ptr</a>,
<a class="l" name="2186" href="#2186">2186</a>            <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a>** <a class="d" href="#interfaces_ptr">interfaces_ptr</a>) {
<a class="l" name="2187" href="#2187">2187</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetImplementedInterfaces&amp;project=art">GetImplementedInterfaces</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a class="d" href="#interface_count_ptr">interface_count_ptr</a>, <a class="d" href="#interfaces_ptr">interfaces_ptr</a>);
<a class="l" name="2188" href="#2188">2188</a>  }
<a class="l" name="2189" href="#2189">2189</a>
<a class="hl" name="2190" href="#2190">2190</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetClassVersionNumbers"/><a href="/9.0.0_r3/s?refs=GetClassVersionNumbers&amp;project=art" class="xf">GetClassVersionNumbers</a>(<a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a class="xa" name="klass"/><a href="/9.0.0_r3/s?refs=klass&amp;project=art" class="xa">klass</a>,
<a class="l" name="2191" href="#2191">2191</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#minor_version_ptr">minor_version_ptr</a>,
<a class="l" name="2192" href="#2192">2192</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#major_version_ptr">major_version_ptr</a>) {
<a class="l" name="2193" href="#2193">2193</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetClassVersionNumbers&amp;project=art">GetClassVersionNumbers</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a class="d" href="#minor_version_ptr">minor_version_ptr</a>, <a class="d" href="#major_version_ptr">major_version_ptr</a>);
<a class="l" name="2194" href="#2194">2194</a>  }
<a class="l" name="2195" href="#2195">2195</a>
<a class="l" name="2196" href="#2196">2196</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetConstantPool"/><a href="/9.0.0_r3/s?refs=GetConstantPool&amp;project=art" class="xf">GetConstantPool</a>(<a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a class="xa" name="klass"/><a href="/9.0.0_r3/s?refs=klass&amp;project=art" class="xa">klass</a>,
<a class="l" name="2197" href="#2197">2197</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#constant_pool_count_ptr">constant_pool_count_ptr</a>,
<a class="l" name="2198" href="#2198">2198</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#constant_pool_byte_count_ptr">constant_pool_byte_count_ptr</a>,
<a class="l" name="2199" href="#2199">2199</a>            <b>unsigned</b> <b>char</b>** <a class="d" href="#constant_pool_bytes_ptr">constant_pool_bytes_ptr</a>) {
<a class="hl" name="2200" href="#2200">2200</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetConstantPool&amp;project=art">GetConstantPool</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a class="d" href="#constant_pool_count_ptr">constant_pool_count_ptr</a>, <a class="d" href="#constant_pool_byte_count_ptr">constant_pool_byte_count_ptr</a>, <a class="d" href="#constant_pool_bytes_ptr">constant_pool_bytes_ptr</a>);
<a class="l" name="2201" href="#2201">2201</a>  }
<a class="l" name="2202" href="#2202">2202</a>
<a class="l" name="2203" href="#2203">2203</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="IsInterface"/><a href="/9.0.0_r3/s?refs=IsInterface&amp;project=art" class="xf">IsInterface</a>(<a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a class="xa" name="klass"/><a href="/9.0.0_r3/s?refs=klass&amp;project=art" class="xa">klass</a>,
<a class="l" name="2204" href="#2204">2204</a>            <a href="/9.0.0_r3/s?defs=jboolean&amp;project=art">jboolean</a>* <a class="d" href="#is_interface_ptr">is_interface_ptr</a>) {
<a class="l" name="2205" href="#2205">2205</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=IsInterface&amp;project=art">IsInterface</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a class="d" href="#is_interface_ptr">is_interface_ptr</a>);
<a class="l" name="2206" href="#2206">2206</a>  }
<a class="l" name="2207" href="#2207">2207</a>
<a class="l" name="2208" href="#2208">2208</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="IsArrayClass"/><a href="/9.0.0_r3/s?refs=IsArrayClass&amp;project=art" class="xf">IsArrayClass</a>(<a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a class="xa" name="klass"/><a href="/9.0.0_r3/s?refs=klass&amp;project=art" class="xa">klass</a>,
<a class="l" name="2209" href="#2209">2209</a>            <a href="/9.0.0_r3/s?defs=jboolean&amp;project=art">jboolean</a>* <a class="d" href="#is_array_class_ptr">is_array_class_ptr</a>) {
<a class="hl" name="2210" href="#2210">2210</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=IsArrayClass&amp;project=art">IsArrayClass</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a class="d" href="#is_array_class_ptr">is_array_class_ptr</a>);
<a class="l" name="2211" href="#2211">2211</a>  }
<a class="l" name="2212" href="#2212">2212</a>
<a class="l" name="2213" href="#2213">2213</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="IsModifiableClass"/><a href="/9.0.0_r3/s?refs=IsModifiableClass&amp;project=art" class="xf">IsModifiableClass</a>(<a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a class="xa" name="klass"/><a href="/9.0.0_r3/s?refs=klass&amp;project=art" class="xa">klass</a>,
<a class="l" name="2214" href="#2214">2214</a>            <a href="/9.0.0_r3/s?defs=jboolean&amp;project=art">jboolean</a>* <a class="d" href="#is_modifiable_class_ptr">is_modifiable_class_ptr</a>) {
<a class="l" name="2215" href="#2215">2215</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=IsModifiableClass&amp;project=art">IsModifiableClass</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a class="d" href="#is_modifiable_class_ptr">is_modifiable_class_ptr</a>);
<a class="l" name="2216" href="#2216">2216</a>  }
<a class="l" name="2217" href="#2217">2217</a>
<a class="l" name="2218" href="#2218">2218</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetClassLoader"/><a href="/9.0.0_r3/s?refs=GetClassLoader&amp;project=art" class="xf">GetClassLoader</a>(<a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a class="xa" name="klass"/><a href="/9.0.0_r3/s?refs=klass&amp;project=art" class="xa">klass</a>,
<a class="l" name="2219" href="#2219">2219</a>            <a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a>* <a class="d" href="#classloader_ptr">classloader_ptr</a>) {
<a class="hl" name="2220" href="#2220">2220</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetClassLoader&amp;project=art">GetClassLoader</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a class="d" href="#classloader_ptr">classloader_ptr</a>);
<a class="l" name="2221" href="#2221">2221</a>  }
<a class="l" name="2222" href="#2222">2222</a>
<a class="l" name="2223" href="#2223">2223</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetSourceDebugExtension"/><a href="/9.0.0_r3/s?refs=GetSourceDebugExtension&amp;project=art" class="xf">GetSourceDebugExtension</a>(<a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a class="xa" name="klass"/><a href="/9.0.0_r3/s?refs=klass&amp;project=art" class="xa">klass</a>,
<a class="l" name="2224" href="#2224">2224</a>            <b>char</b>** <a class="d" href="#source_debug_extension_ptr">source_debug_extension_ptr</a>) {
<a class="l" name="2225" href="#2225">2225</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetSourceDebugExtension&amp;project=art">GetSourceDebugExtension</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a class="d" href="#source_debug_extension_ptr">source_debug_extension_ptr</a>);
<a class="l" name="2226" href="#2226">2226</a>  }
<a class="l" name="2227" href="#2227">2227</a>
<a class="l" name="2228" href="#2228">2228</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="RetransformClasses"/><a href="/9.0.0_r3/s?refs=RetransformClasses&amp;project=art" class="xf">RetransformClasses</a>(<a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xa" name="class_count"/><a href="/9.0.0_r3/s?refs=class_count&amp;project=art" class="xa">class_count</a>,
<a class="l" name="2229" href="#2229">2229</a>            <b>const</b> <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a>* <a class="d" href="#classes">classes</a>) {
<a class="hl" name="2230" href="#2230">2230</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=RetransformClasses&amp;project=art">RetransformClasses</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=class_count&amp;project=art">class_count</a>, <a class="d" href="#classes">classes</a>);
<a class="l" name="2231" href="#2231">2231</a>  }
<a class="l" name="2232" href="#2232">2232</a>
<a class="l" name="2233" href="#2233">2233</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="RedefineClasses"/><a href="/9.0.0_r3/s?refs=RedefineClasses&amp;project=art" class="xf">RedefineClasses</a>(<a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xa" name="class_count"/><a href="/9.0.0_r3/s?refs=class_count&amp;project=art" class="xa">class_count</a>,
<a class="l" name="2234" href="#2234">2234</a>            <b>const</b> <a class="d" href="#jvmtiClassDefinition">jvmtiClassDefinition</a>* <a class="d" href="#class_definitions">class_definitions</a>) {
<a class="l" name="2235" href="#2235">2235</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=RedefineClasses&amp;project=art">RedefineClasses</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=class_count&amp;project=art">class_count</a>, <a class="d" href="#class_definitions">class_definitions</a>);
<a class="l" name="2236" href="#2236">2236</a>  }
<a class="l" name="2237" href="#2237">2237</a>
<a class="l" name="2238" href="#2238">2238</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetObjectSize"/><a href="/9.0.0_r3/s?refs=GetObjectSize&amp;project=art" class="xf">GetObjectSize</a>(<a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a class="xa" name="object"/><a href="/9.0.0_r3/s?refs=object&amp;project=art" class="xa">object</a>,
<a class="l" name="2239" href="#2239">2239</a>            <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>* <a href="/9.0.0_r3/s?defs=size_ptr&amp;project=art">size_ptr</a>) {
<a class="hl" name="2240" href="#2240">2240</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetObjectSize&amp;project=art">GetObjectSize</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=object&amp;project=art">object</a>, <a href="/9.0.0_r3/s?defs=size_ptr&amp;project=art">size_ptr</a>);
<a class="l" name="2241" href="#2241">2241</a>  }
<a class="l" name="2242" href="#2242">2242</a>
<a class="l" name="2243" href="#2243">2243</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetObjectHashCode"/><a href="/9.0.0_r3/s?refs=GetObjectHashCode&amp;project=art" class="xf">GetObjectHashCode</a>(<a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a class="xa" name="object"/><a href="/9.0.0_r3/s?refs=object&amp;project=art" class="xa">object</a>,
<a class="l" name="2244" href="#2244">2244</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#hash_code_ptr">hash_code_ptr</a>) {
<a class="l" name="2245" href="#2245">2245</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetObjectHashCode&amp;project=art">GetObjectHashCode</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=object&amp;project=art">object</a>, <a class="d" href="#hash_code_ptr">hash_code_ptr</a>);
<a class="l" name="2246" href="#2246">2246</a>  }
<a class="l" name="2247" href="#2247">2247</a>
<a class="l" name="2248" href="#2248">2248</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetObjectMonitorUsage"/><a href="/9.0.0_r3/s?refs=GetObjectMonitorUsage&amp;project=art" class="xf">GetObjectMonitorUsage</a>(<a href="/9.0.0_r3/s?defs=jobject&amp;project=art">jobject</a> <a class="xa" name="object"/><a href="/9.0.0_r3/s?refs=object&amp;project=art" class="xa">object</a>,
<a class="l" name="2249" href="#2249">2249</a>            <a class="d" href="#jvmtiMonitorUsage">jvmtiMonitorUsage</a>* <a href="/9.0.0_r3/s?defs=info_ptr&amp;project=art">info_ptr</a>) {
<a class="hl" name="2250" href="#2250">2250</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetObjectMonitorUsage&amp;project=art">GetObjectMonitorUsage</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=object&amp;project=art">object</a>, <a href="/9.0.0_r3/s?defs=info_ptr&amp;project=art">info_ptr</a>);
<a class="l" name="2251" href="#2251">2251</a>  }
<a class="l" name="2252" href="#2252">2252</a>
<a class="l" name="2253" href="#2253">2253</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetFieldName"/><a href="/9.0.0_r3/s?refs=GetFieldName&amp;project=art" class="xf">GetFieldName</a>(<a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a class="xa" name="klass"/><a href="/9.0.0_r3/s?refs=klass&amp;project=art" class="xa">klass</a>,
<a class="l" name="2254" href="#2254">2254</a>            <a href="/9.0.0_r3/s?defs=jfieldID&amp;project=art">jfieldID</a> <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>,
<a class="l" name="2255" href="#2255">2255</a>            <b>char</b>** <a href="/9.0.0_r3/s?defs=name_ptr&amp;project=art">name_ptr</a>,
<a class="l" name="2256" href="#2256">2256</a>            <b>char</b>** <a href="/9.0.0_r3/s?defs=signature_ptr&amp;project=art">signature_ptr</a>,
<a class="l" name="2257" href="#2257">2257</a>            <b>char</b>** <a href="/9.0.0_r3/s?defs=generic_ptr&amp;project=art">generic_ptr</a>) {
<a class="l" name="2258" href="#2258">2258</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetFieldName&amp;project=art">GetFieldName</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>, <a href="/9.0.0_r3/s?defs=name_ptr&amp;project=art">name_ptr</a>, <a href="/9.0.0_r3/s?defs=signature_ptr&amp;project=art">signature_ptr</a>, <a href="/9.0.0_r3/s?defs=generic_ptr&amp;project=art">generic_ptr</a>);
<a class="l" name="2259" href="#2259">2259</a>  }
<a class="hl" name="2260" href="#2260">2260</a>
<a class="l" name="2261" href="#2261">2261</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetFieldDeclaringClass"/><a href="/9.0.0_r3/s?refs=GetFieldDeclaringClass&amp;project=art" class="xf">GetFieldDeclaringClass</a>(<a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a class="xa" name="klass"/><a href="/9.0.0_r3/s?refs=klass&amp;project=art" class="xa">klass</a>,
<a class="l" name="2262" href="#2262">2262</a>            <a href="/9.0.0_r3/s?defs=jfieldID&amp;project=art">jfieldID</a> <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>,
<a class="l" name="2263" href="#2263">2263</a>            <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a>* <a href="/9.0.0_r3/s?defs=declaring_class_ptr&amp;project=art">declaring_class_ptr</a>) {
<a class="l" name="2264" href="#2264">2264</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetFieldDeclaringClass&amp;project=art">GetFieldDeclaringClass</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>, <a href="/9.0.0_r3/s?defs=declaring_class_ptr&amp;project=art">declaring_class_ptr</a>);
<a class="l" name="2265" href="#2265">2265</a>  }
<a class="l" name="2266" href="#2266">2266</a>
<a class="l" name="2267" href="#2267">2267</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetFieldModifiers"/><a href="/9.0.0_r3/s?refs=GetFieldModifiers&amp;project=art" class="xf">GetFieldModifiers</a>(<a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a class="xa" name="klass"/><a href="/9.0.0_r3/s?refs=klass&amp;project=art" class="xa">klass</a>,
<a class="l" name="2268" href="#2268">2268</a>            <a href="/9.0.0_r3/s?defs=jfieldID&amp;project=art">jfieldID</a> <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>,
<a class="l" name="2269" href="#2269">2269</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=modifiers_ptr&amp;project=art">modifiers_ptr</a>) {
<a class="hl" name="2270" href="#2270">2270</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetFieldModifiers&amp;project=art">GetFieldModifiers</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>, <a href="/9.0.0_r3/s?defs=modifiers_ptr&amp;project=art">modifiers_ptr</a>);
<a class="l" name="2271" href="#2271">2271</a>  }
<a class="l" name="2272" href="#2272">2272</a>
<a class="l" name="2273" href="#2273">2273</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="IsFieldSynthetic"/><a href="/9.0.0_r3/s?refs=IsFieldSynthetic&amp;project=art" class="xf">IsFieldSynthetic</a>(<a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a> <a class="xa" name="klass"/><a href="/9.0.0_r3/s?refs=klass&amp;project=art" class="xa">klass</a>,
<a class="l" name="2274" href="#2274">2274</a>            <a href="/9.0.0_r3/s?defs=jfieldID&amp;project=art">jfieldID</a> <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>,
<a class="l" name="2275" href="#2275">2275</a>            <a href="/9.0.0_r3/s?defs=jboolean&amp;project=art">jboolean</a>* <a href="/9.0.0_r3/s?defs=is_synthetic_ptr&amp;project=art">is_synthetic_ptr</a>) {
<a class="l" name="2276" href="#2276">2276</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=IsFieldSynthetic&amp;project=art">IsFieldSynthetic</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=klass&amp;project=art">klass</a>, <a href="/9.0.0_r3/s?defs=field&amp;project=art">field</a>, <a href="/9.0.0_r3/s?defs=is_synthetic_ptr&amp;project=art">is_synthetic_ptr</a>);
<a class="l" name="2277" href="#2277">2277</a>  }
<a class="l" name="2278" href="#2278">2278</a>
<a class="l" name="2279" href="#2279">2279</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetMethodName"/><a href="/9.0.0_r3/s?refs=GetMethodName&amp;project=art" class="xf">GetMethodName</a>(<a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a class="xa" name="method"/><a href="/9.0.0_r3/s?refs=method&amp;project=art" class="xa">method</a>,
<a class="hl" name="2280" href="#2280">2280</a>            <b>char</b>** <a href="/9.0.0_r3/s?defs=name_ptr&amp;project=art">name_ptr</a>,
<a class="l" name="2281" href="#2281">2281</a>            <b>char</b>** <a href="/9.0.0_r3/s?defs=signature_ptr&amp;project=art">signature_ptr</a>,
<a class="l" name="2282" href="#2282">2282</a>            <b>char</b>** <a href="/9.0.0_r3/s?defs=generic_ptr&amp;project=art">generic_ptr</a>) {
<a class="l" name="2283" href="#2283">2283</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetMethodName&amp;project=art">GetMethodName</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>, <a href="/9.0.0_r3/s?defs=name_ptr&amp;project=art">name_ptr</a>, <a href="/9.0.0_r3/s?defs=signature_ptr&amp;project=art">signature_ptr</a>, <a href="/9.0.0_r3/s?defs=generic_ptr&amp;project=art">generic_ptr</a>);
<a class="l" name="2284" href="#2284">2284</a>  }
<a class="l" name="2285" href="#2285">2285</a>
<a class="l" name="2286" href="#2286">2286</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetMethodDeclaringClass"/><a href="/9.0.0_r3/s?refs=GetMethodDeclaringClass&amp;project=art" class="xf">GetMethodDeclaringClass</a>(<a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a class="xa" name="method"/><a href="/9.0.0_r3/s?refs=method&amp;project=art" class="xa">method</a>,
<a class="l" name="2287" href="#2287">2287</a>            <a href="/9.0.0_r3/s?defs=jclass&amp;project=art">jclass</a>* <a href="/9.0.0_r3/s?defs=declaring_class_ptr&amp;project=art">declaring_class_ptr</a>) {
<a class="l" name="2288" href="#2288">2288</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetMethodDeclaringClass&amp;project=art">GetMethodDeclaringClass</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>, <a href="/9.0.0_r3/s?defs=declaring_class_ptr&amp;project=art">declaring_class_ptr</a>);
<a class="l" name="2289" href="#2289">2289</a>  }
<a class="hl" name="2290" href="#2290">2290</a>
<a class="l" name="2291" href="#2291">2291</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetMethodModifiers"/><a href="/9.0.0_r3/s?refs=GetMethodModifiers&amp;project=art" class="xf">GetMethodModifiers</a>(<a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a class="xa" name="method"/><a href="/9.0.0_r3/s?refs=method&amp;project=art" class="xa">method</a>,
<a class="l" name="2292" href="#2292">2292</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=modifiers_ptr&amp;project=art">modifiers_ptr</a>) {
<a class="l" name="2293" href="#2293">2293</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetMethodModifiers&amp;project=art">GetMethodModifiers</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>, <a href="/9.0.0_r3/s?defs=modifiers_ptr&amp;project=art">modifiers_ptr</a>);
<a class="l" name="2294" href="#2294">2294</a>  }
<a class="l" name="2295" href="#2295">2295</a>
<a class="l" name="2296" href="#2296">2296</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetMaxLocals"/><a href="/9.0.0_r3/s?refs=GetMaxLocals&amp;project=art" class="xf">GetMaxLocals</a>(<a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a class="xa" name="method"/><a href="/9.0.0_r3/s?refs=method&amp;project=art" class="xa">method</a>,
<a class="l" name="2297" href="#2297">2297</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#max_ptr">max_ptr</a>) {
<a class="l" name="2298" href="#2298">2298</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetMaxLocals&amp;project=art">GetMaxLocals</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>, <a class="d" href="#max_ptr">max_ptr</a>);
<a class="l" name="2299" href="#2299">2299</a>  }
<a class="hl" name="2300" href="#2300">2300</a>
<a class="l" name="2301" href="#2301">2301</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetArgumentsSize"/><a href="/9.0.0_r3/s?refs=GetArgumentsSize&amp;project=art" class="xf">GetArgumentsSize</a>(<a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a class="xa" name="method"/><a href="/9.0.0_r3/s?refs=method&amp;project=art" class="xa">method</a>,
<a class="l" name="2302" href="#2302">2302</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=size_ptr&amp;project=art">size_ptr</a>) {
<a class="l" name="2303" href="#2303">2303</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetArgumentsSize&amp;project=art">GetArgumentsSize</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>, <a href="/9.0.0_r3/s?defs=size_ptr&amp;project=art">size_ptr</a>);
<a class="l" name="2304" href="#2304">2304</a>  }
<a class="l" name="2305" href="#2305">2305</a>
<a class="l" name="2306" href="#2306">2306</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetLineNumberTable"/><a href="/9.0.0_r3/s?refs=GetLineNumberTable&amp;project=art" class="xf">GetLineNumberTable</a>(<a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a class="xa" name="method"/><a href="/9.0.0_r3/s?refs=method&amp;project=art" class="xa">method</a>,
<a class="l" name="2307" href="#2307">2307</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=entry_count_ptr&amp;project=art">entry_count_ptr</a>,
<a class="l" name="2308" href="#2308">2308</a>            <a class="d" href="#jvmtiLineNumberEntry">jvmtiLineNumberEntry</a>** <a href="/9.0.0_r3/s?defs=table_ptr&amp;project=art">table_ptr</a>) {
<a class="l" name="2309" href="#2309">2309</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetLineNumberTable&amp;project=art">GetLineNumberTable</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>, <a href="/9.0.0_r3/s?defs=entry_count_ptr&amp;project=art">entry_count_ptr</a>, <a href="/9.0.0_r3/s?defs=table_ptr&amp;project=art">table_ptr</a>);
<a class="hl" name="2310" href="#2310">2310</a>  }
<a class="l" name="2311" href="#2311">2311</a>
<a class="l" name="2312" href="#2312">2312</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetMethodLocation"/><a href="/9.0.0_r3/s?refs=GetMethodLocation&amp;project=art" class="xf">GetMethodLocation</a>(<a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a class="xa" name="method"/><a href="/9.0.0_r3/s?refs=method&amp;project=art" class="xa">method</a>,
<a class="l" name="2313" href="#2313">2313</a>            <a class="d" href="#jlocation">jlocation</a>* <a class="d" href="#start_location_ptr">start_location_ptr</a>,
<a class="l" name="2314" href="#2314">2314</a>            <a class="d" href="#jlocation">jlocation</a>* <a class="d" href="#end_location_ptr">end_location_ptr</a>) {
<a class="l" name="2315" href="#2315">2315</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetMethodLocation&amp;project=art">GetMethodLocation</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>, <a class="d" href="#start_location_ptr">start_location_ptr</a>, <a class="d" href="#end_location_ptr">end_location_ptr</a>);
<a class="l" name="2316" href="#2316">2316</a>  }
<a class="l" name="2317" href="#2317">2317</a>
<a class="l" name="2318" href="#2318">2318</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetLocalVariableTable"/><a href="/9.0.0_r3/s?refs=GetLocalVariableTable&amp;project=art" class="xf">GetLocalVariableTable</a>(<a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a class="xa" name="method"/><a href="/9.0.0_r3/s?refs=method&amp;project=art" class="xa">method</a>,
<a class="l" name="2319" href="#2319">2319</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a href="/9.0.0_r3/s?defs=entry_count_ptr&amp;project=art">entry_count_ptr</a>,
<a class="hl" name="2320" href="#2320">2320</a>            <a class="d" href="#jvmtiLocalVariableEntry">jvmtiLocalVariableEntry</a>** <a href="/9.0.0_r3/s?defs=table_ptr&amp;project=art">table_ptr</a>) {
<a class="l" name="2321" href="#2321">2321</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetLocalVariableTable&amp;project=art">GetLocalVariableTable</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>, <a href="/9.0.0_r3/s?defs=entry_count_ptr&amp;project=art">entry_count_ptr</a>, <a href="/9.0.0_r3/s?defs=table_ptr&amp;project=art">table_ptr</a>);
<a class="l" name="2322" href="#2322">2322</a>  }
<a class="l" name="2323" href="#2323">2323</a>
<a class="l" name="2324" href="#2324">2324</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetBytecodes"/><a href="/9.0.0_r3/s?refs=GetBytecodes&amp;project=art" class="xf">GetBytecodes</a>(<a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a class="xa" name="method"/><a href="/9.0.0_r3/s?refs=method&amp;project=art" class="xa">method</a>,
<a class="l" name="2325" href="#2325">2325</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="d" href="#bytecode_count_ptr">bytecode_count_ptr</a>,
<a class="l" name="2326" href="#2326">2326</a>            <b>unsigned</b> <b>char</b>** <a class="d" href="#bytecodes_ptr">bytecodes_ptr</a>) {
<a class="l" name="2327" href="#2327">2327</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetBytecodes&amp;project=art">GetBytecodes</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>, <a class="d" href="#bytecode_count_ptr">bytecode_count_ptr</a>, <a class="d" href="#bytecodes_ptr">bytecodes_ptr</a>);
<a class="l" name="2328" href="#2328">2328</a>  }
<a class="l" name="2329" href="#2329">2329</a>
<a class="hl" name="2330" href="#2330">2330</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="IsMethodNative"/><a href="/9.0.0_r3/s?refs=IsMethodNative&amp;project=art" class="xf">IsMethodNative</a>(<a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a class="xa" name="method"/><a href="/9.0.0_r3/s?refs=method&amp;project=art" class="xa">method</a>,
<a class="l" name="2331" href="#2331">2331</a>            <a href="/9.0.0_r3/s?defs=jboolean&amp;project=art">jboolean</a>* <a class="d" href="#is_native_ptr">is_native_ptr</a>) {
<a class="l" name="2332" href="#2332">2332</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=IsMethodNative&amp;project=art">IsMethodNative</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>, <a class="d" href="#is_native_ptr">is_native_ptr</a>);
<a class="l" name="2333" href="#2333">2333</a>  }
<a class="l" name="2334" href="#2334">2334</a>
<a class="l" name="2335" href="#2335">2335</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="IsMethodSynthetic"/><a href="/9.0.0_r3/s?refs=IsMethodSynthetic&amp;project=art" class="xf">IsMethodSynthetic</a>(<a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a class="xa" name="method"/><a href="/9.0.0_r3/s?refs=method&amp;project=art" class="xa">method</a>,
<a class="l" name="2336" href="#2336">2336</a>            <a href="/9.0.0_r3/s?defs=jboolean&amp;project=art">jboolean</a>* <a href="/9.0.0_r3/s?defs=is_synthetic_ptr&amp;project=art">is_synthetic_ptr</a>) {
<a class="l" name="2337" href="#2337">2337</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=IsMethodSynthetic&amp;project=art">IsMethodSynthetic</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>, <a href="/9.0.0_r3/s?defs=is_synthetic_ptr&amp;project=art">is_synthetic_ptr</a>);
<a class="l" name="2338" href="#2338">2338</a>  }
<a class="l" name="2339" href="#2339">2339</a>
<a class="hl" name="2340" href="#2340">2340</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="IsMethodObsolete"/><a href="/9.0.0_r3/s?refs=IsMethodObsolete&amp;project=art" class="xf">IsMethodObsolete</a>(<a href="/9.0.0_r3/s?defs=jmethodID&amp;project=art">jmethodID</a> <a class="xa" name="method"/><a href="/9.0.0_r3/s?refs=method&amp;project=art" class="xa">method</a>,
<a class="l" name="2341" href="#2341">2341</a>            <a href="/9.0.0_r3/s?defs=jboolean&amp;project=art">jboolean</a>* <a class="d" href="#is_obsolete_ptr">is_obsolete_ptr</a>) {
<a class="l" name="2342" href="#2342">2342</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=IsMethodObsolete&amp;project=art">IsMethodObsolete</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=method&amp;project=art">method</a>, <a class="d" href="#is_obsolete_ptr">is_obsolete_ptr</a>);
<a class="l" name="2343" href="#2343">2343</a>  }
<a class="l" name="2344" href="#2344">2344</a>
<a class="l" name="2345" href="#2345">2345</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="SetNativeMethodPrefix"/><a href="/9.0.0_r3/s?refs=SetNativeMethodPrefix&amp;project=art" class="xf">SetNativeMethodPrefix</a>(<b>const</b> <b>char</b>* <a class="xa" name="prefix"/><a href="/9.0.0_r3/s?refs=prefix&amp;project=art" class="xa">prefix</a>) {
<a class="l" name="2346" href="#2346">2346</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=SetNativeMethodPrefix&amp;project=art">SetNativeMethodPrefix</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a class="d" href="#prefix">prefix</a>);
<a class="l" name="2347" href="#2347">2347</a>  }
<a class="l" name="2348" href="#2348">2348</a>
<a class="l" name="2349" href="#2349">2349</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="SetNativeMethodPrefixes"/><a href="/9.0.0_r3/s?refs=SetNativeMethodPrefixes&amp;project=art" class="xf">SetNativeMethodPrefixes</a>(<a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xa" name="prefix_count"/><a href="/9.0.0_r3/s?refs=prefix_count&amp;project=art" class="xa">prefix_count</a>,
<a class="hl" name="2350" href="#2350">2350</a>            <b>char</b>** <a class="d" href="#prefixes">prefixes</a>) {
<a class="l" name="2351" href="#2351">2351</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=SetNativeMethodPrefixes&amp;project=art">SetNativeMethodPrefixes</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a class="d" href="#prefix_count">prefix_count</a>, <a class="d" href="#prefixes">prefixes</a>);
<a class="l" name="2352" href="#2352">2352</a>  }
<a class="l" name="2353" href="#2353">2353</a>
<a class="l" name="2354" href="#2354">2354</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="CreateRawMonitor"/><a href="/9.0.0_r3/s?refs=CreateRawMonitor&amp;project=art" class="xf">CreateRawMonitor</a>(<b>const</b> <b>char</b>* <a class="xa" name="name"/><a href="/9.0.0_r3/s?refs=name&amp;project=art" class="xa">name</a>,
<a class="l" name="2355" href="#2355">2355</a>            <a class="d" href="#jrawMonitorID">jrawMonitorID</a>* <a href="/9.0.0_r3/s?defs=monitor_ptr&amp;project=art">monitor_ptr</a>) {
<a class="l" name="2356" href="#2356">2356</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=CreateRawMonitor&amp;project=art">CreateRawMonitor</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=name&amp;project=art">name</a>, <a href="/9.0.0_r3/s?defs=monitor_ptr&amp;project=art">monitor_ptr</a>);
<a class="l" name="2357" href="#2357">2357</a>  }
<a class="l" name="2358" href="#2358">2358</a>
<a class="l" name="2359" href="#2359">2359</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="DestroyRawMonitor"/><a href="/9.0.0_r3/s?refs=DestroyRawMonitor&amp;project=art" class="xf">DestroyRawMonitor</a>(<a class="d" href="#jrawMonitorID">jrawMonitorID</a> <a class="xa" name="monitor"/><a href="/9.0.0_r3/s?refs=monitor&amp;project=art" class="xa">monitor</a>) {
<a class="hl" name="2360" href="#2360">2360</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=DestroyRawMonitor&amp;project=art">DestroyRawMonitor</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=monitor&amp;project=art">monitor</a>);
<a class="l" name="2361" href="#2361">2361</a>  }
<a class="l" name="2362" href="#2362">2362</a>
<a class="l" name="2363" href="#2363">2363</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="RawMonitorEnter"/><a href="/9.0.0_r3/s?refs=RawMonitorEnter&amp;project=art" class="xf">RawMonitorEnter</a>(<a class="d" href="#jrawMonitorID">jrawMonitorID</a> <a class="xa" name="monitor"/><a href="/9.0.0_r3/s?refs=monitor&amp;project=art" class="xa">monitor</a>) {
<a class="l" name="2364" href="#2364">2364</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=RawMonitorEnter&amp;project=art">RawMonitorEnter</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=monitor&amp;project=art">monitor</a>);
<a class="l" name="2365" href="#2365">2365</a>  }
<a class="l" name="2366" href="#2366">2366</a>
<a class="l" name="2367" href="#2367">2367</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="RawMonitorExit"/><a href="/9.0.0_r3/s?refs=RawMonitorExit&amp;project=art" class="xf">RawMonitorExit</a>(<a class="d" href="#jrawMonitorID">jrawMonitorID</a> <a class="xa" name="monitor"/><a href="/9.0.0_r3/s?refs=monitor&amp;project=art" class="xa">monitor</a>) {
<a class="l" name="2368" href="#2368">2368</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=RawMonitorExit&amp;project=art">RawMonitorExit</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=monitor&amp;project=art">monitor</a>);
<a class="l" name="2369" href="#2369">2369</a>  }
<a class="hl" name="2370" href="#2370">2370</a>
<a class="l" name="2371" href="#2371">2371</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="RawMonitorWait"/><a href="/9.0.0_r3/s?refs=RawMonitorWait&amp;project=art" class="xf">RawMonitorWait</a>(<a class="d" href="#jrawMonitorID">jrawMonitorID</a> <a class="xa" name="monitor"/><a href="/9.0.0_r3/s?refs=monitor&amp;project=art" class="xa">monitor</a>,
<a class="l" name="2372" href="#2372">2372</a>            <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a> <a class="d" href="#millis">millis</a>) {
<a class="l" name="2373" href="#2373">2373</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=RawMonitorWait&amp;project=art">RawMonitorWait</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=monitor&amp;project=art">monitor</a>, <a class="d" href="#millis">millis</a>);
<a class="l" name="2374" href="#2374">2374</a>  }
<a class="l" name="2375" href="#2375">2375</a>
<a class="l" name="2376" href="#2376">2376</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="RawMonitorNotify"/><a href="/9.0.0_r3/s?refs=RawMonitorNotify&amp;project=art" class="xf">RawMonitorNotify</a>(<a class="d" href="#jrawMonitorID">jrawMonitorID</a> <a class="xa" name="monitor"/><a href="/9.0.0_r3/s?refs=monitor&amp;project=art" class="xa">monitor</a>) {
<a class="l" name="2377" href="#2377">2377</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=RawMonitorNotify&amp;project=art">RawMonitorNotify</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=monitor&amp;project=art">monitor</a>);
<a class="l" name="2378" href="#2378">2378</a>  }
<a class="l" name="2379" href="#2379">2379</a>
<a class="hl" name="2380" href="#2380">2380</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="RawMonitorNotifyAll"/><a href="/9.0.0_r3/s?refs=RawMonitorNotifyAll&amp;project=art" class="xf">RawMonitorNotifyAll</a>(<a class="d" href="#jrawMonitorID">jrawMonitorID</a> <a class="xa" name="monitor"/><a href="/9.0.0_r3/s?refs=monitor&amp;project=art" class="xa">monitor</a>) {
<a class="l" name="2381" href="#2381">2381</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=RawMonitorNotifyAll&amp;project=art">RawMonitorNotifyAll</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=monitor&amp;project=art">monitor</a>);
<a class="l" name="2382" href="#2382">2382</a>  }
<a class="l" name="2383" href="#2383">2383</a>
<a class="l" name="2384" href="#2384">2384</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="SetJNIFunctionTable"/><a href="/9.0.0_r3/s?refs=SetJNIFunctionTable&amp;project=art" class="xf">SetJNIFunctionTable</a>(<b>const</b> <a class="d" href="#jniNativeInterface">jniNativeInterface</a>* <a class="xa" name="function_table"/><a href="/9.0.0_r3/s?refs=function_table&amp;project=art" class="xa">function_table</a>) {
<a class="l" name="2385" href="#2385">2385</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=SetJNIFunctionTable&amp;project=art">SetJNIFunctionTable</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=function_table&amp;project=art">function_table</a>);
<a class="l" name="2386" href="#2386">2386</a>  }
<a class="l" name="2387" href="#2387">2387</a>
<a class="l" name="2388" href="#2388">2388</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetJNIFunctionTable"/><a href="/9.0.0_r3/s?refs=GetJNIFunctionTable&amp;project=art" class="xf">GetJNIFunctionTable</a>(<a class="d" href="#jniNativeInterface">jniNativeInterface</a>** <a class="xa" name="function_table"/><a href="/9.0.0_r3/s?refs=function_table&amp;project=art" class="xa">function_table</a>) {
<a class="l" name="2389" href="#2389">2389</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetJNIFunctionTable&amp;project=art">GetJNIFunctionTable</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=function_table&amp;project=art">function_table</a>);
<a class="hl" name="2390" href="#2390">2390</a>  }
<a class="l" name="2391" href="#2391">2391</a>
<a class="l" name="2392" href="#2392">2392</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="SetEventCallbacks"/><a href="/9.0.0_r3/s?refs=SetEventCallbacks&amp;project=art" class="xf">SetEventCallbacks</a>(<b>const</b> <a class="d" href="#jvmtiEventCallbacks">jvmtiEventCallbacks</a>* <a class="xa" name="callbacks"/><a href="/9.0.0_r3/s?refs=callbacks&amp;project=art" class="xa">callbacks</a>,
<a class="l" name="2393" href="#2393">2393</a>            <a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="d" href="#size_of_callbacks">size_of_callbacks</a>) {
<a class="l" name="2394" href="#2394">2394</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=SetEventCallbacks&amp;project=art">SetEventCallbacks</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=callbacks&amp;project=art">callbacks</a>, <a class="d" href="#size_of_callbacks">size_of_callbacks</a>);
<a class="l" name="2395" href="#2395">2395</a>  }
<a class="l" name="2396" href="#2396">2396</a>
<a class="l" name="2397" href="#2397">2397</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="SetEventNotificationMode"/><a href="/9.0.0_r3/s?refs=SetEventNotificationMode&amp;project=art" class="xf">SetEventNotificationMode</a>(<a class="d" href="#jvmtiEventMode">jvmtiEventMode</a> <a class="xa" name="mode"/><a href="/9.0.0_r3/s?refs=mode&amp;project=art" class="xa">mode</a>,
<a class="l" name="2398" href="#2398">2398</a>            <a class="d" href="#jvmtiEvent">jvmtiEvent</a> <a href="/9.0.0_r3/s?defs=event_type&amp;project=art">event_type</a>,
<a class="l" name="2399" href="#2399">2399</a>            <a class="d" href="#jthread">jthread</a> <a class="d" href="#event_thread">event_thread</a>,
<a class="hl" name="2400" href="#2400">2400</a>             ...) {
<a class="l" name="2401" href="#2401">2401</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=SetEventNotificationMode&amp;project=art">SetEventNotificationMode</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a class="d" href="#mode">mode</a>, <a href="/9.0.0_r3/s?defs=event_type&amp;project=art">event_type</a>, <a class="d" href="#event_thread">event_thread</a>);
<a class="l" name="2402" href="#2402">2402</a>  }
<a class="l" name="2403" href="#2403">2403</a>
<a class="l" name="2404" href="#2404">2404</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GenerateEvents"/><a href="/9.0.0_r3/s?refs=GenerateEvents&amp;project=art" class="xf">GenerateEvents</a>(<a class="d" href="#jvmtiEvent">jvmtiEvent</a> <a class="xa" name="event_type"/><a href="/9.0.0_r3/s?refs=event_type&amp;project=art" class="xa">event_type</a>) {
<a class="l" name="2405" href="#2405">2405</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GenerateEvents&amp;project=art">GenerateEvents</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=event_type&amp;project=art">event_type</a>);
<a class="l" name="2406" href="#2406">2406</a>  }
<a class="l" name="2407" href="#2407">2407</a>
<a class="l" name="2408" href="#2408">2408</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetExtensionFunctions"/><a href="/9.0.0_r3/s?refs=GetExtensionFunctions&amp;project=art" class="xf">GetExtensionFunctions</a>(<a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="xa" name="extension_count_ptr"/><a href="/9.0.0_r3/s?refs=extension_count_ptr&amp;project=art" class="xa">extension_count_ptr</a>,
<a class="l" name="2409" href="#2409">2409</a>            <a class="d" href="#jvmtiExtensionFunctionInfo">jvmtiExtensionFunctionInfo</a>** <a href="/9.0.0_r3/s?defs=extensions&amp;project=art">extensions</a>) {
<a class="hl" name="2410" href="#2410">2410</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetExtensionFunctions&amp;project=art">GetExtensionFunctions</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=extension_count_ptr&amp;project=art">extension_count_ptr</a>, <a href="/9.0.0_r3/s?defs=extensions&amp;project=art">extensions</a>);
<a class="l" name="2411" href="#2411">2411</a>  }
<a class="l" name="2412" href="#2412">2412</a>
<a class="l" name="2413" href="#2413">2413</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetExtensionEvents"/><a href="/9.0.0_r3/s?refs=GetExtensionEvents&amp;project=art" class="xf">GetExtensionEvents</a>(<a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="xa" name="extension_count_ptr"/><a href="/9.0.0_r3/s?refs=extension_count_ptr&amp;project=art" class="xa">extension_count_ptr</a>,
<a class="l" name="2414" href="#2414">2414</a>            <a class="d" href="#jvmtiExtensionEventInfo">jvmtiExtensionEventInfo</a>** <a href="/9.0.0_r3/s?defs=extensions&amp;project=art">extensions</a>) {
<a class="l" name="2415" href="#2415">2415</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetExtensionEvents&amp;project=art">GetExtensionEvents</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=extension_count_ptr&amp;project=art">extension_count_ptr</a>, <a href="/9.0.0_r3/s?defs=extensions&amp;project=art">extensions</a>);
<a class="l" name="2416" href="#2416">2416</a>  }
<a class="l" name="2417" href="#2417">2417</a>
<a class="l" name="2418" href="#2418">2418</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="SetExtensionEventCallback"/><a href="/9.0.0_r3/s?refs=SetExtensionEventCallback&amp;project=art" class="xf">SetExtensionEventCallback</a>(<a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a> <a class="xa" name="extension_event_index"/><a href="/9.0.0_r3/s?refs=extension_event_index&amp;project=art" class="xa">extension_event_index</a>,
<a class="l" name="2419" href="#2419">2419</a>            <a class="d" href="#jvmtiExtensionEvent">jvmtiExtensionEvent</a> <a class="d" href="#callback">callback</a>) {
<a class="hl" name="2420" href="#2420">2420</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=SetExtensionEventCallback&amp;project=art">SetExtensionEventCallback</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=extension_event_index&amp;project=art">extension_event_index</a>, <a class="d" href="#callback">callback</a>);
<a class="l" name="2421" href="#2421">2421</a>  }
<a class="l" name="2422" href="#2422">2422</a>
<a class="l" name="2423" href="#2423">2423</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetPotentialCapabilities"/><a href="/9.0.0_r3/s?refs=GetPotentialCapabilities&amp;project=art" class="xf">GetPotentialCapabilities</a>(<a class="d" href="#jvmtiCapabilities">jvmtiCapabilities</a>* <a class="xa" name="capabilities_ptr"/><a href="/9.0.0_r3/s?refs=capabilities_ptr&amp;project=art" class="xa">capabilities_ptr</a>) {
<a class="l" name="2424" href="#2424">2424</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetPotentialCapabilities&amp;project=art">GetPotentialCapabilities</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=capabilities_ptr&amp;project=art">capabilities_ptr</a>);
<a class="l" name="2425" href="#2425">2425</a>  }
<a class="l" name="2426" href="#2426">2426</a>
<a class="l" name="2427" href="#2427">2427</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="AddCapabilities"/><a href="/9.0.0_r3/s?refs=AddCapabilities&amp;project=art" class="xf">AddCapabilities</a>(<b>const</b> <a class="d" href="#jvmtiCapabilities">jvmtiCapabilities</a>* <a class="xa" name="capabilities_ptr"/><a href="/9.0.0_r3/s?refs=capabilities_ptr&amp;project=art" class="xa">capabilities_ptr</a>) {
<a class="l" name="2428" href="#2428">2428</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=AddCapabilities&amp;project=art">AddCapabilities</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=capabilities_ptr&amp;project=art">capabilities_ptr</a>);
<a class="l" name="2429" href="#2429">2429</a>  }
<a class="hl" name="2430" href="#2430">2430</a>
<a class="l" name="2431" href="#2431">2431</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="RelinquishCapabilities"/><a href="/9.0.0_r3/s?refs=RelinquishCapabilities&amp;project=art" class="xf">RelinquishCapabilities</a>(<b>const</b> <a class="d" href="#jvmtiCapabilities">jvmtiCapabilities</a>* <a class="xa" name="capabilities_ptr"/><a href="/9.0.0_r3/s?refs=capabilities_ptr&amp;project=art" class="xa">capabilities_ptr</a>) {
<a class="l" name="2432" href="#2432">2432</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=RelinquishCapabilities&amp;project=art">RelinquishCapabilities</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=capabilities_ptr&amp;project=art">capabilities_ptr</a>);
<a class="l" name="2433" href="#2433">2433</a>  }
<a class="l" name="2434" href="#2434">2434</a>
<a class="l" name="2435" href="#2435">2435</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetCapabilities"/><a href="/9.0.0_r3/s?refs=GetCapabilities&amp;project=art" class="xf">GetCapabilities</a>(<a class="d" href="#jvmtiCapabilities">jvmtiCapabilities</a>* <a class="xa" name="capabilities_ptr"/><a href="/9.0.0_r3/s?refs=capabilities_ptr&amp;project=art" class="xa">capabilities_ptr</a>) {
<a class="l" name="2436" href="#2436">2436</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetCapabilities&amp;project=art">GetCapabilities</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=capabilities_ptr&amp;project=art">capabilities_ptr</a>);
<a class="l" name="2437" href="#2437">2437</a>  }
<a class="l" name="2438" href="#2438">2438</a>
<a class="l" name="2439" href="#2439">2439</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetCurrentThreadCpuTimerInfo"/><a href="/9.0.0_r3/s?refs=GetCurrentThreadCpuTimerInfo&amp;project=art" class="xf">GetCurrentThreadCpuTimerInfo</a>(<a class="d" href="#jvmtiTimerInfo">jvmtiTimerInfo</a>* <a class="xa" name="info_ptr"/><a href="/9.0.0_r3/s?refs=info_ptr&amp;project=art" class="xa">info_ptr</a>) {
<a class="hl" name="2440" href="#2440">2440</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetCurrentThreadCpuTimerInfo&amp;project=art">GetCurrentThreadCpuTimerInfo</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=info_ptr&amp;project=art">info_ptr</a>);
<a class="l" name="2441" href="#2441">2441</a>  }
<a class="l" name="2442" href="#2442">2442</a>
<a class="l" name="2443" href="#2443">2443</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetCurrentThreadCpuTime"/><a href="/9.0.0_r3/s?refs=GetCurrentThreadCpuTime&amp;project=art" class="xf">GetCurrentThreadCpuTime</a>(<a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>* <a class="xa" name="nanos_ptr"/><a href="/9.0.0_r3/s?refs=nanos_ptr&amp;project=art" class="xa">nanos_ptr</a>) {
<a class="l" name="2444" href="#2444">2444</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetCurrentThreadCpuTime&amp;project=art">GetCurrentThreadCpuTime</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=nanos_ptr&amp;project=art">nanos_ptr</a>);
<a class="l" name="2445" href="#2445">2445</a>  }
<a class="l" name="2446" href="#2446">2446</a>
<a class="l" name="2447" href="#2447">2447</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetThreadCpuTimerInfo"/><a href="/9.0.0_r3/s?refs=GetThreadCpuTimerInfo&amp;project=art" class="xf">GetThreadCpuTimerInfo</a>(<a class="d" href="#jvmtiTimerInfo">jvmtiTimerInfo</a>* <a class="xa" name="info_ptr"/><a href="/9.0.0_r3/s?refs=info_ptr&amp;project=art" class="xa">info_ptr</a>) {
<a class="l" name="2448" href="#2448">2448</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetThreadCpuTimerInfo&amp;project=art">GetThreadCpuTimerInfo</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=info_ptr&amp;project=art">info_ptr</a>);
<a class="l" name="2449" href="#2449">2449</a>  }
<a class="hl" name="2450" href="#2450">2450</a>
<a class="l" name="2451" href="#2451">2451</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetThreadCpuTime"/><a href="/9.0.0_r3/s?refs=GetThreadCpuTime&amp;project=art" class="xf">GetThreadCpuTime</a>(<a class="d" href="#jthread">jthread</a> <a class="xa" name="thread"/><a href="/9.0.0_r3/s?refs=thread&amp;project=art" class="xa">thread</a>,
<a class="l" name="2452" href="#2452">2452</a>            <a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>* <a href="/9.0.0_r3/s?defs=nanos_ptr&amp;project=art">nanos_ptr</a>) {
<a class="l" name="2453" href="#2453">2453</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetThreadCpuTime&amp;project=art">GetThreadCpuTime</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=thread&amp;project=art">thread</a>, <a href="/9.0.0_r3/s?defs=nanos_ptr&amp;project=art">nanos_ptr</a>);
<a class="l" name="2454" href="#2454">2454</a>  }
<a class="l" name="2455" href="#2455">2455</a>
<a class="l" name="2456" href="#2456">2456</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetTimerInfo"/><a href="/9.0.0_r3/s?refs=GetTimerInfo&amp;project=art" class="xf">GetTimerInfo</a>(<a class="d" href="#jvmtiTimerInfo">jvmtiTimerInfo</a>* <a class="xa" name="info_ptr"/><a href="/9.0.0_r3/s?refs=info_ptr&amp;project=art" class="xa">info_ptr</a>) {
<a class="l" name="2457" href="#2457">2457</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetTimerInfo&amp;project=art">GetTimerInfo</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=info_ptr&amp;project=art">info_ptr</a>);
<a class="l" name="2458" href="#2458">2458</a>  }
<a class="l" name="2459" href="#2459">2459</a>
<a class="hl" name="2460" href="#2460">2460</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetTime"/><a href="/9.0.0_r3/s?refs=GetTime&amp;project=art" class="xf">GetTime</a>(<a href="/9.0.0_r3/s?defs=jlong&amp;project=art">jlong</a>* <a class="xa" name="nanos_ptr"/><a href="/9.0.0_r3/s?refs=nanos_ptr&amp;project=art" class="xa">nanos_ptr</a>) {
<a class="l" name="2461" href="#2461">2461</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetTime&amp;project=art">GetTime</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=nanos_ptr&amp;project=art">nanos_ptr</a>);
<a class="l" name="2462" href="#2462">2462</a>  }
<a class="l" name="2463" href="#2463">2463</a>
<a class="l" name="2464" href="#2464">2464</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetAvailableProcessors"/><a href="/9.0.0_r3/s?refs=GetAvailableProcessors&amp;project=art" class="xf">GetAvailableProcessors</a>(<a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="xa" name="processor_count_ptr"/><a href="/9.0.0_r3/s?refs=processor_count_ptr&amp;project=art" class="xa">processor_count_ptr</a>) {
<a class="l" name="2465" href="#2465">2465</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetAvailableProcessors&amp;project=art">GetAvailableProcessors</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a class="d" href="#processor_count_ptr">processor_count_ptr</a>);
<a class="l" name="2466" href="#2466">2466</a>  }
<a class="l" name="2467" href="#2467">2467</a>
<a class="l" name="2468" href="#2468">2468</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="AddToBootstrapClassLoaderSearch"/><a href="/9.0.0_r3/s?refs=AddToBootstrapClassLoaderSearch&amp;project=art" class="xf">AddToBootstrapClassLoaderSearch</a>(<b>const</b> <b>char</b>* <a class="xa" name="segment"/><a href="/9.0.0_r3/s?refs=segment&amp;project=art" class="xa">segment</a>) {
<a class="l" name="2469" href="#2469">2469</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=AddToBootstrapClassLoaderSearch&amp;project=art">AddToBootstrapClassLoaderSearch</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=segment&amp;project=art">segment</a>);
<a class="hl" name="2470" href="#2470">2470</a>  }
<a class="l" name="2471" href="#2471">2471</a>
<a class="l" name="2472" href="#2472">2472</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="AddToSystemClassLoaderSearch"/><a href="/9.0.0_r3/s?refs=AddToSystemClassLoaderSearch&amp;project=art" class="xf">AddToSystemClassLoaderSearch</a>(<b>const</b> <b>char</b>* <a class="xa" name="segment"/><a href="/9.0.0_r3/s?refs=segment&amp;project=art" class="xa">segment</a>) {
<a class="l" name="2473" href="#2473">2473</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=AddToSystemClassLoaderSearch&amp;project=art">AddToSystemClassLoaderSearch</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=segment&amp;project=art">segment</a>);
<a class="l" name="2474" href="#2474">2474</a>  }
<a class="l" name="2475" href="#2475">2475</a>
<a class="l" name="2476" href="#2476">2476</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetSystemProperties"/><a href="/9.0.0_r3/s?refs=GetSystemProperties&amp;project=art" class="xf">GetSystemProperties</a>(<a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="xa" name="count_ptr"/><a href="/9.0.0_r3/s?refs=count_ptr&amp;project=art" class="xa">count_ptr</a>,
<a class="l" name="2477" href="#2477">2477</a>            <b>char</b>*** <a class="d" href="#property_ptr">property_ptr</a>) {
<a class="l" name="2478" href="#2478">2478</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetSystemProperties&amp;project=art">GetSystemProperties</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=count_ptr&amp;project=art">count_ptr</a>, <a class="d" href="#property_ptr">property_ptr</a>);
<a class="l" name="2479" href="#2479">2479</a>  }
<a class="hl" name="2480" href="#2480">2480</a>
<a class="l" name="2481" href="#2481">2481</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetSystemProperty"/><a href="/9.0.0_r3/s?refs=GetSystemProperty&amp;project=art" class="xf">GetSystemProperty</a>(<b>const</b> <b>char</b>* <a class="xa" name="property"/><a href="/9.0.0_r3/s?refs=property&amp;project=art" class="xa">property</a>,
<a class="l" name="2482" href="#2482">2482</a>            <b>char</b>** <a href="/9.0.0_r3/s?defs=value_ptr&amp;project=art">value_ptr</a>) {
<a class="l" name="2483" href="#2483">2483</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetSystemProperty&amp;project=art">GetSystemProperty</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=property&amp;project=art">property</a>, <a href="/9.0.0_r3/s?defs=value_ptr&amp;project=art">value_ptr</a>);
<a class="l" name="2484" href="#2484">2484</a>  }
<a class="l" name="2485" href="#2485">2485</a>
<a class="l" name="2486" href="#2486">2486</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="SetSystemProperty"/><a href="/9.0.0_r3/s?refs=SetSystemProperty&amp;project=art" class="xf">SetSystemProperty</a>(<b>const</b> <b>char</b>* <a class="xa" name="property"/><a href="/9.0.0_r3/s?refs=property&amp;project=art" class="xa">property</a>,
<a class="l" name="2487" href="#2487">2487</a>            <b>const</b> <b>char</b>* <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>) {
<a class="l" name="2488" href="#2488">2488</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=SetSystemProperty&amp;project=art">SetSystemProperty</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=property&amp;project=art">property</a>, <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>);
<a class="l" name="2489" href="#2489">2489</a>  }
<a class="hl" name="2490" href="#2490">2490</a>
<a class="l" name="2491" href="#2491">2491</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetPhase"/><a href="/9.0.0_r3/s?refs=GetPhase&amp;project=art" class="xf">GetPhase</a>(<a class="d" href="#jvmtiPhase">jvmtiPhase</a>* <a class="xa" name="phase_ptr"/><a href="/9.0.0_r3/s?refs=phase_ptr&amp;project=art" class="xa">phase_ptr</a>) {
<a class="l" name="2492" href="#2492">2492</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetPhase&amp;project=art">GetPhase</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a class="d" href="#phase_ptr">phase_ptr</a>);
<a class="l" name="2493" href="#2493">2493</a>  }
<a class="l" name="2494" href="#2494">2494</a>
<a class="l" name="2495" href="#2495">2495</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="DisposeEnvironment"/><a href="/9.0.0_r3/s?refs=DisposeEnvironment&amp;project=art" class="xf">DisposeEnvironment</a>() {
<a class="l" name="2496" href="#2496">2496</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=DisposeEnvironment&amp;project=art">DisposeEnvironment</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>);
<a class="l" name="2497" href="#2497">2497</a>  }
<a class="l" name="2498" href="#2498">2498</a>
<a class="l" name="2499" href="#2499">2499</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="SetEnvironmentLocalStorage"/><a href="/9.0.0_r3/s?refs=SetEnvironmentLocalStorage&amp;project=art" class="xf">SetEnvironmentLocalStorage</a>(<b>const</b> <b>void</b>* <a class="xa" name="data"/><a href="/9.0.0_r3/s?refs=data&amp;project=art" class="xa">data</a>) {
<a class="hl" name="2500" href="#2500">2500</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=SetEnvironmentLocalStorage&amp;project=art">SetEnvironmentLocalStorage</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=data&amp;project=art">data</a>);
<a class="l" name="2501" href="#2501">2501</a>  }
<a class="l" name="2502" href="#2502">2502</a>
<a class="l" name="2503" href="#2503">2503</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetEnvironmentLocalStorage"/><a href="/9.0.0_r3/s?refs=GetEnvironmentLocalStorage&amp;project=art" class="xf">GetEnvironmentLocalStorage</a>(<b>void</b>** <a class="xa" name="data_ptr"/><a href="/9.0.0_r3/s?refs=data_ptr&amp;project=art" class="xa">data_ptr</a>) {
<a class="l" name="2504" href="#2504">2504</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetEnvironmentLocalStorage&amp;project=art">GetEnvironmentLocalStorage</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a href="/9.0.0_r3/s?defs=data_ptr&amp;project=art">data_ptr</a>);
<a class="l" name="2505" href="#2505">2505</a>  }
<a class="l" name="2506" href="#2506">2506</a>
<a class="l" name="2507" href="#2507">2507</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetVersionNumber"/><a href="/9.0.0_r3/s?refs=GetVersionNumber&amp;project=art" class="xf">GetVersionNumber</a>(<a href="/9.0.0_r3/s?defs=jint&amp;project=art">jint</a>* <a class="xa" name="version_ptr"/><a href="/9.0.0_r3/s?refs=version_ptr&amp;project=art" class="xa">version_ptr</a>) {
<a class="l" name="2508" href="#2508">2508</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetVersionNumber&amp;project=art">GetVersionNumber</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a class="d" href="#version_ptr">version_ptr</a>);
<a class="l" name="2509" href="#2509">2509</a>  }
<a class="hl" name="2510" href="#2510">2510</a>
<a class="l" name="2511" href="#2511">2511</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetErrorName"/><a href="/9.0.0_r3/s?refs=GetErrorName&amp;project=art" class="xf">GetErrorName</a>(<a class="d" href="#jvmtiError">jvmtiError</a> <a class="xa" name="error"/><a href="/9.0.0_r3/s?refs=error&amp;project=art" class="xa">error</a>,
<a class="l" name="2512" href="#2512">2512</a>            <b>char</b>** <a href="/9.0.0_r3/s?defs=name_ptr&amp;project=art">name_ptr</a>) {
<a class="l" name="2513" href="#2513">2513</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetErrorName&amp;project=art">GetErrorName</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a class="d" href="#error">error</a>, <a href="/9.0.0_r3/s?defs=name_ptr&amp;project=art">name_ptr</a>);
<a class="l" name="2514" href="#2514">2514</a>  }
<a class="l" name="2515" href="#2515">2515</a>
<a class="l" name="2516" href="#2516">2516</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="SetVerboseFlag"/><a href="/9.0.0_r3/s?refs=SetVerboseFlag&amp;project=art" class="xf">SetVerboseFlag</a>(<a class="d" href="#jvmtiVerboseFlag">jvmtiVerboseFlag</a> <a class="xa" name="flag"/><a href="/9.0.0_r3/s?refs=flag&amp;project=art" class="xa">flag</a>,
<a class="l" name="2517" href="#2517">2517</a>            <a href="/9.0.0_r3/s?defs=jboolean&amp;project=art">jboolean</a> <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>) {
<a class="l" name="2518" href="#2518">2518</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=SetVerboseFlag&amp;project=art">SetVerboseFlag</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a class="d" href="#flag">flag</a>, <a href="/9.0.0_r3/s?defs=value&amp;project=art">value</a>);
<a class="l" name="2519" href="#2519">2519</a>  }
<a class="hl" name="2520" href="#2520">2520</a>
<a class="l" name="2521" href="#2521">2521</a>  <a class="d" href="#jvmtiError">jvmtiError</a> <a class="xf" name="GetJLocationFormat"/><a href="/9.0.0_r3/s?refs=GetJLocationFormat&amp;project=art" class="xf">GetJLocationFormat</a>(<a class="d" href="#jvmtiJlocationFormat">jvmtiJlocationFormat</a>* <a class="xa" name="format_ptr"/><a href="/9.0.0_r3/s?refs=format_ptr&amp;project=art" class="xa">format_ptr</a>) {
<a class="l" name="2522" href="#2522">2522</a>    <b>return</b> <a class="d" href="#functions">functions</a>-&gt;<a href="/9.0.0_r3/s?defs=GetJLocationFormat&amp;project=art">GetJLocationFormat</a>(<a href="/9.0.0_r3/s?defs=this&amp;project=art">this</a>, <a class="d" href="#format_ptr">format_ptr</a>);
<a class="l" name="2523" href="#2523">2523</a>  }
<a class="l" name="2524" href="#2524">2524</a>
<a class="l" name="2525" href="#2525">2525</a>#<b>endif</b> <span class="c">/* __cplusplus */</span>
<a class="l" name="2526" href="#2526">2526</a>};
<a class="l" name="2527" href="#2527">2527</a>
<a class="l" name="2528" href="#2528">2528</a>
<a class="l" name="2529" href="#2529">2529</a>#<b>ifdef</b> <a href="/9.0.0_r3/s?defs=__cplusplus&amp;project=art">__cplusplus</a>
<a class="hl" name="2530" href="#2530">2530</a>} <span class="c">/* extern "C" */</span>
<a class="l" name="2531" href="#2531">2531</a>#<b>endif</b> <span class="c">/* __cplusplus */</span>
<a class="l" name="2532" href="#2532">2532</a>
<a class="l" name="2533" href="#2533">2533</a>#<b>endif</b> <span class="c">/* !_JAVA_JVMTI_H_ */</span>
<a class="l" name="2534" href="#2534">2534</a>
<a class="l" name="2535" href="#2535">2535</a></pre>
</div>
    <div id="footer">
<p><a href="http://www.opensolaris.org/os/project/opengrok/"
 title="Served by OpenGrok"><span id="fti"></span></a></p>
<p>Indexes created Sun Aug 12 02:23:12 CEST 2018</p>
    
    </div>
    </div>
</div>
</body>
</html>

