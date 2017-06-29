Pod::Spec.new do |s|
	s.name             = 'JCDesignButton'
	s.version          = '0.1.0'
	s.summary          = 'A fully customisable subclass of the native UIControl which allows you to create beautiful buttons without writing any line of code.'
	s.homepage         = 'https://www.g4next.com'
	s.license          = { :type => 'MIT', :file => 'LICENSE.md' }
	s.author           = { 'dawenhing' => 'dawenhing@gmail.com' }
	s.source           = { :git => 'https://github.com/dourgulf/JCDesignButton.git', :tag => "#{s.version}" }

	s.ios.deployment_target = '8.0'

	s.source_files = 'JCDesignButton/**/*.{h,m}'
	s.resources = "JCDesignButton/**/*.xib"
	s.dependency 'IconFontKit/Core'
	s.dependency 'IconFontKit/FontAwesome'

end
